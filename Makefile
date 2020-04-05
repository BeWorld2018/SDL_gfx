# Makefile to build the SDL2_GFX library

CDEFS   = -DAROS_ALMOST_COMPATIBLE -DUSE_INLINE_STDARG -D__MORPHOS_SHAREDLIBS -D_NO_PPCINLINE
CC      = ppc-morphos-gcc-4 -noixemul

INCLUDE = -I../SDL-mos-sdl2/include
CFLAGS  = -mcpu=750 -mtune=7450 -O2 $(INCLUDE) -mresident32 -Wall -Wno-pointer-sign -fno-strict-aliasing $(CDEFS)
AR	= ar
RANLIB	= ranlib

ECHE = echo -e
BOLD = \033[1m
NRML = \033[22m

COMPILING = @$(ECHE) "compiling $(BOLD)$@$(NRML)..."
LINKING = @$(ECHE) "linking $(BOLD)$@$(NRML)..."
STRIPPING = @$(ECHE) "stripping $(BOLD)$@$(NRML)..."
ARCHIVING = @$(ECHE) "archiving $(BOLD)$@$(NRML)..."
HEADERING = @$(ECHE) "creating headers files $(BOLD)$@$(NRML)..."

TARGET  = libSDL2_gfx.a
LIBRARY = sdl2_gfx.library

TESTS = $(patsubst %.c,%,$(wildcard Test/*.c))

SOURCES = \
	SDL2_framerate.c			\
	SDL2_gfxPrimitives.c		\
	SDL2_imageFilter.c		\
	SDL2_rotozoom.c		
		
CORESOURCES = MorphOS/*.c
COREOBJECTS = $(shell echo $(CORESOURCES) | sed -e 's,\.c,\.o,g')

OBJECTS = $(shell echo $(SOURCES) | sed -e 's,\.c,\.o,g')

all: $(LIBRARY) sdklibs $(TESTS)

sdklibs:
	@cd MorphOS/devenv; if ! $(MAKE) all; then exit 1; fi;

sdk: sdklibs
	mkdir -p /usr/local/include/SDL2
	mkdir -p /usr/local/lib
	mkdir -p /usr/local/lib/libb32
	cp SDL2_framerate.h /usr/local/include/SDL2/SDL2_framerate.h
	cp SDL2_gfxPrimitives.h /usr/local/include/SDL2/SDL2_gfxPrimitives.h
	cp SDL2_imageFilter.h /usr/local/include/SDL2/SDL2_imageFilter.h
	cp SDL2_rotozoom.h /usr/local/include/SDL2/SDL2_rotozoom.h
	cp MorphOS/devenv/lib/libSDL2_gfx.a  /usr/local/lib/libSDL2_gfx.a
	cp MorphOS/devenv/lib/libb32/libSDL2_gfx.a  /usr/local/lib/libb32/libSDL2_gfx.a

headers:
	$(HEADERING)
	@cvinclude.pl --fd=MorphOS/sdk/fd/sdl2_gfx_lib.fd --clib=MorphOS/sdk/clib/sdl2_gfx_protos.h --proto=MorphOS/sdk/proto/sdl2_gfx_.h
	@cvinclude.pl --fd=MorphOS/sdk/fd/sdl2_gfx_lib.fd --clib=MorphOS/sdk/clib/sdl2_gfx_protos.h --inline=MorphOS/sdk/ppcinline/sdl2_gfx_.h
	
install: $(LIBRARY)
	@cp $(LIBRARY) LIBS:
	-flushlib $(LIBRARY)

install-iso:
	@echo "not for the ISO.. skipping"

MorphOS/GFX_library.o: MorphOS/GFX_library.c MorphOS/GFX_library.h MorphOS/GFX_stubs.h
	$(COMPILING)
	$(CC) -mcpu=750 -O2 $(INCLUDE) -Wall -fno-strict-aliasing -DAROS_ALMOST_COMPATIBLE -o $@ -c $*.c

$(TARGET): $(OBJECTS)
	$(ARCHIVING)
	@$(AR) crv $@ $^
	$(RANLIB) $@

$(LIBRARY): $(TARGET) $(COREOBJECTS)
	$(LINKING)
	$(CC) -nostartfiles -mresident32 -Wl,-Map=sdl2_gfx.map $(COREOBJECTS) -o $@.db -L. -lSDL2_gfx -L../SDL-mos-sdl2/src/core/morphos/devenv/lib -lSDL2 -lm
	$(STRIPPING)
	@ppc-morphos-strip -o $@ --remove-section=.comment $@.db

Test/test%: Test/test%.c
	$(COMPILING)
	$(CC) -noixemul -O2 -Wall -o $@ $@.c -I. -I../SDL-mos-sdl2/include -DUSE_INLINE_STDARG -LMorphOS/devenv/lib -L../SDL-mos-sdl2/src/core/morphos/devenv/lib -lSDL2_gfx -L../SDL-mos-sdl2/test -lSDL2test	-lSDL2 
	
clean:
	rm -f $(LIBRARY) $(TARGET) $(OBJECTS) $(COREOBJECTS) *.db *.s

dump:
	objdump --disassemble-all --reloc $(LIBRARY).db >$(LIBRARY).s
