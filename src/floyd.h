#include <iostream>
using namespace std ;

void floyd(int height = 4){
    int counter = 0;
    for(int i =0 ; i < height ; i++){
        for(int j = 0 ; j < height ;j++){
            if(j <= i){
                cout << ++counter <<" ";
            } else {
                cout <<" ";
            }
        }
        cout << endl ;
    }
}

