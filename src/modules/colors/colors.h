#pragma once

#include "fastfetch.h"

#define FF_COLORS_MODULE_NAME "Colors"

void ffPrintColors(FFinstance* instance);
void ffParseColorsJsonObject(FFinstance* instance, yyjson_val* module);
