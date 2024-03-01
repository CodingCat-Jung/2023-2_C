#include <iostream>
using namespace std;

#include "Rectangle01.h"

void Rectangle01::swap(Rectangle01& r1, Rectangle01& r2) {
    Rectangle01 temp = r1;
    r1 = r2;
    r2 = temp;
}