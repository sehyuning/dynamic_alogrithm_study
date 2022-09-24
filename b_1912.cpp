#include<iostream>
#include<queue>
#include <cstdlib>
using namespace std;


int mazn(){

    int N,num[100001];
  
    long long Sum= 0;
    long long ref = -100000;
    long long m = 0;
    scanf("%d",&N);
    for(int i= 0; i<N;i++){
        scanf("%d",num+i);
    }   
  
    Sum = 0;
    
    for(int i =0;i<N;i++){

            Sum = Sum+num[i];
            ref = max(ref,Sum-m);
             m  =  min(m,Sum);
               
     }
    
    printf("%lld",ref);

    
}

    





