#include "Foo.h"
#include "Bar.h"

#include <iostream>

int main()
{
    Foo f{};
    f.print();

    Bar b{};
    std::cout << "Magic number: " << b.getMagicNumber() << '\n';

    return 0;
}