// Sikder Ishaq first commit
// Container.cpp (Phase I )
// constructor,destructor, empty
#include "Container.h"

// constructor: sets default values and allocates memory
intArray::intArray()
: maxValues(5), numValues(0), data(nullptr)
{
data = new int[maxValues]; // allocate space for 5 integers
}

// destructor to frees the allocated memory
intArray::~intArray()
{
delete[] data; // releases the dynamic array
data = nullptr; // set pointer to null 
}


// empty: checks if the container has no values
bool intArray::empty() const
{
return numValues == 0; // true if no elements
}