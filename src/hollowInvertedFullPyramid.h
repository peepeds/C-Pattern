#include <iostream>
using namespace std;

void hollowInvertedFullPyramid(int height = 3) {
    height *= 2;
   
    for (int i = height / 2 - 1; i >= 0; i--) { 
        for (int j = 0; j < height; j++) {
            if (i == height / 2 - 1) {
                if (j >= height / 2 - i && j <= height / 2 + i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                if (j == height / 2 - i || j == height / 2 + i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
    
        }
        cout << endl;
    }
}
