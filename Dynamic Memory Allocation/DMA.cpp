#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int *p =new int;
    *p=10;
    cout<<*p<<endl;
    delete p;
    double *pd=new double;
    char *c=new char;
    int *pa=new int[40];
    delete []pa;
    int n;
    cin>>n;
    int *pa2=new int[n];
    pa2[0]=10;
    pa2[5]=30;

}