#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include "Container.h"
#include <cassert>

// Phase III (Sikder Ishaq): API for rotating array values left by n.
// Rotates in-place; asserts n > 0; no change if n % size() == 0.
void rotateLeft(intArray &data, int n);

#endif // ALGORITHMS_H