#include <sstream>
#include "square.h"

string Square::displaySquare() {
  stringstream msg;
  msg << "The square <" <<  name << "> with " << edges << " edges has been displayed." << endl;
  return msg.str();
}

int main() {
  Square * s = new Square(4, "PeppaSquare");
  cout << s->displaySquare();
  return 0;
}
