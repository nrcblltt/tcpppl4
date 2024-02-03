#include <iostream>

class Vector {
public:
  Vector(int s) :elem{new double[s]}, sz{s} {}
  double& operator[](int i) { return elem[i]; }
  int size() const { return sz; }
private:
  double* elem;
  int sz;
};

int main() {
  Vector v1(6);
  v1[2] = 18;
  v1[3] = 12;
  std::cout << v1[2] + v1[3] << std::endl;
  return 0;
}
