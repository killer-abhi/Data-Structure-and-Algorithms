#include<iostream>
#include<math.h>
using namespace std;

int multiply(int x,int y){
    if(y==0){
        return 0;
    }
    int sum=sum+multiply(x,(y-1));
    return (sum);
}
int main(){
    int m,n;
     cin>>m>>n;
     int res=multiply(m,n);
     cout<<"\n \n "<<res;
     return 0;
} 