#include <iostream>

#include "lib.hpp"

int main(int argc, char const *argv[])
{
    lib::List list;
    for (int i = 0; i < 10; i++) {
        lib::addValue2List(list, i);
    }
    lib::print(list);

    return 0;
}
