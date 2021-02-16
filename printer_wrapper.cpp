#include <vector>

#include "printer.h"
//extern "C" {
    #include "printer_wrapper.h"
//}


void PrinterWrapper(char* s, int* v, size_t v_length) {
    // Mapping data structure from C to C++
    std::string str(s);

    std::vector<int> vec;
    for(int i = 0; i < v_length; ++i) {
        vec.push_back(v[i]);
    }

    // Call C++ function version
    Print(s, vec);
}