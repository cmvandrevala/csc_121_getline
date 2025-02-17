#include <iostream>

int main()
{
  std::string myInput;

  std::cout << "Please enter a sentence!" << std::endl;
  getline(std::cin, myInput);
  std::cout << myInput << std::endl;

  return 0;
}
