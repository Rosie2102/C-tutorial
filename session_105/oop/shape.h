#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;


class Shape {
  
  protected:
    int edges;
    string name;

  public:
    Shape();
    Shape(int e, string n);
    string printShape(void);
};

#endif
