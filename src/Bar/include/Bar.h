#pragma once

class Bar {
public:
    Bar() = default;
    virtual ~Bar() = default;

    int getMagicNumber() const;
private:
    int _magicNumber{2049};
};