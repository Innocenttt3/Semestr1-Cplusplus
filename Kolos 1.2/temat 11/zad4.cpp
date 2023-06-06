#include <iostream>
#include <cmath>
using namespace std;

void find_substring(char* main, char* str, int size_main, int size_str)
{
  int licznik = 0;
  for (int i = 0; i < size_main; i++)
  {
    for (int y = 0; y < size_str; y++)
    {
      if(*(main+i) == *(str+y))
      {
        for (int j = 0; j < size_str; j++)
        {
          if(*(main+i+j) == *(str+y+j)) licznik++;
          {
            if(licznik == size_str)
            {
            cout <<"sub_string is matching, start letter ->" << *(main+i);
            break;
            }
          }
          
        }
      }
    } 
    
  }
}
int main() 
{
  char main[] = {"myidziemy"};
  char str[] = {"idzie"};
  int size_main= sizeof(main) / sizeof(*main) - 1;
  int size_str= sizeof(str) / sizeof(*str) - 1;
  find_substring(main, str, size_main, size_str);
  
  
return 0;
}


