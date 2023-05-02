#include<bits/stdc++.h>
#include "Trie.h"
using namespace std;
int main()
{
    Trie t;
    t.insertWord("one");
    t.insertWord("two");
    t.insertWord("three");

    cout<<t.searchWord("one");
    t.removeWord("one");
    cout<<t.searchWord("one");

    return(0);
}