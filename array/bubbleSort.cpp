#include <iostream>
int main() {
  int scores[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(scores) / sizeof(scores[0]);

  for (int pass = 0; pass < n; pass++) {
    for (int i = 0; i < n - pass - 1; i++) {
      if (scores[i] > scores[i + 1]) {
        int temp = scores[i];
        scores[i] = scores[i + 1];
        scores[i + 1] = temp;
      }
    }
  };

  std::cout << "Sorted array: ";

  for (int i = 0; i < n; i++) {
    std::cout << scores[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}
