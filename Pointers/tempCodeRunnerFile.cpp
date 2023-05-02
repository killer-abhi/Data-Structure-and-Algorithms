#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i=65;
    int *p=&i;
    cout<<*p<<endl;
    char ch=i;
    cout<<ch<<endl;
    char *pc=(char*)p;
    cout<<pc<<endl;
    getch();
}