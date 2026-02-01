/*****************************************************************************
* | File      	:	EPD_1in54.h
* | Author      :   Waveshare team
* | Function    :   Electronic paper driver
* | Info        :
*----------------
* |	This version:   V2.0
* | Date        :   2018-10-30
* | Info        :
* 1. Remove: ImageBuff[EPD_HEIGHT * EPD_WIDTH / 8]
* 2. Change: EPD_Display(UBYTE *Image)
*    Need to pass parameters: pointer to cached data
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to  whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
******************************************************************************/
#ifndef _EPD1IN54_H
#define _EPD1IN54_H

#include "epaper.h"

// Display resolution
#define EPD_WIDTH       200
#define EPD_HEIGHT      200

// Update mode
#define EPD_MODE_FULL_UPDATE    0
#define EPD_MODE_PARTIAL_UPDATE 1

UBYTE EPD_Init(UBYTE Mode);
void EPD_Clear(void);
void EPD_Display(const UBYTE *Image);
void EPD_Sleep(void);

#endif
