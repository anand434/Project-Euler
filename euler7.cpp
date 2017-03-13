// Euler Project - 10001st prime 
// problem - 7
#include <iostream>
#include <stdbool.h>
using namespace std;

static bool isPrime[1000000];
static int primes[100000];
int main(){
    long long int np=0,i,j;
    isPrime[2] = true;
    primes[np++] = 2;
    for(i=4;i<1000000;i+=2){
        isPrime[i] = false;
        isPrime[i-1] = true;
    }

    for(i=3;i<1000000;i+=2){
        if(isPrime[i]==true)
        {
            for(j=i*i;j<1000000;j+=i)
                isPrime[j]=false;
            primes[np++] = i;
            if(np>10001)
                break;  
        }
    }
    cout<<primes[10001];

    return 0;
}