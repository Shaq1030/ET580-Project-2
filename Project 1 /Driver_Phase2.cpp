// Sikder Ishaq Driver File for Phase 2
#include <iostream>
#include "Container.h"

using namespace std;

int main() {
    intArray arr;
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
    return 0;
}
