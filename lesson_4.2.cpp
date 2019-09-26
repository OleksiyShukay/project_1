#include <iostream>
#include <string>
int main() {
  char ch_num = 100;
  char ch_mass[ch_num];
  std::cin.getline(ch_mass, ch_num);
  for (int i = 0; ch_mass[i] != 0; ++i) {
    if (ch_mass[i] <= 'z' && ch_mass[i] >= 'a') {
      ch_mass[i] += 'A' - 'a';
    }
  }
  std::cout << ch_mass;
  return 0;
}
