#include <iostream>
#include <math.h>
#include <time.h>>
using namespace std;

double f_ratio(long int total){
    srand (time(0));
    double x = rand() / (double )RAND_MAX;
    double y = rand() / (double )RAND_MAX;
    int inside = 0;

    for (int i=0; i<total;i++){
        x = rand() / (double )RAND_MAX;
        y = rand() / (double )RAND_MAX;
        if( 1 > sqrt(pow(x,2)+pow(y,2)))
            inside++;
    }
    return (double)4/((double) total/(double) inside);
}

int main()
{
    const long int total = 5000000;
    cout<<f_ratio(total)<<endl;
    return 0;
}
