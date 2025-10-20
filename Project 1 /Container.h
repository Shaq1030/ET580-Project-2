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
    // Phase II extended member functions
    // pop_back
    //   - Validates that the array is not empty.
    //   - If the array has data, removes the last value by decrementing numValues.
    //   - Does not free memory; capacity remains unchanged.
    void pop_back(); // implemented by Sikder Ishaq (Phase II)

    // insert
    //   - Parameters: value (value to insert), index (location to insert)
    //   - Valid index range: 0..size() (inserting at size() appends)
    //   - If the array is full, the internal buffer is grown (reserve).
    //   - Elements at and after index are shifted right to make room.
    //   - Returns true on success, false if `index` is out of range.
    bool insert(int value, int index); 
};

#endif // CONTAINER_H