#pragma once

#include "fastfetch.h"

#define FF_BOARD_MODULE_NAME "Board"

void ffPrintBoard(FFinstance* instance, FFBoardOptions* options);
void ffInitBoardOptions(FFBoardOptions* options);
bool ffParseBoardCommandOptions(FFBoardOptions* options, const char* key, const char* value);
void ffDestroyBoardOptions(FFBoardOptions* options);
void ffParseBoardJsonObject(FFinstance* instance, yyjson_val* module);
