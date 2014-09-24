#include <stdio.h>

#include "lib1.h"

TestClass::TestClass() {
    printf("!! TestClass constructor called.\n");
}

TestClass::~TestClass() {
    printf("!! TestClass destructor called.\n");
}

// static instance of TestClass
// constructor/destructor should be called on dynamic library load/unload or process start/kill
static TestClass testObject;
