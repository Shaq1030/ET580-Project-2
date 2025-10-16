// Sikder Ishaq first commit
// Container.cpp (Phase I )
// constructor,destructor, empty
#include "Container.h"
#using namespace std;


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

//Bryan Commit 2
// size: returns the current number of stored values
int intArray::size() const
{ 
    return numValues; 
}
// maxSize: returns the maximum capacity of the array
int intArray::maxSize() const
{
    return maxValues;
}
// reserve: increase capacity if new size is greater than current max
void intArray::reserve(int n)
{
    if (n <= maxValues)
        return; // do nothing if n <= current capacity

    int* newData = new int[n]; 

    // copy old values
    for (int i = 0; i < numValues; ++i)
        newData[i] = data[i];
    delete[] data;       
    data = newData;      
    maxValues = n;      
}

//(Ernest First) Remove all array values so that the number of values is zero.
void intArray::clear(){
numValues = 0;
}

// Add value to the end of the array, doubling capacity if full.
void push_back(int value) {
if (numValues == maxValues) 
    reserve(maxValues * 2); // Double the capacity if needed
data[numValues++] = value;
}

// Print all array values to the console on one line.
void intArray::print() const {
for (int i = 0; i < numValues; ++i)
cout << data[i] << " ";
cout << endl;
}

