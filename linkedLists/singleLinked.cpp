#include <iostream>
#include <string>

int main() {
  int age = 20;
  int *p = &age;

  std::cout << p << " " << std::endl;
  std::cout << *p;
  return 0;
}
