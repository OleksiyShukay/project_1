#include <iostream>

int main(int argc, char *argv[]) {
  int ptr, i, sum = 0;
  std::cout << "Enter ";
  std::cin >> ptr;
  int array[ptr];
  for (i = 0; i < ptr; i++) {
    std::cin >> array[i];
  }
  for (i = 0; i < ptr; i++) {
    std::cout << array[i] << std::endl;
  }
  std::cout << "odd numbers" << std::endl;
  for (i = 0; i < ptr; i++) {
    if ((array[i] % 2) == 1) {
      std::cout << array[i] << std::endl;
      sum += array[i];
    }
  }
  std::cout << "Exit " << sum << std::endl;
}
