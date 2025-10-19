// Sikder Ishaq Main Driver File
#include <iostream>
#include "Container.h"
#include "Files.h"

using namespace std;

int main() {
    // Create an intArray container
    intArray myArray;
    
    cout << "Testing intArray implementation:" << endl;
    cout << "--------------------------------" << endl;
    
    // Test empty function
    cout << "Is array empty? " << (myArray.empty() ? "Yes" : "No") << endl;
    
    // Test size and maxSize functions
    cout << "Current size: " << myArray.size() << endl;
    cout << "Maximum size: " << myArray.maxSize() << endl;
    
    // Test push_back function
    cout << "\nAdding values 1, 2, 3 to array..." << endl;
    myArray.push_back(1);
    myArray.push_back(2);
    myArray.push_back(3);
    
    // Test print function
    cout << "Array contents: ";
    myArray.print();
    
    // Test size after adding elements
    cout << "Current size: " << myArray.size() << endl;
    cout << "Is array empty? " << (myArray.empty() ? "Yes" : "No") << endl;
    
    // Test reserve function
    cout << "\nReserving space for 10 elements..." << endl;
    myArray.reserve(10);
    cout << "Maximum size after reserve: " << myArray.maxSize() << endl;
    
    // Test clear function
    cout << "\nClearing the array..." << endl;
    myArray.clear();
    cout << "Current size after clear: " << myArray.size() << endl;
    cout << "Maximum size after clear: " << myArray.maxSize() << endl;
    cout << "Is array empty? " << (myArray.empty() ? "Yes" : "No") << endl;
    
    // Test reading from CSV file
    cout << "\nReading data from CSV file..." << endl;
    read(myArray);
    
    // Display the data read from CSV
    cout << "Data from CSV: ";
    myArray.print();
    cout << "Current size: " << myArray.size() << endl;
    
    return 0;
}