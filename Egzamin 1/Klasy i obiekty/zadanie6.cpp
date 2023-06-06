#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

class Matrix
{
  private:
  float data[3][3];

  public:
  void set_data(float value, int i, int j)
  {
    data[i][j] = value;
  }
  float get_data(int i, int j)
  {
    return data[i][j];
  }

};

void print(Matrix &matrix)
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << matrix.get_data(i, j) << " ";
    }
    cout << endl;
  }
}
int randomisor()
{
  return rand()%11;
}
void add(Matrix &matrix, float value)
{
  float temp_value = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      temp_value = matrix.get_data(i, j) + value;
      matrix.set_data(temp_value, i, j);
    }
  }
}
void fill_matrix(Matrix &matrix)
{
  float random_value;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      random_value = randomisor();
      matrix.set_data(random_value, i, j);
    }
  }
}
int main() 
{
  srand(time(NULL));
  Matrix matrix;
  fill_matrix(matrix);
  print(matrix);
  cout << endl;
  add(matrix, 10);
  print(matrix);

	return 0;
}


