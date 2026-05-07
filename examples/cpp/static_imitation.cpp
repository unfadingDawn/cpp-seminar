#include <iostream>

template <typename T> class Base {
public:
  void someFunctionality() { static_cast<T *>(this)->someFunctionality(); }
};
class Child : public Base<Child> {
public:
  void someFunctionality() {
    std::cout << "Child class perform new function..." << std::endl;
  }
};

int main() {
  Child child = Child();
  child.someFunctionality();
  return 0;
}
