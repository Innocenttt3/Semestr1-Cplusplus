#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
  int counter = 0;
  string sentence;
  getline(cin, sentence);
  for (int i = 0; i < sentence.length(); i++)
  {
    if (sentence[i] == ' ') counter++;
  }
  cout << counter+1;


	return 0;
}