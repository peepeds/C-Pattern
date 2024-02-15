#include <iostream>
using namespace std;

void hollowDiamond(int height = 6) {
    height *= 2;
    int i, j;
   
    for (i = 0; i < height / 2; i++) { 
        for (j = 0; j < height; j++) {
            if (j == height / 2 - i || j == height / 2 + i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    

    for (i = height / 2 - 2; i >= 0; i--) { 
        for (j = 0; j < height; j++) {
            if (j == height / 2 - i || j == height / 2 + i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

