#include <iostream>
#include "geom.hpp"

int main() {
  double x = 2.0;
  double y = 3.0;
  std::cout << "area(" << x << "," << y << ")= " << geom::area(x,y) << "\n";
}