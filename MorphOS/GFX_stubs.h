/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2014 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#undef STUB

#if defined(GENERATE_STUBS)
#define STUB(name) extern int name(); int __saveds LIB_##name() { return name(); }
#elif defined(GENERATE_POINTERS)
#define STUB(name) (APTR)&LIB_##name ,
#else
#define STUB(name) extern int LIB_##name();
#endif

	STUB(SDL_initFramerate)
	STUB(SDL_setFramerate)
	STUB(SDL_getFramerate)
	STUB(SDL_getFramecount)
	STUB(SDL_framerateDelay)
	STUB(pixelColor)
	STUB(pixelRGBA)
	STUB(hlineColor)
	STUB(hlineRGBA)
	STUB(vlineColor)
	STUB(vlineRGBA)
	STUB(rectangleColor)
	STUB(rectangleRGBA)
	STUB(roundedRectangleColor)
	STUB(roundedRectangleRGBA)
	STUB(boxColor)
	STUB(boxRGBA)
	STUB(roundedBoxColor)
	STUB(roundedBoxRGBA)
	STUB(lineColor)
	STUB(lineRGBA)
	STUB(aalineColor)
	STUB(aalineRGBA)
	STUB(thickLineColor)
	STUB(thickLineRGBA)
	STUB(circleColor)
	STUB(circleRGBA)
	STUB(arcColor)
	STUB(arcRGBA)
	STUB(aacircleColor)
	STUB(aacircleRGBA)
	STUB(filledCircleColor)
	STUB(filledCircleRGBA)
	STUB(ellipseColor)
	STUB(ellipseRGBA)
	STUB(aaellipseColor)
	STUB(aaellipseRGBA)
	STUB(filledEllipseColor)
	STUB(filledEllipseRGBA)
	STUB(pieColor)
	STUB(pieRGBA)
	STUB(filledPieColor)
	STUB(filledPieRGBA)
	STUB(trigonColor)
	STUB(trigonRGBA)
	STUB(aatrigonColor)
	STUB(aatrigonRGBA)
	STUB(filledTrigonColor)
	STUB(filledTrigonRGBA)
	STUB(polygonColor)
	STUB(polygonRGBA)
	STUB(aapolygonColor)
	STUB(aapolygonRGBA)
	STUB(filledPolygonColor)
	STUB(filledPolygonRGBA)
	STUB(texturedPolygon)
	STUB(bezierColor)
	STUB(bezierRGBA)
	STUB(gfxPrimitivesSetFont)
	STUB(gfxPrimitivesSetFontRotation)
	STUB(characterColor)
	STUB(characterRGBA)
	STUB(stringColor)
	STUB(stringRGBA)
	STUB(SDL_imageFilterAdd)
	STUB(SDL_imageFilterMean)
	STUB(SDL_imageFilterSub)
	STUB(SDL_imageFilterAbsDiff)
	STUB(SDL_imageFilterMult)
	STUB(SDL_imageFilterMultNor)
	STUB(SDL_imageFilterMultDivby2)
	STUB(SDL_imageFilterMultDivby4)
	STUB(SDL_imageFilterBitAnd)
	STUB(SDL_imageFilterBitOr)
	STUB(SDL_imageFilterDiv)
	STUB(SDL_imageFilterBitNegation)
	STUB(SDL_imageFilterAddByte)
	STUB(SDL_imageFilterAddUint)
	STUB(SDL_imageFilterAddByteToHalf)
	STUB(SDL_imageFilterSubByte)
	STUB(SDL_imageFilterSubUint)
	STUB(SDL_imageFilterShiftRight)
	STUB(SDL_imageFilterShiftRightUint)
	STUB(SDL_imageFilterMultByByte)
	STUB(SDL_imageFilterShiftRightAndMultByByte)
	STUB(SDL_imageFilterShiftLeftByte)
	STUB(SDL_imageFilterShiftLeftUint)
	STUB(SDL_imageFilterShiftLeft)
	STUB(SDL_imageFilterBinarizeUsingThreshold)
	STUB(SDL_imageFilterClipToRange)
	STUB(SDL_imageFilterNormalizeLinear)
	STUB(rotozoomSurface)
	STUB(rotozoomSurfaceXY)
	STUB(rotozoomSurfaceSize)
	STUB(rotozoomSurfaceSizeXY)
	STUB(zoomSurface)
	STUB(zoomSurfaceSize)
	STUB(shrinkSurface)
	STUB(rotateSurface90Degrees)
