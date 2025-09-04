#include "geom.hpp"

#include <print>

int main() {
  double x = 2.0;
  double y = 3.0;
  std::println("area({}, {})= {}", x, y, geom::area(x, y));
}