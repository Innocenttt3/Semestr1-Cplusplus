#include <iostream>
#include <cstdio>
using namespace std;

void funkcja(unsigned int word, unsigned char* b0, unsigned char* b1, unsigned char* b2, unsigned char* b3)
{
  unsigned int* ptr = &word;
  *b0 = *((unsigned char*)ptr);
  *b1 = *((unsigned char*)ptr+1);
  *b2 = *((unsigned char*)ptr+2);
  *b3 = *((unsigned char*)ptr+3);

}

int main() 
{
  unsigned int word = 1020;
  unsigned char b0;
  unsigned char b1;
  unsigned char b2;
  unsigned char b3;
  funkcja(word, &b0, &b1, &b2, &b3);
  cout << (int)b0 << endl;
  cout << (int)b1 << endl;
  cout << (int)b2 << endl;
  cout << (int)b3 << endl;


  return 0;
}