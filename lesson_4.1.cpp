#include <iostream>
#include <string>
int main() {
  std::cout << " Enter string " << std::endl;
  std::string my_word;
  getline(std::cin, my_word);
  std::cout << " is diget ";
  for (int i = 0; i < my_word.length(); ++i) {
    if (my_word[i] >= '0' && my_word[i] <= '9') {
      std::cout << my_word[i] << " ";
    }
  }
  return 0;
}
