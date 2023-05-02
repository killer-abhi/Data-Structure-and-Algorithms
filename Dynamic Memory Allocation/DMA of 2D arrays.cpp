#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int **p=new int* [10];
    p[0]=new int [20];
    p[1]=new int [20];
    p[2]=new int [20];

    // User Defined 2-D Array
    int m,n;
    cin>>m>>n;

    int **a=new int*[m];
    for(int i=0;i<n;i++)
    {
        a[i]=new int[n];
    } 

    //For Deallocation

    for(int i=0;i<m;i++)
    {
        delete []a[i];
    }
    delete []a;
    getch();
    return 0;
}    