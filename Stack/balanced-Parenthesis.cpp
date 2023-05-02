#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    string str;
    cin >> str;

    bool res = true;
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (s.top() == '(')
            {
                s.pop();
            }
            else
            {
                res = false;
            }
        }
        else if (str[i] == '}')
        {
            if (s.top() == '{')
            {
                s.pop();
            }
            else
            {
                res = false;
            }
        }
        else if (str[i] == ']')
        {
            if (s.top() == '[')
            {
                s.pop();
            }
            else
            {
                res = false;
            }
        }
    }
    if (s.size() != 0)
    {
        cout << "Brackets Missing" << endl;
    }
    else
    {
        cout << res << endl;
    }

    return (0);
}