#include <bits/stdc++.h>
#include "Trie.h"
using namespace std;
int main()
{
    int n;
    cout << "Enter No Of Strings :: ";
    cin >> n;

    Trie suffixTrie;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        while (str.size() != 0)
        {
            suffixTrie.insertWord(str);
            str = str.substr(1);
        }
    }
    cout<<"\n\n Enter Word To Match :: ";
    string word;
    cin>>word;
    cout<<suffixTrie.searchWord(word);
        
    return (0);
}