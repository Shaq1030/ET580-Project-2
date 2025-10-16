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

//(Ernest First) Remove all array values so that the number of values is zero.
void clear()
sz = 0;
}

// Add value to the end of the array, doubling capacity if full.
void push_back(const T& value) {
if (sz == cap) reserve(cap * 2); // Double the capacity if needed
arr[sz++] = value;
}

// Print all array values to the console on one line.
void print() const {
for (int i = 0; i < sz; ++i)
std::cout << arr[i] << " ";
std::cout << std::endl;
}

