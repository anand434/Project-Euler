#include <iostream>
using namespace std;

long int seq1( int a){
    long int sum1=0;
    for(int i=1;i<=a;i++)
        sum1 += (i*i);
    return sum1;
}
    
long int funct(int b){
    long int sum2 = 0;
    for(int i=1;i<=b;i++)
        sum2 += i;
    return (sum2*sum2);
}

int main(){
    long int diff;
    diff = (funct(100) - seq1(100));
    cout<<diff;
    return 0;
}