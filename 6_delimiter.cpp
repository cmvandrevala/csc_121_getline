#include <iostream>

int main()
{
  std::string sentence_using_getline;
  std::cout << std::endl
            << "Let's read in some data using getline, but this time I specify ~ as a delimiter. Enter a sentence!"
            << std::endl
            << std::endl;
  getline(std::cin, sentence_using_getline, '~');
  std::cout << sentence_using_getline
            << std::endl;

  return 0;
}
