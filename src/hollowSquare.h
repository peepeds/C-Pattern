#include <iostream>
using namespace std ; 

void hollowSquare(int height = 5){
    for(int i =0 ; i < height ;i++){
        for(int j=0 ; j < height ; j++){
           
            if(i == 0 || i == height - 1){
                cout << "*";
            } 
            else if (j == 0 || j == height -1) {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

