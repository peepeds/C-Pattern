#include <iostream>
using namespace std ;

void diamond(int height = 2){
    if(height%2==0) height++;
    int i , j ;
   
    for( i =0 ; i <= height/2 ; i++){ 
        for(int j = 0 ; j <  height  ; j+=1){
            if(j >= height/2-i && j <= height/2 +i ){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl ;
    }
    for(i=height/2-1; i>=0; i--){
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

