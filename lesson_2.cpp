#include <cmath>
#include <iostream>
int main(int argc, char const *argv[]) {

  int min = 2;
  int max = 255;
  int a, b, c;

  std::cout << " Enter argument from " <<  min << " to " << max << ": ";
  std::cin >> a;
  if (a < min || a > max || a == 0) {
    printf("ERROR");
    return 0;
  }
  std::cout << " Enter argument from " <<  min << " to " << max << ": ";
  std::cin >> b;
  if (b < min || b > max) {
	printf("ERROR");
	return 0;
  }
  std::cout << " Enter argument from " <<  min << " to " << max << ": ";
  std::cin >> c;
  if (c < min && c > max) {
    printf("ERROR");
    return 0;
  }
  float x1, x2;
  float D;
  int p = 4;
  int k = 2;
  D = (b * b - p * a * c);
  int dec_sqrt = sqrt(D);
  int mult_numb = (k * a);
  if (D >= 0) {
    x1 = (-b + dec_sqrt) / mult_numb;
    x2 = (-b - dec_sqrt) / mult_numb;
    printf("x1=%2.0f\n", x1);
    printf("x2=%2.0f\n", x2);
  } else {
    std::cout << " Root doesnt exist " << std::endl;
  }
  return 0;
}
