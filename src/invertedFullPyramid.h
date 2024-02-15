#include <iostream>
using namespace std ;

void invertedFullPyramid(int height = 5){
    //(height%2==1) ? height++ : height;
    height *= 2;
    for(int i=height/2-1; i>=0; i--){
        for(int j = 0 ; j < height ; j++){
            if(j >= height/2-i && j <= height/2+i){
                cout <<"*";
            } else {
                cout << " ";
            }
        }
        cout << endl ;
    }
}

