#include <iostream>
#include <algorithm>
using namespace std;

char size_changer(char &letter)
{
  if(letter >=65 && letter <= 90) return letter + 32;
  else
  return letter;
  
}
int top_word(char* arr1, char* arr2)
{
  if(size_changer(*arr1) < size_changer(*arr2)) return 1;
  else if(size_changer(*arr1) > size_changer(*arr2)) return 2;
  else if(size_changer(*arr1) == size_changer(*arr2)) return top_word(++arr1, ++arr2);

}
int main()
{
  char arr[] = {"BBBapis"};
  char arr2[] = {"AAAAAananas"};
  cout << top_word(arr, arr2);

  return 0;
}