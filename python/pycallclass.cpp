#include <iostream>

class TestLib {
 public:
  void display();
  void display(int a);
};

void TestLib::display() {
  std::cout << "First display" << std::endl;
}

void TestLib::display(int a) {
  std::cout << "Second display:" << a << std::endl;
}

extern "C" {
  TestLib obj;

  void display() {
    obj.display();
  }

  void display_int() {
    obj.display(2);
  }
}
