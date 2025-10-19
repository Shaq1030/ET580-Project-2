// Sikder Ishaq first commit
// Container.cpp (Phase I )
// Array
#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>

class intArray {
private:
    int  maxValues;  // default 5
    int  numValues;  // default 0
    int* data;

public:
    intArray();                  // defined in Container.cpp
    ~intArray() { delete[] data; }   // <-- inline definition fixes the linker error

    bool empty() const;
    int  size() const;
    int  maxSize() const;
    void reserve(int n);
    void clear();
    void push_back(int value);
    void print() const;
};

#endif // CONTAINER_H