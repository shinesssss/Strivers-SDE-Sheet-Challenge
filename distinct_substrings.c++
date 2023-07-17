#include <bits/stdc++.h> 
class node{
    public:
    node *a[26];
    bool containskey(char ch){
        return  a[ch-'a']!=NULL;
    }
    void insert(char ch,node *p){
        a[ch-'a']=p;
    }
    node* get(char ch){
        return a[ch-'a'];
    }
    
};
int distinctSubstring(string &word) {
    //  Write your code here.
    //using trie;
    node *root=new node();
    int count=0;
    for(int i=0;i<word.length();i++){
        node *temp=root;
        for(int j=i;j<word.length();j++){
            if(!temp->containskey(word[j])){
                count++;
                temp->insert(word[j],new node());
            }
            temp=temp->get(word[j]);
        }
    }
    return count;
}
