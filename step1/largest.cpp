#include <iostream>

int main() {

  int array[] = {78, 65, 90, 54, 88};
  int largest = array[0];

  for (int i = 0; i < 6; i++) {
    if (array[i] > largest) {
      largest = array[i];
    }
  }

  std::cout << "Largest number = " << largest << std::endl;

  return 0;
}
