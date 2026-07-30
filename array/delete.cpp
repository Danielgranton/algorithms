#include <iostream>
#include <string>
int main() {
  std::string patients[5] = {"Amina", "Brian", "charles", "Dian"};
  int pos = 1;
  int size = 4;

  for (int i = pos; i < size - 1; i++) {
    patients[i] = patients[i + 1];
  }

  size--;
  for (int i = 0; i < size; i++) {
    std::cout << patients[i] << "" << std::endl;
  }
  return 0;
}
