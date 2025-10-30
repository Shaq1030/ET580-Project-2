#include "Algorithms.h"
#include <cassert>

// Phase III (Sikder Ishaq): rotateLeft shifts elements left by n positions.
// - Requires n > 0, returns early for empty arrays or when n % size() == 0.
// - Uses a temporary buffer to store the first k elements, shifts the remainder,
//   then appends the buffered values to the end.
void rotateLeft(intArray &data, int n) {
    int s = data.size();
    assert(n > 0); // enforce positive rotation amount
    if (s == 0) return; // nothing to rotate when array is empty

    int k = n % s; // normalize n to array length
    if (k == 0) return; // rotation by a multiple of size leaves array unchanged

    // Store the first k elements before shifting
    int *temp = new int[k];
    for (int i = 0; i < k; ++i) {
        temp[i] = data.at(i);
    }

    // Shift remaining elements left by k positions
    for (int i = k; i < s; ++i) {
        data.at(i - k) = data.at(i);
    }

    // Place the buffered elements at the end
    for (int i = 0; i < k; ++i) {
        data.at(s - k + i) = temp[i];
    }

    delete[] temp; // cleanup temporary buffer
}

bool isRotated(const intArray &A, const intArray &B) {
    // If sizes differ, they can’t be rotations
    if (A.size() != B.size()) return false;
    int n = A.size();
    if (n == 0) return true;

    // Try every possible rotation offset
    for (int shift = 0; shift < n; ++shift) {
        bool match = true;
        for (int i = 0; i < n; ++i) {
            if (A.at(i) != B.at((i + shift) % n)) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}
