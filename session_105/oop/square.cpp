#include <sstream>
#include "square.h"

string Square::displaySquare() {
  stringstream msg;
  msg << "The square <" <<  name << "> with " << edges << " edges has been displayed." << endl;
  return msg.str();
}

int main() {
  Square * s0 = new Square(4, "PeppaSquare");
  cout << s0->displaySquare();

  Square s1;
  cout << s1.displaySquare();

  Square s2(7, "PeppaSquare 3");
  cout << s2.displaySquare();

  return 0;
}
