bnbbn
#include <cmath>
#include <iostream>
int main() {
  double a, b, c, x1, x2, D;
  const double p = 4;
  const double k = 2;
  std::cout << "Enter a: ";
  std::cin >> a;
  if (a >= 2 && a <= 255) {
    std::cout << " true " << std::endl;
  } else {
    std::cout << "falce" << std::endl;
  }
  std::cout << "Enter b: ";
  std::cin >> b;
  if (b >= 2 && b <= 255) {
    std::cout << " true " << std::endl;
  } else {
    std::cout << "falce." << std::endl;
  }
  std::cout << "Enter c: ";
  std::cin >> c;
  if (c >= 2 && c <= 255) {
    std::cout << " true " << std::endl;
  } else {
    std::cout << "falce" << std::endl;
  }
  D = (b * b - p * a * c);
  if (D >= 0 && a != 0) {
    x1 = (-b + sqrt(D)) / (k * a);
    x2 = (-b - sqrt(D)) / (k * a);
    printf("x1=%5.2f\n", x1);
    printf("x2=%5.2f\n", x2);
  } else {
    std::cout << " Root doesnt exist " << std::endl;
  }
  return 0;
}
