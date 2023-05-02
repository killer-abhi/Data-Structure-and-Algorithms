#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int i=10;
    int &j=i;
    i++;
    cout<<i<<"\t"<<j<<"\t"<<endl;
    int k=20;
    j=k;
    cout<<i<<"\t"<<j<<"\t"<<endl;
    getch();
    return 0;
}