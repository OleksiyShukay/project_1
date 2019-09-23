#include <iostream>
int main() {
  int value_1;
  std::cin >> value_1;
  int value_2, value_3;
  value_2 = value_1 / 1000;
  value_3 = value_1 % 1000;
  if (((value_2 / 100) + (value_2 / 10) % 10 + (value_2 % 10)) ==
      ((value_3 / 100) + (value_3 / 10) % 10 + (value_3 % 10)))
    std::cout << "amounts match";
  else
    std::cout << "amounts do not match" << std::endl;
  return 0;
}
