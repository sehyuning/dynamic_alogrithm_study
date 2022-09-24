#include<iostream>
#include<algorithm>
#include <cstdlib>
#include<map>
using namespace std;

int main(){

int N;
int ref[2] ={0};
int prev[2] = {0};
int num,temp1,temp2;
scanf("%d",&N);
for(int i= 0;i<N;i++)
{   scanf("%d",&num);
    temp1 = prev[0];
    prev[0] =ref[0];
    temp2=prev[1];
    prev[1] =ref[1];
    ref[0]= num+ref[1];
    ref[1]= num+max(temp1,temp2);
    }

printf("%d",max(ref[0],ref[1]));
};
    
    

