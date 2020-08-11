/*
 * Copyright (C) 2004-2015 MorphOS Development Team
 *
 * $Id: sdl-startup.c,v 1.2 2015/01/24 18:18:22 itix Exp $
 */

#include <constructor.h>
#include <stdio.h>

#include <proto/exec.h>
#include <proto/dos.h>
#include <proto/muimaster.h>

#include "../GFX_version.h"

extern void __SDL2_OpenLibError(ULONG version, const char *name);

#if defined(__NO_SDL_CONSTRUCTORS)
extern struct Library *SDL2GfxBase;
#else
int _INIT_4_SDL2GfxBase(void) __attribute__((alias("__CSTP_init_SDL2GfxBase")));
void _EXIT_4_SDL2GfxBase(void) __attribute__((alias("__DSTP_cleanup_SDL2GfxBase")));

struct Library *SDL2GfxBase;

static CONSTRUCTOR_P(init_SDL2GfxBase, 100)
{
	static const char libname[] = "sdl2_gfx.library";
	struct Library *base = OpenLibrary((STRPTR)libname, VERSION);
	SDL2GfxBase = base;

	if (base == NULL)
	{
		__SDL2_OpenLibError(VERSION, libname);
	}

	return (base == NULL);
}

static DESTRUCTOR_P(cleanup_SDL2GfxBase, 100)
{
	CloseLibrary(SDL2GfxBase);
}
#endif
