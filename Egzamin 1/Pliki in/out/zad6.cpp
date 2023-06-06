#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
using namespace std;

struct Matrix
{
  public:
  int rows;
  int columns;
  float **dataBase;

  void CreateMatrix(int rows, int columns)
  {
    this->columns = columns;
    this->rows = rows;
    dataBase = new float*[rows];
    for (int i = 0; i < rows; i++)
    {
      dataBase[i] = new float[columns];
    }
  }
  void printMatrix()
  {
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        cout << dataBase[i][j] << " ";
      }
      cout << endl;
    }
  }
  void fillMatrix()
  {
    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < columns; j++)
      {
        dataBase[i][j] = i+j;
      }
    }
  }
};

void read_mat(const char* fileName, Matrix &matrix)
  {
    FILE *file = fopen(fileName, "r");
    if(file == NULL) cout << "error opening file";
    float temp_value = 0;
    int rows = 0;
    int columns = 0;
    fscanf(file, "%d", &rows);
    fscanf(file, "%d", &columns);
    matrix.CreateMatrix(rows, columns);
    for (int i = 0; i < rows; i++) 
    {
      for (int j = 0; j < columns; j++) 
      {
        fscanf(file, "%f", &temp_value);
        matrix.dataBase[i][j] = temp_value;
      }
    }
    fclose(file);
  }
void write_mat(const char* fileName, Matrix &matrix)
{
    FILE *file = fopen(fileName, "w");
    if(file == NULL) cout << "error opening file";
    fprintf(file, "%d ", matrix.rows);
    fprintf(file, "%d", matrix.columns);
    fprintf(file, "\n");
    for (int i = 0; i < matrix.rows; i++) 
    {
      for (int j = 0; j < matrix.columns; j++) 
      {
        fprintf(file, "%.1f ", matrix.dataBase[i][j]);
      }
      fprintf(file, "\n");
    }

}
int main() 
{
  Matrix matrix;
  read_mat("test01.txt", matrix);
  matrix.printMatrix();
  write_mat("test02.txt", matrix);
 
 
	return 0;
}
