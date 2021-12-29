/*
This program is task C and will ask user for size to print cross.
*/
#include <iostream>
using namespace std;
int main() {

   int s;
// ask user for size
   cout << "Enter Size: ";
   cin >> s;
   cout << endl;
//Printing the Checkboard
   for (int i = 0; i < s; i++) {
     for (int j = 0; j < s; j++){
	if ( i == j || j == (s-i-1))
         cout << "*";
	else
	 cout << " ";
     }
     cout << endl;
    }
    return 0;
}
