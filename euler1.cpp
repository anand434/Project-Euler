// project euler - multiple of 3 and 5
// problem 1
#include <iostream>
using namespace std;
int main(){
    int n,sum=0; 
    cin>>n;
    while(n--){ 
        if(n%5==0 || n%3==0)
            sum += n ;
    }
    cout<<sum;
    return 0;
}