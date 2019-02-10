/**
  * | File     :   fonts.h
  * | Author   :   Artem Paraev (iharuspex)
  * | Function :   Font definitions 

  * Copyright (c) 2019 Artem Paraev

  * Permission is hereby granted, free of charge, to any person obtaining a copy
  * of this software and associated documentation files (the "Software"), to deal
  * in the Software without restriction, including without limitation the rights
  * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  * copies of the Software, and to permit persons to whom the Software is
  * furnished to do so, subject to the following conditions:

  * The above copyright notice and this permission notice shall be included in all
  * copies or substantial portions of the Software.

  * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  * SOFTWARE.
**/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FONTS_H
#define __FONTS_H

/* (32x41) */
#define MAX_HEIGHT_FONT         41
#define MAX_WIDTH_FONT          32
#define OFFSET_BITMAP           

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>

//ASCII
#define CHAR_WIDTH(c)              Font->FontTable[(c) - Font->FirstChar].width       // Get char width
#define CHAR_START_INDEX(c)        Font->FontTable[(c) - Font->FirstChar].start       // Get start char's index
#define CHAR_DATA(c)               &Font->FontBitmaps[CHAR_START_INDEX(c)]            // Get char's data
#define CHAR_SPACE                 2                                                  // Get space between chars

typedef struct FontTable
{
    uint16_t      width;                      // Char width
    uint16_t      start;                      // First char's byte index

} FONT_CHAR_INFO;

typedef struct
{
    uint8_t       Height;                     // Char height
    uint8_t       FirstChar;                  // First char's index
    uint8_t       LastChar;                   // Last char's index
    //uint8_t       FontSpace;                  // Space between chars
    const         FONT_CHAR_INFO *FontTable;  // Fonts descriptor
    const uint8_t *FontBitmaps;               // Fonts array
} FONT_INFO;

extern FONT_INFO comfortaa_14ptFontInfo1;

#ifdef __cplusplus
}
#endif
  
#endif /* __FONTS_H */
