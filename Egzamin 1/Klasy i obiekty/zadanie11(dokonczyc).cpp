#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

struct Task
{
  public:
  string name;
  int prio;
  void (*run)(string, int);
  Task(string name, int prio, void (*run)(string, int))
  {
    this->name = name;
    this->prio = prio;
    this->run = run;
  }


};

void print(string sign, int value)
{
  cout << sign << endl;
  cout << value;
}

bool sort_by_prio(Task &task1, Task &task2)
{
  return task1.prio > task2.prio;
}
void cout_tab(Task &task1)
{
  cout << task1.name << " ";
  cout << task1.prio << " ";
  cout << endl;
}

int main() 
{
  int x = 5;
  const int n = 3;
  Task **arr = new Task*[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = new Task("test" + to_string(i), i, print);
  }
  // sort(arr, arr+n, sort_by_prio);
  // for_each(arr, arr+n, cout_tab);



	return 0;
}


