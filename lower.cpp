/*
This program is task D and will ask user for length to print lower square side.
*/

#include <iostream>
#include <iomanip> // cout formatting
using namespace std;
int main() {

   int ls;
// ask user for length of the side
// input must be at least 2
   cout << "Enter the side length: ";
   cin >> ls;
   cout << endl;
// print lower triangle part of a square
// counts through rows
   for (int i = 0; i <= ls; i++) {
    for (int j = 0; j < i; j++) {
      cout << "*";
    }
    cout << endl; // move to next row
   }
    return 0;
}
