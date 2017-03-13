// project euler - consecutive prime sum
// problem 50
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(long int a ,long int i){
    int count =0;
    if(a%i==0){
        count ++;
    }
    i=i+1;
    if(count<=2)
        isPrime(a ,i);
    else
        return false;
    return true;
}

int main(){
    vector<int> v;
    long int a = 41;
    long int sum = 0;
    v.push_back(2);
    for(long int i=3;i<sqrt(a);i+=2){
        if(isPrime(i , 1))
            v.push_back(a);
    }
    int size = v.size();
    cout<<size;
    return 0;
}
