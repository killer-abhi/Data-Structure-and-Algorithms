#include <bits/stdc++.h>
#include "TrieNode.h"
class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertWord(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        // Recursive Call
        insertWord(child, word.substr(1));
    }
    void insertWord(string word)
    {
        insertWord(root, word);
    }
    bool searchWord(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchWord(child, word.substr(1));
    }
    bool searchWord(string word)
    {
        return searchWord(root, word);
    }

    void removeWord(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            root->isTerminal = false;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return;
        }
        removeWord(child, word.substr(1));

        // remove useless childNodes
        if (child->isTerminal == false)
        {
            for (int i = 0; i < 26; i++)
            {
                if (child->children[i] != NULL)
                {
                    return;
                }
            }
            delete child;
            root->children[index] = NULL;
        }
    }
    void removeWord(string word)
    {
        removeWord(root, word);
    }

    TrieNode *findLastCharNode(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            return root;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }

        return findLastCharNode(child, word.substr(1));
    }
    void autoComplete(TrieNode *root, string word, string output)
    {

        if (root->isTerminal)
        {
            cout << word + output << endl;
        }
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i] != NULL)
            {
                output = output + root->children[i]->data;
                autoComplete(root->children[i], word, output);
            }
        }
    }
    void autoComplete(string word)
    {
        TrieNode *lastRoot = findLastCharNode(root, word);
        autoComplete(lastRoot, word, "");
    }
};