#include<bits/stdc++.h>
#include "Trie.h"
using namespace std;
int main()
{
    int n;
    cout << "Enter No Of Strings :: ";
    cin >> n;

    Trie t;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        t.insertWord(str);
    }
    cout<<"\n\n Enter Word To AutoComplete :: ";
    string word;
    cin>>word;
    t.autoComplete(word);
    return(0);
}