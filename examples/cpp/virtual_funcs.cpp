#include <iostream>

class Property {
protected:
  double worth;

public:
  Property(double worth) : worth(worth) {}
  virtual double getTax() const = 0; // Чисто виртуальный метод
};
class Car : public Property {
public:
  Car(double worth) : Property(worth) {}
  double getTax() const override { return worth / 200; }
};

int main() {
  // Использование:
  Property *p = new Car(400000);
  std::cout << p->getTax(); // Вызовется Car::getTax()
}
