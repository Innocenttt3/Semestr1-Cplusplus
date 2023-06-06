#include <iostream>
#include <cmath>
using namespace std;

bool condition(int value)
{
  int counter;
  int size = 0;
  int copy_val = value;
  while(copy_val)
  {
    copy_val /= 10;
    size++;
  }
   char buffer[size];
  sprintf(buffer, "%d", value);
  for(int i = 0; i < size; i++)
  {
    for(int j = i + 1; j < size; j++)
    {
      if (buffer[i] == buffer[j]) return true;     
    }
  }
  return false;
}
void action(int &value1)
{
  int final_result = 0;
  int result = 0;
  int size = 0;
  int copy_val = value1;
  while(copy_val)
  {
    copy_val /= 10;
    size++;
  }
  for (int i = 0; i < size; i++)
  {
    result = (value1 % 10) * pow(10, (size - i - 1));
    value1 /= 10;
    final_result += result;
  }
  value1 = final_result;
}
void modify_array(int* tab, int size, bool (*ptr_cond)(int), void (*ptr_act)(int&))
{
  for(int i = 0; i < size; i++)
  {
    if(ptr_cond(tab[i])) ptr_act(tab[i]);
  }
}
int main() 
{
  bool (*ptr_cond)(int);
  ptr_cond = condition;
  void (*ptr_act)(int&);
  ptr_act = action;
  int tab[] = {123, 112, 456, 991};
  int size = sizeof(tab) / sizeof(*tab);
  modify_array(tab, size, ptr_cond, ptr_act);
  for(int i = 0; i < size; i++)
  {
    cout << tab[i] << " ";
  }
return 0;
}