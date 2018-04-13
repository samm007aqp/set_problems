#include <iostream>

using namespace std;

/*int sum(const int a, const int b){
return a+b;
}
double sum(const double x, const double y){
return x+y;
}
int sum(const int x, const int y, const int z ){
return x+y+z;
}

int sum(const int x=5, const int y=6,const int z=7, const int w=8){
return x+y+z+w;
}
int main(){
    int a=10, b= 30;
    double x = 10.0 , y = 55.5;
    cout<<sum(2,2,5,6)<<endl;
    cout<<sum(1.0,2.0)<<endl;
    //cout<<sum(2,2,8)<<endl;
    return 0;
}*/
/*int sum( int arr_int[], int length){
    int sum=0;
    for(int i=0; i<length;i++)
    sum+= arr_int[i];
    return sum;
}*/
int sum( int arr_int[], int length){
    if (length == 0)
        return 0;
    else
    return  sum(arr_int, length - 1) + arr_int[length-1] ;
    }
int main (){
int a[10]={1,2,3,4,5,6,7,8,9,10};
cout<<sum(a,3);
}

