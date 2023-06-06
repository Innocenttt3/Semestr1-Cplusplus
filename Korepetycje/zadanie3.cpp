#include <iostream>
using namespace std;



int main(){

    int sum = 0;
    int number = 0;
    cout << "podaj liczbe naturalna: ";
    cin >> number;
    int numberCopy = number;
    int sizeOfNumber = 0;
    while(numberCopy){
        sizeOfNumber++;
        numberCopy /= 10;
    }
    cout << sizeOfNumber;
    cout << endl;


    if(sizeOfNumber <= 4){
        sum = 0;
        cout << sum;
    }
    else{
        int index = 0;
        while(number){
            if(sizeOfNumber - index >= 4){
                sum += number%10;
            }
            index++;
            number /= 10;
        }
        cout << sum;
    }



    return 0; 
}