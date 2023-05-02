// Problem Description:
// Given an input string (STR), find and return all possible permutations of the input string.
// Note:
// The input string may contain the same characters, so there will also be the same permutations.
// The order of permutations doesn’t matter.

// Input Format:
// The only input line contains a string (STR) of alphabets in lower case

// Output Format:
// Print each permutations in a new line

#include<bits/stdc++.h>
using namespace std;
int count=0;
void permutations(string str,int start,int end){

    if(start==end){
        cout<<::count++<<"\t"<<str<<endl;
    }
    else{
        for(int i=start;i<=end;i++){

            swap(str[start],str[i]);

            permutations(str,start+1,end);
        }
    }
}

int main(){
    string str;
    cin>>str;
    permutations(str,0,str.length()-1);
    return 0;
}