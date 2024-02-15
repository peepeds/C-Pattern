#include <iostream>
using namespace std ; 

void rhombus(int height = 5 ){
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j <= 5 + height/2 ; j++){
            if(j>= i && j <=i+height-height/2){
                cout <<"*";
            } else {
                cout << " ";
            }
        }
        cout << endl ;
    }
}

