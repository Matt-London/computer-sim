#include "../../include/logicGates.h" 

// Standard gates
// Returns opposite of entered
bool not(bool a) {
    return !a;
}

// Returns if a and b are both true
bool and(bool a, bool b) {
    return a && b;
}

// Returns if either a or b are true
bool or(bool a, bool b) {
    return a || b;
}

// Returns if either a or b are true, if both are true return false
bool xor(bool a, bool b) {
    return !(a && b) && (a || b);
}

// NOTS
// Returns not-and
bool nand(bool a, bool b) {
    return !(a && b);
}

// Returns not-or
bool nor(bool a, bool b) {
    return !(a || b);
}

// Returns exclusive nor
bool xnor(bool a, bool b) {
    return !(!(a && b) && (a || b));
}

