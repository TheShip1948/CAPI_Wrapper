#include <iostream>
#include <vector>

//#include "printer.h"
#include "printer_wrapper.h"

int main() {
    char s[15] = "Welcome karate";
    int v[3] = {1, 2, 5};
    PrinterWrapper(s, v, 3);

    return 0;
}
