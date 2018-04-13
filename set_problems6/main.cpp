#include <iostream>

using namespace std;
const int length=4,width=3;
void printArray(int a[],int len){
    cout<<a[0];
    for(int i=1;i<len;i++)
        cout<<","<<a[i];
}
void reverso(int *a, int len){
    int aux[len];
    for(int i=0; i<len; i++)
    {
      aux[i]= *(a+i);
    }
    for(int i=0; i<len; i++)
    {
       *(a+i) = aux[len-(i+1)];
    }
}
void transpose ( int in[][length], int out[][width]){
    for(int i=0; i< width, i++)
        for(int j=0; j<length;j++)
            out[j][i] = in[i][j];
}
void reverso2(int a[], int len) {
 for(int i = 0; i < len / 2; ++i) {
    int aux = *(numbers + i);
    *(numbers + i) = *(numbers + (len -i -1));
    *(numbers + (len -i -1)) = tmp;
 }
 }
int main()
{  int a[10]={1,2,3,4,5,6,7,8,9,10};
    printArray( a, 10);
    reverso(a,10);
    cout<<endl;
    printArray( a, 10);


    return 0;
}
