#include<iostream>
#include<algorithm>
#include <cstdlib>
#include<map>
using namespace std;

int main()
{   int ref[501]={0};
    int num[501];
    int prev[501] ={0};
    int MAX = -1;
	int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
       for(int j=1;j<=i+1;j++){
            scanf("%d",&num[j]);
            prev[j] =ref[j];
            ref[j] =num[j]+max(prev[j-1],prev[j]);
            

       }
    }
    
    for(int i=1;i<=N;i++){
        
        if(MAX<ref[i]){
            MAX = ref[i];
        }
        
    }
    
    printf("%d",MAX);

    }
    
    

