#include <iostream>
using namespace std;


int randomisor(int bottom, int max){

    int returnValue = 0;
    returnValue = (rand()%(max-bottom + 1) + bottom);
    return returnValue; 
}

void PROSTOKAT_D(int width, int height){
    int border = 0;
    for(int i = 1; i <= width; i++){
        for(int j = 1; j <= height; j++){
            border = randomisor(2, 9);
            if(i == 1 || i == width || j == 1 || j == height || (i == width/2 + 1 && j <= height/2) || j == height/2 + 1){
                cout << border;
            }
            else{
                cout << " ";
            }
        }
    cout << endl;
    }
}

int main(){

    PROSTOKAT_D(9, 18);


    return 0; 
}