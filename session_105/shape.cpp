#include <sstream>
#include "shape.h"

Shape::Shape() {
  edges = 0;
  name = "empty shape";
}

Shape::Shape(int e, string n) {
  edges = e;
  name = n;
}

string Shape::printShape() {
  stringstream msg;
  msg << name << " has " << edges << " edges." << endl;
  return msg.str();
}
