#ifndef NUMBERS_PRIMITIVE_VECNUM_HPP
#define NUMBERS_PRIMITIVE_VECNUM_HPP

#include <cstddef>

class vecnum {
public:
  explicit vecnum(std::size_t n) : size_{n}, buffer_{new double[n]{}} {}
  [[nodiscard]] std::size_t size() const { return size_; }

  double operator[](std::size_t i) const { return buffer_[i]; }
  double &operator[](std::size_t i) { return buffer_[i]; }
private:
  std::size_t size_;
  double * buffer_;
};

#endif//NUMBERS_PRIMITIVE_VECNUM_HPP