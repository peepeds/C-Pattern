#include <iostream>
using namespace std;

void hollowHourGlass(int height = 5){
    int i, j;
    height *= 2;
   
    for(i = height / 2 - 1; i > 0; i--){
        for(j = 0; j < height; j++){
            if(i == height /2 -1 ){
                if(j >= height/2-i && j <= height/2+i){
                cout << "*";
                } else {
                    cout << " ";
                }
            } else{
                if(j == height / 2 - i || j == height / 2 + i){
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    
    for(i = 0; i <= height / 2 - 1; i++){ 
        for(j = 0; j < height; j++){
            if(i==height / 2 - 1){
                if(j >= height/2-i && j <= height/2 +i ){
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else{
                if(j == height / 2 - i || j == height / 2 + i){
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

