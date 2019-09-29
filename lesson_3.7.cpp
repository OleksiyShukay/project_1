#include <iostream>

int main() {

  unsigned char tmp = 25;
  int INT_NUM;
  std::cin >> INT_NUM;

  if ((tmp & (1 << INT_NUM)) != 0) {
    std::cout << "no";
  }
  if ((tmp & (1 << INT_NUM)) == 0) {
    std::cout << "yes";
  }

  return 0;
}
