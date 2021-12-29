/*
This program is task B and will ask user for height and width to print checkerboard.
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
//Printing the Checkboard
   for (int row = 0; row < h; row++) {
     for (int col = 0; col < w; col++){
	   if ((row + col)%2 == 0)
         cout << "*";
	else
	 cout << " ";
     }
     cout << endl;
    }
    return 0;
}
