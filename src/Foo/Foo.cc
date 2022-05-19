#include "Foo.h"
#include <iostream>

void Foo::print() const
{
    std::cout << "I'm " << _fooString << ".\n";
}

std::string Foo::string() const
{
    return _fooString;
}