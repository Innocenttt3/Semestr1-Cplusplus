#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class Person
{
  private:
  int age;
  string name;

  public:

  void set_age(int value)
  {
    age = value;
  }
  int get_age()
  {
    return age;
  }

  void set_name(string txt)
  {
    name = txt;
  }
  string get_name()
  {
    return name;
  }

  void copyFrom(const Person &t)
  {
    this->age = t.age;
    this->name = t.name;

  }


};
int main() 
{
  Person person1;
  person1.set_age(19);
  person1.set_name("Michal");

  Person person_copy;
  person_copy.copyFrom(person1);

  cout << person_copy.get_age() << endl; 
  cout << person_copy.get_name() << endl; 

	return 0;
}


