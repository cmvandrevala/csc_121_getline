#include <iostream>

int main()
{
  std::string sentence_using_cin_only;
  std::cout << std::endl
            << "Let's read in data with std::cin. Enter a sentence!"
            << std::endl
            << std::endl;
  std::cin >> sentence_using_cin_only;
  std::cout << sentence_using_cin_only
            << std::endl;

  std::cin.ignore(3, '\n');

  std::string sentence_using_getline;
  std::cout << std::endl
            << "Now let's do it using getline. Enter a sentence!"
            << std::endl
            << std::endl;
  getline(std::cin, sentence_using_getline);
  std::cout << sentence_using_getline
            << std::endl;

  return 0;
}
