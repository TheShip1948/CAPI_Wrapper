project(printer)

add_library(printer STATIC
            printer.cpp
            printer_wrapper.cpp)

add_executable(main main.cpp)
target_link_libraries(main printer)