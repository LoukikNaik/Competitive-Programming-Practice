#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* arr[26];
    bool isEnd=false;
};
class Trie {
    Node* root;
public:
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node* t=root;
        int i,n=word.length();
        for(i=0;i<n;i++){
            if(!t->arr[word[i]-'a'])
            {
                t->arr[word[i]-'a']=new Node();
            }
            t=t->arr[word[i]-'a'];
        }
        t->isEnd=true;
    }
    
    bool search(string word) {
        Node* t=root;
        int i,j,k,n=word.length();
        for(i=0;i<n;i++){
            if(!t->arr[word[i]-'a'])
                return false;
            t=t->arr[word[i]-'a'];
        }
        if(t->isEnd==true)
            return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        Node* t=root;
        int i,j,k,n=prefix.length();
        for(i=0;i<n;i++){
            if(!t->arr[prefix[i]-'a'])
                return false;
            t=t->arr[prefix[i]-'a'];
        }
        return true;
    }
};
