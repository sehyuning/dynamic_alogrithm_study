#include<iostream>
#include<algorithm>
#include <cstdlib>
#include<map>
using namespace std;
struct color{
    int val;
    int prev;

};
 
bool compare(const color& a,const color& b){
    return a.val<b.val;
};
int mazn()
{   int N;
    color ref[3];
    color m[3];
    for(int i=0;i<3;i++){
        ref[i].val =0;
        ref[i].prev =4;
        m[i].prev =i;
    }
    
    scanf("%d",&N);
    
    for(int i=0;i<N;i++){  
        scanf("%d %d %d",&m[0].val,&m[1].val,&m[2].val);
       for(int i=0;i<3;i++){
        m[i].prev =i;
    }
        sort(m,m+3,compare);
        sort(ref,ref+3,compare);
            int ref0stack =ref[0].val;
            int ref1stack =ref[1].val;
            int ref0prev = ref[0].prev;
            if(ref[0].prev != m[0].prev){
                ref[0].prev =m[0].prev;
                ref[0].val += m[0].val;
                if(ref0prev != m[1].prev){
                ref[1].prev =m[1].prev;
                ref[1].val =ref0stack+m[1].val;
                ref[2].prev = m[2].prev;
                ref[2].val = ref1stack+m[2].val;}
                else{
                ref[1].prev =m[2].prev;
                ref[1].val = ref0stack+m[2].val;
                ref[2].prev = m[1].prev;
                ref[2].val = ref1stack+m[1].val;
                }
            }
            else{
                ref[0].prev =m[1].prev;
                ref[0].val =ref0stack+ m[1].val;
                ref[1].prev =m[2].prev;
                ref[1].val =ref0stack+m[2].val;
                ref[2].prev =m[0].prev;
                ref[2].val =ref1stack+m[0].val;
                }
            }
            

    
    
    sort(ref,ref+3,compare);
    printf("%d",ref[0].val);
	
    }
    
    

