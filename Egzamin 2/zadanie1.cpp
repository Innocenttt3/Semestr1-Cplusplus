#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <fstream>
using namespace std;

class Matrix{
  private:
  float **arr;
  int size;

  public:
  void SetSingleValue(float value, int x, int y){
    arr[x][y] = value;
  }
  float GetSingleValue(int x, int y){
    return arr[x][y];
  }

  float& at(int x, int y){
    return arr[x][y];
  }

  Matrix(){};

  Matrix(int size){
    this->size = size;
    arr = new float*[size];{
      for (int i = 0; i < size; i++){
        arr[i] = new float[size];
      }
    }
  }

  ~Matrix(){
    for(int i = 0; i < size; i++){
      delete[] arr[i];
    }
    delete[] arr;
  }
  int SizeFunction(){
    return size;
  }

};

Matrix sum_matrix(Matrix &object1, Matrix &object2){
  if(object1.SizeFunction() == object2.SizeFunction())
  {
    Matrix tempMatrix(object1.SizeFunction());
    for(int i = 0; i < object1.SizeFunction(); i++){
      for(int j = 0; j < object1.SizeFunction(); j++){
        tempMatrix.SetSingleValue(object1.GetSingleValue(i, j) + object2.GetSingleValue(i, j), i, j);
      }
    }
    return tempMatrix;
  }
  else
  {
    Matrix tempMatrix2(1);
    return tempMatrix2;
  }
}

void print_matrix(Matrix &object){

  for(int i = 0; i < object.SizeFunction(); i++){
    for(int j = 0; j < object.SizeFunction(); j++){
        cout << object.GetSingleValue(i, j) << " ";
      }
      cout << endl;
    }
}

int main(){

  Matrix matrix(2);
  Matrix matrix2(2);

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      matrix.SetSingleValue(1.5, i, j);
      matrix2.SetSingleValue(2.5, i, j);
      }
}
  print_matrix(matrix);
  print_matrix(matrix2);
  Matrix results(2);
  results = sum_matrix(matrix, matrix2);

	return 0;
}




