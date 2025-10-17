// Sikder Ishaq first commit
// Container.cpp (Phase I )
// Array
#ifndef CONTAINER_H
#define CONTAINER_H

class intArray {
private:
int maxValues; // capacity
int numValues; // count
int* data; // storage

public:
intArray(); // constructor
~intArray(); // destructor
bool empty() const; // is empty
int size)_ const; 
int maxSize const;
void reserve(int n);
void clear();
void push_back(int value);
void print() const;

//phase 2 functions
int& at(int index);
void resize(int n);


};

#endif