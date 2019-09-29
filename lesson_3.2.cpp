
#include <iostream>
int main() {
  int INT_NUM, INT_SUM = 0;
  for (int i = 0; i <= 4; ++i) {
    std::cin >> INT_NUM;
    INT_SUM += INT_NUM;
  }
   std::cout << "15/5= " << (INT_SUM / 4) << std::endl;
  return 0;
}
