// Problem - 39 (Integer Right Triangle)
// Project Euler
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
    int i , j , k , ar[1001] = {0} ;
    int root[10000001];
    int max = 9;
    for(i=0;i<1000001;i++)
        root[i] = -1;
    for(i=0;i<1001;i++){
        ar[i] = 0 ;
        root[i*i] = i ;
    }   
    for(i=0;i<500;i++){
        for(j=i;j<500;j++){
            if(i+j+sqrt(i*i + j*j)>1000)
                break;
            int r = root[(i*i + j*j)];
            if(r == -1)
                continue;
            ar[i+j+r]++;
        }
    }
    for(i=0;i<=1000;i++)
        if(ar[i] > ar[max])
            max = i ;
    printf("soultion max is : %d" , max);
    
    return 0;
}
