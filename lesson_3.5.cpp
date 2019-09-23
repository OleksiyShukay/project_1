#include <iostream>
int main() {
  int INT_ENTER;
  std::cin >> INT_ENTER;
  int INT_REV = 0;
  int INT_NUM;
  while (INT_ENTER != 0) {
    INT_NUM = INT_ENTER % 10;
    INT_ENTER = INT_ENTER / 10;
    INT_REV = INT_REV * 10;
    INT_REV = INT_REV + INT_NUM;
  }
  std::cout << INT_REV << std::endl;
}
