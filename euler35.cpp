// project euler - problem 35
// circular prime
#include <bits/stdc++.h>
using namespace std;
vector <int> v;

void sieveOfEratosthenes(int n){
    bool isPrime[n+1];
    memset(isPrime , true , sizeof(isPrime));
    for(int i = 2 ; i*i <= n; i++){
        if(isPrime)
            for(int j = i*i ; j<=n ;j += i)
                isPrime[j] = false;
    }
    for(int i=2 ; i <= n ; i++){
        if(isPrime[i])
            v.push_back(i);
   }
}
void compute(int n){
    int rev = 0 ;
    while(n!=0){
        rev = rev*10 + (n%10);
        n /= 10 ;
    }
}

int checkCircularPrime(int n){
    string s = string(n) + '0';
    int l = s.length();
    char ch[l];
    int cnv;
    int k;
    if(v.find(n)){
        for(int i=0 ; i<l ;i++){
            temp = c[i];
            c[i] = c[i+1];
            c[i+1] = temp;
        }
    }
}

int main(){
    sieveOfEratosthenes(1000000);
    
    
    return 0;
}