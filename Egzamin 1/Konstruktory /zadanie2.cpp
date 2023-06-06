#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

class Mutex
{
  private:
  bool value;



  public:

  void set_value(bool hm)
  {
    value = hm;
  }
  bool get_value()
  {
    return value;
  }
  bool state()
  {
    if (value == 1) return true;
    else return false;
  }
  void lock()
  {
    value = false;
  }
  void release()
  {
    value = true;
  }
};
int main() 
{ 
  Mutex mutex;
  mutex.set_value(true);
  cout << mutex.state();
	return 0;
}


