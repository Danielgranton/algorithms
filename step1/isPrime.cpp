
#include <cmath>
#include <iostream>
int main() {
  int number;

  std::cin >> number;

  if (number <= 1) {
    std::cout << "not prime" << std::endl;
    return 0;
  }
  for (int i = 2; i <= std::sqrt(number); i++) {
    if (number % i == 0) {
      std::cout << "not prime" << std::endl;
      return 0;
    }
  }
  std::cout << "prime" << std::endl;
  return 0;
}
