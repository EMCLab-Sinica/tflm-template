#pragma once

#include "gen/models.h"

#ifdef __cplusplus
extern "C" {
#endif

void register_debug_log_callback(void (*callback)(const char* s));
int tflm_main();

#define DECLARE_TFLM_MAIN(symbol, display_name) int tflm_main_##symbol();
TFLM_FOREACH_MODEL(DECLARE_TFLM_MAIN)
#undef DECLARE_TFLM_MAIN

#ifdef __cplusplus
}
#endif
