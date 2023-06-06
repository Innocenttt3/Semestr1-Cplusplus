#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

class Strings
{
  private:
  char *str;
  int length;

  public:
  Strings(char txt[], int size)
  {
    this->length = size;
    this->str = txt;
  }
  void init(int size)
  {
    this->length = size;
    char *str = new char[length];
  }
  void copy(const Strings &string)
  {
    length = string.length;
    strcpy(str, string.str);
  }
  void destroy()
  {
    delete[] str;
  }
  int get_length()
  {
    return length;
  }
  char* cstring()
  {
    return str;
  }
  void append(char txt[])
  {
    strcat(str, txt);
  }
  void clear()
  {
    for( int i = 0; i < this->length; i++)
    {
        str[i] = '\0';
    }
  
  }
  bool empty()
  {
    int counter = 0;
    for ( int i = 0; i < this->length; i++)
    {
      if(str[i] == 0)
      {
        counter +=1;
      }
    }
    if(counter == length) return false;
    else return true;
  }
  void print()
  {
    for ( int i = 0; i < this->length - 1; i++)
    {
      cout << str[i];
    }
  }
};

int main() 
{ 
  char txt[] = {"twoj stary"};
  Strings string(txt, 11);
  cout << string.get_length();
  cout << endl;
  string.print();
  string.clear();
  cout << endl;
  string.print();
  cout << string.empty();

	return 0;
}


