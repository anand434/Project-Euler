// Project Euler 
// Problem - 12

#include <iostream>
using namespace std;

int findDivisor(long int m){
    int noOfDivisor = 0;
    int i = 1;
    while(i!=m){
        if(m%i == 0)
            noOfDivisor++;
        i++;
    }
    return noOfDivisor;
}

int main(){
    long int j = 1;
    int l;
    cin>>l;
    for(long int i=2;i<10000;i++){
        if(l<=findDivisor(j))
            break;
        j+=i;
    }  
    cout<<endl; 
    cout<<j;
    return 0;
}