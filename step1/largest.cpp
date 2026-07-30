#include <iostream>

int main() {

  int array[] = {5, 9, 3, 5, 8, 10};
  int largest = array[0];

  for (int i = 0; i < 6; i++) {
    if (array[i] > largest) {
      largest = array[i];
    }
  }

  std::cout << "Largest number = " << largest << std::endl;

  return 0;
}
