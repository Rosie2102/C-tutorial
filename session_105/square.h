#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <string>
#include "shape.h"

using namespace std;

class Square: Shape 
{
  public:
    Square(): Shape(){}
    Square(int e, string n): Shape(e, n){}
    string displaySquare(void);
};

#endif
