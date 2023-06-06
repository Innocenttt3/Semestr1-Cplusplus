#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class Identifier
{
  private:

  public:
  unsigned int id()
  {
  
    return rand()%10;
  }

};

int main() 
{
  srand(time(NULL));
  Identifier identifier;
  cout << identifier.id();

	return 0;
}


