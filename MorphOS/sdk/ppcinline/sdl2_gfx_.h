/* Automatically generated header! Do not edit! */

#ifndef _PPCINLINE_SDL2_GFX_H
#define _PPCINLINE_SDL2_GFX_H

#ifndef __PPCINLINE_MACROS_H
#include <ppcinline/macros.h>
#endif /* !__PPCINLINE_MACROS_H */

#ifndef SDL2_GFX_BASE_NAME
#define SDL2_GFX_BASE_NAME SDL2GfxBase
#endif /* !SDL2_GFX_BASE_NAME */

#define SDL_initFramerate(__p0) \
	({ \
		FPSmanager * __t__p0 = __p0;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(FPSmanager *))*(void**)(__base - 28))(__t__p0));\
	})

#define SDL_setFramerate(__p0, __p1) \
	({ \
		FPSmanager * __t__p0 = __p0;\
		Uint32  __t__p1 = __p1;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(FPSmanager *, Uint32 ))*(void**)(__base - 34))(__t__p0, __t__p1));\
	})

#define SDL_getFramerate(__p0) \
	({ \
		FPSmanager * __t__p0 = __p0;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(FPSmanager *))*(void**)(__base - 40))(__t__p0));\
	})

#define SDL_getFramecount(__p0) \
	({ \
		FPSmanager * __t__p0 = __p0;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(FPSmanager *))*(void**)(__base - 46))(__t__p0));\
	})

#define SDL_framerateDelay(__p0) \
	({ \
		FPSmanager * __t__p0 = __p0;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((Uint32 (*)(FPSmanager *))*(void**)(__base - 52))(__t__p0));\
	})

#define pixelColor(__p0, __p1, __p2, __p3) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Uint32  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Uint32 ))*(void**)(__base - 58))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define pixelRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Uint8  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 64))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define hlineColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 70))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define hlineRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 76))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define vlineColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 82))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define vlineRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 88))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define rectangleColor(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint32  __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 94))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define rectangleRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 100))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8));\
	})

#define roundedRectangleColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint32  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 106))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define roundedRectangleRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 112))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9));\
	})

#define boxColor(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint32  __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 118))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define boxRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 124))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8));\
	})

#define roundedBoxColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint32  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 130))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define roundedBoxRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 136))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9));\
	})

#define lineColor(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint32  __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 142))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define lineRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 148))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8));\
	})

#define aalineColor(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint32  __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 154))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define aalineRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 160))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8));\
	})

#define thickLineColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint32  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint32 ))*(void**)(__base - 166))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define thickLineRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 172))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9));\
	})

#define circleColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 178))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define circleRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 184))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define arcColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint32  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 190))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define arcRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 196))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9));\
	})

#define aacircleColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 202))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define aacircleRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 208))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define filledCircleColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 214))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define filledCircleRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 220))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define ellipseColor(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint32  __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 226))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define ellipseRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 232))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8));\
	})

#define aaellipseColor(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint32  __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 238))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define aaellipseRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 244))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8));\
	})

#define filledEllipseColor(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint32  __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 250))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define filledEllipseRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 256))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8));\
	})

#define pieColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint32  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 262))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define pieRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 268))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9));\
	})

#define filledPieColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint32  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 274))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define filledPieRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 280))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9));\
	})

#define trigonColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Sint16  __t__p6 = __p6;\
		Uint32  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 286))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define trigonRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9, __p10) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Sint16  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		Uint8  __t__p10 = __p10;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 292))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9, __t__p10));\
	})

#define aatrigonColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Sint16  __t__p6 = __p6;\
		Uint32  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 298))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define aatrigonRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9, __p10) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Sint16  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		Uint8  __t__p10 = __p10;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 304))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9, __t__p10));\
	})

#define filledTrigonColor(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Sint16  __t__p6 = __p6;\
		Uint32  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint32 ))*(void**)(__base - 310))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define filledTrigonRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8, __p9, __p10) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		Sint16  __t__p3 = __p3;\
		Sint16  __t__p4 = __p4;\
		Sint16  __t__p5 = __p5;\
		Sint16  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		Uint8  __t__p9 = __p9;\
		Uint8  __t__p10 = __p10;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Sint16 , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 316))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8, __t__p9, __t__p10));\
	})

#define polygonColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , Uint32 ))*(void**)(__base - 322))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define polygonRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 328))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define aapolygonColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , Uint32 ))*(void**)(__base - 334))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define aapolygonRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 340))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define filledPolygonColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , Uint32 ))*(void**)(__base - 346))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define filledPolygonRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 352))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define texturedPolygon(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		SDL_Surface * __t__p4 = __p4;\
		int  __t__p5 = __p5;\
		int  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , SDL_Surface *, int , int ))*(void**)(__base - 358))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define bezierColor(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		int  __t__p4 = __p4;\
		Uint32  __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , int , Uint32 ))*(void**)(__base - 364))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define bezierRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7, __p8) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		const Sint16 * __t__p1 = __p1;\
		const Sint16 * __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		int  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		Uint8  __t__p8 = __p8;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, const Sint16 *, const Sint16 *, int , int , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 370))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7, __t__p8));\
	})

#define gfxPrimitivesSetFont(__p0, __p1, __p2) \
	({ \
		const void * __t__p0 = __p0;\
		Uint32  __t__p1 = __p1;\
		Uint32  __t__p2 = __p2;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(const void *, Uint32 , Uint32 ))*(void**)(__base - 376))(__t__p0, __t__p1, __t__p2));\
	})

