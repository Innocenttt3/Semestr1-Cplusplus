#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

enum AnimalType
{
  Dog,
  Mosquito,
};

class Animal
{
  public:
  AnimalType which_one;
  char name[10];
  Animal(const Animal &a)
  {
    which_one = a.which_one;
    strcpy(name, a.name);
  }
  Animal(AnimalType type, char name[])
  {
    this->which_one = type;
    strcpy(this->name, name);
  }

  void say_something(int n)
  {
    switch(which_one)
    {
      case Dog:
      {
        for ( int i = 0; i < n; i++)
        {
          cout << "Whof ";
        }
        break;
      }
      case Mosquito:
      {
        for ( int i = 0; i < n; i++)
        {
          cout << "Beee ";
        }
        break;
      }
    }
  }
  ~Animal()
  {

  }
};

int main() 
{ 
  char name[] = { "louis" };
  Animal animal(Dog, name);
  animal.say_something(3);
  cout << endl;
  cout << animal.name;
	return 0;
}


