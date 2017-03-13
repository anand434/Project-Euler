// Project Euler 
// Longest Collatz Sequence
#include <iostream>
using namespace std;

int main(){
    long long t = 1000000;
    int temp;
    long long n , count , max = 0;
    for(int i = t; i > 40000; i--) {
        n = i;
        count = 1;
        while(n != 1){
            if(n % 2 == 0)
                n /= 2;
            else
                n = (3*n)+1;
            count++;
        }
        if(max < count){
            max = count;
            temp = i;
        }
    }
    cout << temp;
    return 0;
}