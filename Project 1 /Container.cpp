#include "Container.h"
#include <iostream>


using namespace std;


// ===== Sikder Ishaq's Section =====
// Constructor - Allocate a dynamic array, initialize default values
intArray::intArray() : maxValues(5), numValues(0) {
    data = new int[maxValues];
}


// Destructor - Deallocate the dynamic array
intArray::~intArray() {
    delete[] data;
}


// Return true if the array is empty, false otherwise
bool intArray::empty() const {
    return numValues == 0;
}


// ===== Brian's Section =====
// Return the number of values in the array
int intArray::size() const {
    return numValues;
}


// Return the maximum number of possible values in the array
int intArray::maxSize() const {
    return maxValues;
}


// If n is greater than the current max, grow the array
// If n less than or equal to the current max, do nothing
void intArray::reserve(int n) {
    if (n > maxValues) {
        // Create a new array with the new size
        int* newData = new int[n];
       
        // Copy existing elements to the new array
        for (int i = 0; i < numValues; i++) {
            newData[i] = data[i];
        }
       
        // Delete the old array
        delete[] data;
       
        // Update the pointer and maxValues
        data = newData;
        maxValues = n;
    }
}


// ===== Ernest's Section =====
// Remove all array values so that the number of values is zero
// Reset array variables to default values
void intArray::clear() {
    delete[] data;
    maxValues = 5;
    numValues = 0;
    data = new int[maxValues];
}


// Add value to the end of the array
// If the array is full, use reserve to double the allocated memory
void intArray::push_back(int value) {
    if (numValues >= maxValues) {
        reserve(maxValues * 2);
    }
   
    data[numValues] = value;
    numValues++;
}


// Print all array values to the console on one line
void intArray::print() const {
    for (int i = 0; i < numValues; i++) {
        std::cout << data[i];
        if (i < numValues - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}


