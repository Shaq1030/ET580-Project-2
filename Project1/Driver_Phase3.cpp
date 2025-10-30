// Sikder Ishaq Driver File for Phase 3
#include <iostream>
#include "Container.h"
// Phase 3 uses file read and algorithm; include headers
#include "Files.h"
#include "Algorithms.h"

using namespace std;

int main() {
    intArray arr;
    cout << "Testing intArray implementation:" << endl;
    cout << "--------------------------------" << endl;
    
    // Test empty function
    cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << endl;
    
    // Test size and maxSize functions
    cout << "Current size: " << arr.size() << endl;
    cout << "Maximum size: " << arr.maxSize() << endl;
    
    // Test push_back function
    cout << "\nAdding values 1, 2, 3 to array..." << endl;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    
    // Test print function
    cout << "Array contents: ";
    arr.print();
    
    // Test size after adding elements
    cout << "Current size: " << arr.size() << endl;
    cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << endl;
    
    // Test reserve function
    cout << "\nReserving space for 10 elements..." << endl;
    arr.reserve(10);
    cout << "Maximum size after reserve: " << arr.maxSize() << endl;
    
    // Test clear function
    cout << "\nClearing the array..." << endl;
    arr.clear();
    cout << "Current size after clear: " << arr.size() << endl;
    cout << "Maximum size after clear: " << arr.maxSize() << endl;
    cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << endl;
    
    // Test reading from CSV file
    cout << "\nReading data from CSV file..." << endl;
    read(arr);
    
    // Display the data read from CSV
    cout << "Data from CSV: ";
    arr.print();
    cout << "Current size: " << arr.size() << endl;
    cout<<"\n--Phase Two --\n"<<endl;
    cout << "Driver Johnson: testing insert and pop_back" << endl;

    // Insert into empty at 0
    bool ok = arr.insert(100, 0);
    cout << "insert(100,0) -> " << (ok ? "OK" : "FAIL") << ", contents: "; arr.print();

    // Insert at end (index == size)
    ok = arr.insert(200, arr.size());
    cout << "insert(200,size) -> " << (ok ? "OK" : "FAIL") << ", contents: "; arr.print();

    // Insert at middle
    ok = arr.insert(150, 1);
    cout << "insert(150,1) -> " << (ok ? "OK" : "FAIL") << ", contents: "; arr.print();


    // Push a few values
    arr.push_back(300);
    arr.push_back(400);
    cout << "after push_back 300,400 -> "; arr.print();

    // Pop back twice
    arr.pop_back();
    cout << "after pop_back -> "; arr.print();
    arr.pop_back();
    cout << "after pop_back -> "; arr.print();

    // Pop until empty
    while (!arr.empty()) {
        arr.pop_back();
        cout << "pop until empty -> "; arr.print();
    }


    cout << "Final size: " << arr.size() << endl;
    cout<<"\n--Phase 3--\n"<<endl;


    // Demonstration of rotateLeft and isRotated
    intArray original;
    original.push_back(10);
    original.push_back(20);
    original.push_back(30);
    original.push_back(40);
    original.push_back(50);

    cout << "Original: "; original.print();

    intArray rotated; // deep copy via push_back to avoid shallow pointer copy
    for (int i = 0; i < original.size(); ++i) {
        rotated.push_back(original.at(i));
    }
    cout << "Rotating left by 2..." << endl;
    rotateLeft(rotated, 2);
    cout << "Rotated:  "; rotated.print();

    bool rotatedOk = isRotated(rotated, original);
    cout << "isRotated(rotated, original)? " << (rotatedOk ? "true" : "false") << endl;

    // Edge case: rotation by size should produce equivalent arrangement
    intArray unchanged; // deep copy via push_back
    for (int i = 0; i < original.size(); ++i) {
        unchanged.push_back(original.at(i));
    }
    rotateLeft(unchanged, original.size());
    cout << "Rotate by size (" << original.size() << ") -> "; unchanged.print();
    cout << "isRotated(unchanged, original)? " << (isRotated(unchanged, original) ? "true" : "false") << endl;

    return 0;
}
