#include "primitive_vecnum.hpp"

#include <print>

int main() {
  vecnum v(5);
  v[2] = 3.0;
  for (std::size_t i = 0; i < v.size(); ++i) {
    std::println("v[{}] = {}", i, v[i]);
  }
}
