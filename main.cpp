#include <cstdlib>
#include "src/tflm_main.h"

int main(int argc, char** argv) {
    set_print_output(argc > 1 && std::atoi(argv[1]) != 0);
    return tflm_main();
}
