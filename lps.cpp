#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    long long int a = 600851475143;
    long long int i;
    for(i = 2 ; i < a ; i++){
        if(a % i == 0){
            v.push_back(i);
            a /= i;
        }
    }
    // printing last element of vector
    cout<<v.back();
    return 0;
}