#define gfxPrimitivesSetFontRotation(__p0) \
	({ \
		Uint32  __t__p0 = __p0;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(Uint32 ))*(void**)(__base - 382))(__t__p0));\
	})

#define characterColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		char  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , char , Uint32 ))*(void**)(__base - 388))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define characterRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		char  __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , char , Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 394))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define stringColor(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		const char * __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , const char *, Uint32 ))*(void**)(__base - 400))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define stringRGBA(__p0, __p1, __p2, __p3, __p4, __p5, __p6, __p7) \
	({ \
		SDL_Renderer * __t__p0 = __p0;\
		Sint16  __t__p1 = __p1;\
		Sint16  __t__p2 = __p2;\
		const char * __t__p3 = __p3;\
		Uint8  __t__p4 = __p4;\
		Uint8  __t__p5 = __p5;\
		Uint8  __t__p6 = __p6;\
		Uint8  __t__p7 = __p7;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(SDL_Renderer *, Sint16 , Sint16 , const char *, Uint8 , Uint8 , Uint8 , Uint8 ))*(void**)(__base - 406))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6, __t__p7));\
	})

#define SDL_imageFilterMMXdetect() \
	({ \
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(void))*(void**)(__base - 412))());\
	})

#define SDL_imageFilterMMXoff() \
	({ \
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(void))*(void**)(__base - 418))());\
	})

#define SDL_imageFilterMMXon() \
	({ \
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(void))*(void**)(__base - 424))());\
	})

#define SDL_imageFilterAdd(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 430))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterMean(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 436))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterSub(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 442))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterAbsDiff(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 448))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterMult(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 454))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterMultNor(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 460))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterMultDivby2(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 466))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterMultDivby4(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 472))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterBitAnd(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 478))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterBitOr(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 484))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterDiv(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned char * __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 490))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterBitNegation(__p0, __p1, __p2) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int ))*(void**)(__base - 496))(__t__p0, __t__p1, __t__p2));\
	})

#define SDL_imageFilterAddByte(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 502))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterAddUint(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned int ))*(void**)(__base - 508))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterAddByteToHalf(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 514))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterSubByte(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 520))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterSubUint(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned int ))*(void**)(__base - 526))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterShiftRight(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 532))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterShiftRightUint(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 538))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterMultByByte(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 544))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterShiftRightAndMultByByte(__p0, __p1, __p2, __p3, __p4) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		unsigned char  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char , unsigned char ))*(void**)(__base - 550))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define SDL_imageFilterShiftLeftByte(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 556))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterShiftLeftUint(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 562))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterShiftLeft(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 568))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterBinarizeUsingThreshold(__p0, __p1, __p2, __p3) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char ))*(void**)(__base - 574))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define SDL_imageFilterClipToRange(__p0, __p1, __p2, __p3, __p4) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned char  __t__p3 = __p3;\
		unsigned char  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , unsigned char , unsigned char ))*(void**)(__base - 580))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define SDL_imageFilterNormalizeLinear(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		unsigned char * __t__p0 = __p0;\
		unsigned char * __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		int  __t__p4 = __p4;\
		int  __t__p5 = __p5;\
		int  __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(unsigned char *, unsigned char *, unsigned int , int , int , int , int ))*(void**)(__base - 586))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define rotozoomSurface(__p0, __p1, __p2, __p3) \
	({ \
		SDL_Surface * __t__p0 = __p0;\
		double  __t__p1 = __p1;\
		double  __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(SDL_Surface *, double , double , int ))*(void**)(__base - 592))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define rotozoomSurfaceXY(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_Surface * __t__p0 = __p0;\
		double  __t__p1 = __p1;\
		double  __t__p2 = __p2;\
		double  __t__p3 = __p3;\
		int  __t__p4 = __p4;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(SDL_Surface *, double , double , double , int ))*(void**)(__base - 598))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define rotozoomSurfaceSize(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		int  __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		double  __t__p2 = __p2;\
		double  __t__p3 = __p3;\
		int * __t__p4 = __p4;\
		int * __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(int , int , double , double , int *, int *))*(void**)(__base - 604))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define rotozoomSurfaceSizeXY(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		int  __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		double  __t__p2 = __p2;\
		double  __t__p3 = __p3;\
		double  __t__p4 = __p4;\
		int * __t__p5 = __p5;\
		int * __t__p6 = __p6;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(int , int , double , double , double , int *, int *))*(void**)(__base - 610))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define zoomSurface(__p0, __p1, __p2, __p3) \
	({ \
		SDL_Surface * __t__p0 = __p0;\
		double  __t__p1 = __p1;\
		double  __t__p2 = __p2;\
		int  __t__p3 = __p3;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(SDL_Surface *, double , double , int ))*(void**)(__base - 616))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define zoomSurfaceSize(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		int  __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		double  __t__p2 = __p2;\
		double  __t__p3 = __p3;\
		int * __t__p4 = __p4;\
		int * __t__p5 = __p5;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(int , int , double , double , int *, int *))*(void**)(__base - 622))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define shrinkSurface(__p0, __p1, __p2) \
	({ \
		SDL_Surface * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(SDL_Surface *, int , int ))*(void**)(__base - 628))(__t__p0, __t__p1, __t__p2));\
	})

#define rotateSurface90Degrees(__p0, __p1) \
	({ \
		SDL_Surface * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long __base = (long)(SDL2_GFX_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(SDL_Surface *, int ))*(void**)(__base - 634))(__t__p0, __t__p1));\
	})

#endif /* !_PPCINLINE_SDL2_GFX_H */
