#include <iostream>

using namespace std;
int len(char *a)
{   int i=0;
    while(*(a++)!='\0')
        i++;
return i;
}
void swapp(int **a, int **b){
    int *tmp = *a;
    *a = *b; *b = tmp;
}
int main()
{
   /* char c[]="hola";
    cout<<len(c)<<endl;
    int n=1,n2=100;
    int *p1=&n; int *p2=&n2;
    swapp(&p1,&p2);
    cout<<*p1<<"--"<<*p2;*/

    char *oddOrEven = "Never odd or even ";
    char *nthCharPtr = &oddOrEven[5];
    nthCharPtr-=2;
    cout<<*nthCharPtr<<endl;
    char **pointerPtr = &nthCharPtr;
    cout<<pointerPtr<<endl;
    cout<<**pointerPtr<<endl;
    nthCharPtr++;
    cout << nthCharPtr - oddOrEven<<endl;
    return 0;
}
