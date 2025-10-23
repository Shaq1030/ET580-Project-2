// Sikder Ishaq Driver File for Phase 2
#include <iostream>
#include "Container.h"

using namespace std;

int main() {
    intArray arr;
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

    // Insert invalid (negative)
    ok = arr.insert(999, -1);
    cout << "insert(999,-1) -> " << (ok ? "OK" : "FAIL") << ", contents: "; arr.print();

    // Insert invalid (too large)
    ok = arr.insert(888, arr.size()+1);
    cout << "insert(888,size+1) -> " << (ok ? "OK" : "FAIL") << ", contents: "; arr.print();

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

    // pop on empty
    arr.pop_back();
    cout << "pop_back on empty (no change) -> "; arr.print();

    cout << "Final size: " << arr.size() << endl;
    cout<<"\n--Phase 3--\n"<<endl;

    






    return 0;
}
