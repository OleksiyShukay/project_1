#include <iostream>
#include <string>
int main() {
  std::cout << " Enter number ";
  std::string ch_word;
  std::cin >> ch_word;
  for (int i = ch_word.size() - 1; i >= 0; --i)
    std::cout << ch_word[i];
  return 0;
}
