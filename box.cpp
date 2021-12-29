/*
This program is Task A and will ask user for width and height to pprint box.
*/

#include <iostream>
using namespace std;
int main() {

   int h; // height of ractangle
   int w; // width of rectangle

// ask user for length and width
   cout << "Enter width: ";
   cin >> w;
   cout << "Enter height: ";
   cin >> h;
   cout << endl;
//Printing the box
   for (int i = 0; i < h; i++) {
     for (int j = 0; j < w; j++){
       cout << "*";
     }
     cout << endl;
    }
    return 0;
}
