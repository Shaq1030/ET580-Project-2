#include "Container.h"
#include <iostream>
#include <cassert>
using namespace std;


// ===== Sikder Ishaq's Section =====
// Constructor - Allocate a dynamic array, initialize default values
intArray::intArray() : maxValues(5), numValues(0) {
    data = new int[maxValues];
}
// Constructor implemented by Sikder Ishaq



// Return true if the array is empty, false otherwise
bool intArray::empty() const {
    return numValues == 0;
}
// empty() implemented by Sikder Ishaq

// ===== Bryan's Section =====
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
        cout << data[i];
        if (i < numValues - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

// ===== Sikder Ishaq Phase II: Extended member functions =====
// pop_back
//   - Safe removal of the last element
//   - Checks emptiness to avoid underflow
//   - Leaves allocated capacity intact for future pushes
void intArray::pop_back() {
   assert(numValues>0); // Ensure array is not empty
    numValues--;
}
// pop_back implemented by Sikder Ishaq (Phase II)

// insert
//   - Insert value at the specified index (0..numValues)
//   - If index==numValues the function appends (equivalent to push_back)
//   - On full capacity the internal buffer is grown (reserve)
//   - Elements at and after index are shifted right to make room
//   - Returns false if index is out of range
bool intArray::insert(int value, int index) {
    assert(index >= 0 && index <= numValues); // Validate index range

    if (numValues >= maxValues) {
        reserve(maxValues * 2);
    }

    for (int i = numValues; i > index; --i) {
        data[i] = data[i - 1];
    }

    // Place new element and update count
    data[index] = value;
    numValues++;
    return true;


}
// insert implemented by Sikder Ishaq (Phase II)

//Bryan Phase 2
int& intArray::at(int index) {
    assert(index >= 0 && index < numValues);  
    return data[index];
}

// Const overload of at() to allow read-only access on const intArray
const int& intArray::at(int index) const {
    assert(index >= 0 && index < numValues);
    return data[index];
}

void intArray::resize(int n) {
    if (n < numValues) {
        numValues = n;
    } 
    else if (n > numValues) {
        if (n > maxValues) {
            int newCapacity = maxValues;
            while (newCapacity < n)
                newCapacity *= 2;
            reserve(newCapacity);
        }

        for (int i = numValues; i < n; ++i) {
            data[i] = 0;
        }

        numValues = n;
    }
}
//Ernest Harris Phase 2 (Erase)

void intArray::erase(int start, int end) {
assert(start >= 0 && end >= start && end < numValues);
int count = end - start + 1;
for (int i = end + 1; i < numValues; ++i) {
data[i - count] = data[i];
}
numValues -= count;
}





