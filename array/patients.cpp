#include <iostream>
#include <string>

int main() {
  std::string patients[5] = {"Amina", "Brian", "Charles", "Diana", ""};
  int position = 2;
  int size = 4;
  std::string newPatient = "Eva";

  for (int i = size - 1; i >= position; i--) {
    patients[i + 1] = patients[i];
  }
  patients[position] = newPatient;
  size++;
  for (int i = 0; i < size; i++) {
    std::cout << patients[i] << "" << std::endl;
  }
  {
  }
  return 0;
}
