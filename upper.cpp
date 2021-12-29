/*
This program is task E and will ask user for length to print upper square side.
*/

#include <iostream>
#include <iomanip> // cout formatting
using namespace std;
int main() {

   int us;
// ask user for length of the side
// input must be at least 2
   cout << "Enter the side length: ";
   cin >> us;
   cout << endl;
// print lower triangle part of a square
// counts through rows
   for (int i = 0; i < us; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int k = i; k <us; k++){
      cout << "*";
    }
    cout << endl; // move to next row
   }
    return 0;
}
