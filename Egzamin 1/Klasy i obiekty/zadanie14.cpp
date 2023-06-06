#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

enum DataType
{
  connected,
  disconnected,
  connecting
};
class PC
{
  public:
  DataType dataType;
  string ip_address;
  string owner_name;
  PC(DataType state, string ip, string owner)
  {
    dataType = state;
    ip_address = ip;
    owner_name = owner;
  }
  
};
void state_of_connection(PC &pc1)
{
  switch(pc1.dataType)
  {
    case connected:
    {
      cout << "zajebiscie buja";
      break;
    }
    case disconnected:
    {
      cout << "chujnia";
      break;
    }
    case connecting:
    {
      cout << "kto to wie xd";
      break;
    }
  }
  cout << " ip: " << pc1.ip_address << " user: " << pc1.owner_name;
}
int main() 
{
  PC pc1(disconnected, "192.168.1.1", "Johny Deep");
  state_of_connection(pc1);

	return 0;
}


