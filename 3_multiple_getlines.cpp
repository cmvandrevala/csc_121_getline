#include <iostream>

using namespace std;

int main()
{
  string sentence_using_getline_one;
  cout << endl
       << "Let's read in data with getline. Enter a sentence!"
       << endl
       << endl;
  getline(cin, sentence_using_getline_one);
  cout << sentence_using_getline_one
       << endl;

  string sentence_using_getline_two;
  cout << endl
       << "Let's do it again!. Enter a sentence!"
       << endl
       << endl;
  getline(cin, sentence_using_getline_two);
  cout << sentence_using_getline_two
       << endl;

  return 0;
}
