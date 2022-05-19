#pragma once
#include <string>

class Foo {
public:
    Foo() = default;
    virtual ~Foo() = default;

    void print() const;
    std::string string() const;
private:
    std::string _fooString{"Foo"};
};