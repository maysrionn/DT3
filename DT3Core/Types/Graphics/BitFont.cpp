//==============================================================================
///	
///	File: BitFont.cpp
///	
/// Copyright (C) 2000-2014 by Smells Like Donkey,  Inc. All rights reserved.
///
/// This file is subject to the terms and conditions defined in
/// file 'LICENSE.txt',  which is part of this source code package.
///	
//==============================================================================

#include "DT3Core/Types/Graphics/BitFont.hpp"

//==============================================================================
//==============================================================================

namespace DT3 {

//==============================================================================
//==============================================================================

// This is vincent from
// http://forum.osdev.org/viewtopic.php?f=2&t=22033

const DTubyte BitFont::bit_font_data[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x3E, 0x49, 0x55, 0x41, 0x55, 0x41, 0x3E, 0x00},
    {0x3E, 0x77, 0x6B, 0x7F, 0x6B, 0x7F, 0x3E, 0x00},
    {0x08, 0x1C, 0x3E, 0x7F, 0x7F, 0x77, 0x22, 0x00},
    {0x08, 0x1C, 0x3E, 0x7F, 0x3E, 0x1C, 0x08, 0x00},
    {0x1C, 0x08, 0x2A, 0x7F, 0x2A, 0x1C, 0x08, 0x00},
    {0x1C, 0x08, 0x3E, 0x7F, 0x3E, 0x1C, 0x08, 0x00},
    {0x00, 0x1C, 0x3E, 0x3E, 0x3E, 0x1C, 0x00, 0x00},
    {0xFF, 0xE3, 0xC1, 0xC1, 0xC1, 0xE3, 0xFF, 0xFF},
    {0x00, 0x1C, 0x22, 0x22, 0x22, 0x1C, 0x00, 0x00},
    {0xFF, 0xE3, 0xDD, 0xDD, 0xDD, 0xE3, 0xFF, 0xFF},
    {0x30, 0x48, 0x48, 0x39, 0x05, 0x03, 0x0F, 0x00},
    {0x1C, 0x22, 0x22, 0x1C, 0x08, 0x3E, 0x08, 0x00},
    {0x60, 0x70, 0x30, 0x10, 0x10, 0x14, 0x18, 0x00},
    {0x60, 0x76, 0x37, 0x13, 0x11, 0x19, 0x0F, 0x00},
    {0x08, 0x2A, 0x1C, 0x77, 0x1C, 0x2A, 0x08, 0x00},
    {0x60, 0x78, 0x7E, 0x7F, 0x7E, 0x78, 0x60, 0x00},
    {0x03, 0x0F, 0x3F, 0x7F, 0x3F, 0x0F, 0x03, 0x00},
    {0x08, 0x1C, 0x2A, 0x08, 0x2A, 0x1C, 0x08, 0x00},
    {0x66, 0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x00},
    {0x05, 0x05, 0x05, 0x3D, 0x65, 0x65, 0x3F, 0x00},
    {0x30, 0x4C, 0x12, 0x24, 0x48, 0x32, 0x0C, 0x00},
    {0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x3E, 0x1C, 0x2A, 0x08, 0x2A, 0x1C, 0x08, 0x00},
    {0x1C, 0x1C, 0x1C, 0x7F, 0x3E, 0x1C, 0x08, 0x00},
    {0x08, 0x1C, 0x3E, 0x7F, 0x1C, 0x1C, 0x1C, 0x00},
    {0x08, 0x0C, 0x7E, 0x7F, 0x7E, 0x0C, 0x08, 0x00},
    {0x08, 0x18, 0x3F, 0x7F, 0x3F, 0x18, 0x08, 0x00},
    {0x7F, 0x7F, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00},
    {0x00, 0x14, 0x22, 0x7F, 0x22, 0x14, 0x00, 0x00},
    {0x7F, 0x7F, 0x3E, 0x3E, 0x1C, 0x1C, 0x08, 0x00},
    {0x08, 0x1C, 0x1C, 0x3E, 0x3E, 0x7F, 0x7F, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x18, 0x00, 0x18, 0x18, 0x3C, 0x3C, 0x18, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x14, 0x36, 0x36, 0x00},
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00},
    {0x08, 0x3C, 0x02, 0x1C, 0x20, 0x1E, 0x08, 0x00},
    {0x06, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x60, 0x00},
    {0x3F, 0x66, 0x65, 0x28, 0x3C, 0x66, 0x3C, 0x00},
    {0x00, 0x00, 0x00, 0x30, 0x18, 0x18, 0x18, 0x00},
    {0x60, 0x30, 0x18, 0x18, 0x18, 0x30, 0x60, 0x00},
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00},
    {0x00, 0x36, 0x1C, 0x7F, 0x1C, 0x36, 0x00, 0x00},
    {0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00, 0x00},
    {0x60, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00},
    {0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x00, 0x00},
    {0x3C, 0x66, 0x66, 0x76, 0x6E, 0x66, 0x3C, 0x00},
    {0x7E, 0x18, 0x18, 0x18, 0x38, 0x18, 0x18, 0x00},
    {0x7E, 0x60, 0x30, 0x0C, 0x06, 0x66, 0x3C, 0x00},
    {0x3C, 0x66, 0x06, 0x1C, 0x06, 0x66, 0x3C, 0x00},
    {0x0C, 0x0C, 0x7E, 0x4C, 0x2C, 0x1C, 0x0C, 0x00},
    {0x3C, 0x66, 0x06, 0x06, 0x7C, 0x60, 0x7E, 0x00},
    {0x3C, 0x66, 0x66, 0x7C, 0x60, 0x66, 0x3C, 0x00},
    {0x18, 0x18, 0x18, 0x0C, 0x0C, 0x66, 0x7E, 0x00},
    {0x3C, 0x66, 0x66, 0x3C, 0x66, 0x66, 0x3C, 0x00},
    {0x3C, 0x66, 0x06, 0x3E, 0x66, 0x66, 0x3C, 0x00},
    {0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00},
    {0x30, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00},
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00},
    {0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00},
    {0x60, 0x30, 0x18, 0x0C, 0x18, 0x30, 0x60, 0x00},
    {0x18, 0x00, 0x18, 0x1C, 0x06, 0x66, 0x3C, 0x00},
    {0x00, 0x3C, 0x42, 0x58, 0x5C, 0x44, 0x38, 0x00},
    {0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x3C, 0x00},
    {0x7C, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x7C, 0x00},
    {0x3C, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3C, 0x00},
    {0x7C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x7C, 0x00},
    {0x7E, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x7E, 0x00},
    {0x60, 0x60, 0x60, 0x7C, 0x60, 0x60, 0x7E, 0x00},
    {0x3C, 0x66, 0x6E, 0x60, 0x60, 0x66, 0x3C, 0x00},
    {0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00},
    {0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00},
    {0x38, 0x6C, 0x6C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00},
    {0x66, 0x6C, 0x78, 0x70, 0x78, 0x6C, 0x66, 0x00},
    {0x7E, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00},
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00},
    {0x63, 0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x00},
    {0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00},
    {0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x7C, 0x00},
    {0x06, 0x3C, 0x6E, 0x66, 0x66, 0x66, 0x3C, 0x00},
    {0x66, 0x6C, 0x78, 0x7C, 0x66, 0x66, 0x7C, 0x00},
    {0x3C, 0x66, 0x06, 0x3C, 0x60, 0x66, 0x3C, 0x00},
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x5A, 0x7E, 0x00},
    {0x3E, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00},
    {0x18, 0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x00},
    {0x63, 0x77, 0x7F, 0x6B, 0x63, 0x63, 0x63, 0x00},
    {0x63, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x63, 0x00},
    {0x18, 0x18, 0x18, 0x3C, 0x66, 0x66, 0x66, 0x00},
    {0x7E, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x7E, 0x00},
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00},
    {0x00, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00, 0x00},
    {0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x78, 0x00},
    {0x00, 0x00, 0x00, 0x41, 0x22, 0x14, 0x08, 0x00},
    {0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x06, 0x0C, 0x0C, 0x00},
    {0x3E, 0x66, 0x3E, 0x06, 0x3C, 0x00, 0x00, 0x00},
    {0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x60, 0x00},
    {0x3C, 0x66, 0x60, 0x66, 0x3C, 0x00, 0x00, 0x00},
    {0x3E, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x06, 0x00},
    {0x3C, 0x60, 0x7E, 0x66, 0x3C, 0x00, 0x00, 0x00},
    {0x30, 0x30, 0x7C, 0x30, 0x30, 0x36, 0x1C, 0x00},
    {0x3C, 0x06, 0x3E, 0x66, 0x66, 0x3E, 0x00, 0x00},
    {0x66, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x60, 0x00},
    {0x3C, 0x18, 0x18, 0x18, 0x00, 0x18, 0x00, 0x00},
    {0x38, 0x6C, 0x6C, 0x0C, 0x0C, 0x00, 0x0C, 0x00},
    {0x66, 0x6C, 0x78, 0x6C, 0x66, 0x60, 0x60, 0x00},
    {0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00},
    {0x6B, 0x6B, 0x7F, 0x77, 0x63, 0x00, 0x00, 0x00},
    {0x66, 0x66, 0x66, 0x7E, 0x7C, 0x00, 0x00, 0x00},
    {0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00},
    {0x60, 0x60, 0x7C, 0x66, 0x66, 0x7C, 0x00, 0x00},
    {0x0F, 0x0D, 0x3C, 0x6C, 0x6C, 0x3C, 0x00, 0x00},
    {0x60, 0x60, 0x66, 0x66, 0x7C, 0x00, 0x00, 0x00},
    {0x7C, 0x02, 0x3C, 0x40, 0x3E, 0x00, 0x00, 0x00},
    {0x18, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00},
    {0x3E, 0x66, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00},
    {0x18, 0x3C, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00},
    {0x3E, 0x6B, 0x6B, 0x6B, 0x63, 0x00, 0x00, 0x00},
    {0x66, 0x3C, 0x18, 0x3C, 0x66, 0x00, 0x00, 0x00},
    {0x3C, 0x06, 0x3E, 0x66, 0x66, 0x00, 0x00, 0x00},
    {0x3C, 0x30, 0x18, 0x0C, 0x3C, 0x00, 0x00, 0x00},
    {0x0E, 0x18, 0x18, 0x30, 0x18, 0x18, 0x0E, 0x00},
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00},
    {0x70, 0x18, 0x18, 0x0C, 0x18, 0x18, 0x70, 0x00},
    {0x00, 0x00, 0x00, 0x6C, 0x3A, 0x00, 0x00, 0x00},
    {0x7F, 0x41, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00}
};

//==============================================================================
//==============================================================================

} // DT3
