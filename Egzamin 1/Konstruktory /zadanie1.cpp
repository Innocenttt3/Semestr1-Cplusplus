#include <iostream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

class Student_fir
{
  private:
  int index_numb;
  int first_exam;
  int second_exam;
  int make_up_exam;
  public:
  Student_fir(int index)
  {
    index_numb = index;
  }
  int get_first_exam()
  {
    return first_exam;
  }
  int get_second_exam()
  {
    return second_exam;
  }
  int get_make_up_exam()
  {
    return make_up_exam;
  }
  void set_first_exam(int points)
  {
    first_exam = points;
  }
  void set_second_exam(int points)
  {
    second_exam = points;
  }
  void set_make_up_exam(int points)
  {
    make_up_exam= points;
  }
};
float avg_marks(float *tab, int amount_of_students)
{
  float sum = 0;
  for ( int i = 0; i < amount_of_students; i++)
  {
    sum += tab[i];
  }
  return sum/amount_of_students;
}
int randomisor()
{
  return rand()%51;
}
int main() 
{
  srand(time(NULL));
  cout << "ilosc studentow: " << endl;
  int amount_of_students;
  cin >> amount_of_students;
  float *marks = new float[amount_of_students];
  for( int i = 0; i < amount_of_students; i++)
  {
    Student_fir student(300+i);
    student.set_first_exam(randomisor());
    student.set_second_exam(randomisor());
    int points_sum = student.get_first_exam() + student.get_second_exam();
    if(points_sum > 90) marks[i] = 5;
    else if (points_sum > 80) marks[i] = 4.5;
    else if (points_sum > 70) marks[i] = 4;
    else if (points_sum > 60) marks[i] = 3.5;
    else if (points_sum > 50) marks[i] = 3;
    else
    {
      student.set_make_up_exam(randomisor());
      if(min(student.get_first_exam(), student.get_second_exam())  + student.get_make_up_exam() > 50)
      {
        marks[i] = 3;
      }
      else marks[i] = 2;
    }
    cout << marks[i] << endl;
  }
  cout << avg_marks(marks, amount_of_students);
  delete[] marks;
	return 0;
}


