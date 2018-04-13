#include <iostream>
using namespace std;


 /*void printNum(int);
 int main() {
 printNum(35);
 return 0;
 }
 void printNum(int number) { cout << number; }*/
/*int number;
 void printNum() {cout << number; }
 int main() {
  number = 35;
 printNum();
 return 0;
 }*/
/*void doubleNumber (int &num )
{num = num* 2;}
int main (){
int num = 35;
doubleNumber (num);
cout<<num ;
return 0;
}*/
 /*int difference( const int x, const int y) {
 int diff = abs(x -y);
 return diff;
 }

 int main() {
 cout << difference(-200,50);
 return 0;
 }*/

const int ARRAY_LEN = 10;

int main() {
int arr[ARRAY_LEN] = {10}; // Note implicit initialization of
int *xPtr = arr, *yPtr = arr + ARRAY_LEN -1;
cout << *xPtr << " " << *yPtr;
}
