/*
This program will ask user for width and height to print an upside down trapizoid.
*/
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int w; // width
    int h; // height
//Ask user for width and height
    cout << "Enter Width: ";
    cin >> w;
    cout << "Enter Height: ";
    cin >> h;
    cout << endl;
    int i;
    int j;
// check for correct  width and height 
    if (2*h > w+1 ) {
      cout << "Impossible Shape!!";
    }
    else {
        for ( i = 0; i < h;i++) { 
            for ( j = 0; j < i; j++) {
                cout << " ";
            }
                for ( j = 0; j < w; j++) { 
                    cout << "*";
                }
                w -= 2;
                cout << endl;
         }
    }
  return 0;
}
