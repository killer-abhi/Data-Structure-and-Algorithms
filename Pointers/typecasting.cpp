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
    //int to char* typecasting
    
    char *pc=(char*)p;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;

    //char to int* typecasting
    ch='P';
    char *c=&ch;
    cout<<*c<<endl;
    int *q=(int*)c;
    cout<<(void*)c<<endl;  //printing address stored in a character pointer
    cout<<q<<endl;
    cout<<*q<<endl;


    getch();
}