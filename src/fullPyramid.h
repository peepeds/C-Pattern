#include <iostream>
using namespace std ;

void fullPyramid(int height = 3){
    height *=2;
    int i , j ;

    for( i =0 ; i < height/2 ; i++){ 
        for(int j = 0 ; j <  height  ; j+=1){
            if(j >= height/2-i && j <= height/2 +i ){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl ;
    }
    
}

