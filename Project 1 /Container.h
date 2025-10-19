// Sikder Ishaq first commit
// Container.cpp (Phase I )
// Array
#ifndef CONTAINER_H
#define CONTAINER_H


class intArray {
private:
    int maxValues;  // The potential maximum number of values, default is 5
    int numValues;  // The current number of values in the array, default is 0
    int* data;      // Pointer to a partially filled dynamic array of maxValue values


public:
    // ===== Sikder Ishaq's Section =====
    // Constructor - Allocate a dynamic array, initialize default values
    intArray();
   
    // Destructor - Deallocate the dynamic array
    ~intArray();
   
    // Return true if the array is empty, false otherwise
    bool empty() const;
   
    // ===== Brian's Section =====
    // Return the number of values in the array
    int size() const;
   
    // Return the maximum number of possible values in the array
    int maxSize() const;
   
    // If n is greater than the current max, grow the array
    // If n less than or equal to the current max, do nothing
    void reserve(int n);
   
    // ===== Ernest's Section =====
    // Remove all array values so that the number of values is zero
    // Reset array variables to default values
    void clear();
   
    // Add value to the end of the array
    // If the array is full, use reserve to double the allocated memory
    void push_back(int value);
   
    // Print all array values to the console on one line
    void print() const;
};


#endif // CONTAINER_H


