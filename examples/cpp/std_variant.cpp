#include <iostream>
#include <variant>
class Derived {
public:
  void PrintName() const { std::cout << "calling Derived!\n"; }
};
class ExtraDerived {
public:
  void PrintName() const { std::cout << "calling ExtraDerived!\n"; }
};
int main() {
  std::variant<Derived, ExtraDerived> var = Derived{};
  // Вызов через лямбду (visitor)
  auto caller = [](const auto &obj) { obj.PrintName(); };
  std::visit(caller, var);
}
