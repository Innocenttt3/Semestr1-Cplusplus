#include <iostream>
#include <cstring>
using namespace std;

void killer(int* start_of_array, int* past_last_of_array, bool& logic)
{
  int counter2n = 0;
  int counter2n1 = 0;
  int size = past_last_of_array - start_of_array;
  int *end = start_of_array + size - 1;
  int *start = start_of_array;
  for(int i = 0; i < size; i++)
  {
    if(*start_of_array % 2 == 0)
    {
      *(start + counter2n) = *start_of_array;
      counter2n++;  
    }
    else
    {
      *(end - counter2n1) = *start_of_array;
      counter2n1++;
    }
  start_of_array++;
  }

}
int main() 
{
   int nums[10] = {1,2,3,4,5,6,7,8,9,10};
   bool change = 0;
   killer(nums, &(nums[10]), change);
   for( int i = 0; i < 10; i++)
   { 
    cout << nums[i] << endl;
   }

}