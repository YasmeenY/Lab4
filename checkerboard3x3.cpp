/*
This program will do task G ask for width and height to print a 3x3 checkerboard.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
   int w;
   int h;
   cout << "Enter width: ";
   cin >> w;
   cout << "Enter height: ";
   cin >> h;
   cout << endl;
   char rowStart = '*';
   char c = '*';
   for(int row = 1; row <= h; row++){
      c = rowStart; //start with the character that the row should begin with
    for(int col = 1; col <= w; col++){
     cout << c;
//after every 3 columns, we need to toggle
     if(col % 3 == 0){
       if(c == '*')
         c = ' ';
     else
      c = '*';
     }
    }
   cout << endl;
//check if we should toggle the row starting character, after every 3 lines, we need to toggle
   if(row % 3 == 0){
     if(rowStart == '*')
       rowStart = ' ';
    else
       rowStart = '*';
    }
  }
  return 0;
}
