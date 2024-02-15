#include <iostream>
using namespace std ;

void invertedLeftHat(int height = 5){
    for(int i =0 ; i < height ; i++){
        for(int j = 0 ; j < height ;j++){
            if(j >= i){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl ;
    }
}
