#include <cstdlib>
#include "src/tflm_main.h"

alignas(16) static uint8_t tensor_arena[TENSOR_ARENA_SIZE];

int main(int argc, char** argv) {
    set_print_output(argc > 1 && std::atoi(argv[1]) != 0);
    return tflm_main(tensor_arena, TENSOR_ARENA_SIZE);
}
