// project Euler - Largest palindrome product
// problem - 4
#include <iostream>
#include <vector>
using namespace std;

bool isPalin(long int a)
{
    long int rev=0,numc=a;
    while(a>0)
    {
        rev = (rev*10)+(a%10);
        a/=10;
    }
    if (rev==numc)
        return true;
    else 
        return false;
}

int main(){
    vector<long int> v; 
    for(int i=900;i<999;i++){
        for(int j=900;j<999;j++){
            if(isPalin(i*j))
                v.push_back(i*j);
        }
    }
    cout << v.back();
    return 0;
}