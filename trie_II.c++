#include <bits/stdc++.h> 
struct node{
    node *arr[26];
    int cw=0;
    int cp=0;
    bool containskey(char ch,node *temp){
        return (arr[ch-'a']!=NULL);
    }
    void inserts(char ch,node *temp){
        arr[ch-'a']=temp;
    }
    node *pos(char ch,node *temp){
        return arr[ch-'a'];
    }
    void increaseprefix(node *temp){
        cp++;
    }
    void comm(node *temp){
        cw++;
    }
    int getend(node *temp){
        return cw;
    }
    int getcount(node *temp){
        return cp;
    }
    void deccp(node *temp){
        cp--;
    }
    void deccw(node *temp){
        cw--;
    }
};
class Trie{
node *root;
    public:

    Trie(){
        // Write your code here.
        root=new node();
    }

    void insert(string &word){
        // Write your code here.
        node *temp=root;
        for(int i=0;i<word.length();i++){
            if(!temp->containskey(word[i],temp)){
                temp->inserts(word[i],new node());
            }
            temp=temp->pos(word[i],temp);
           temp->increaseprefix(temp);
        }
        temp->comm(temp);
        
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        node *temp=root;
        for(int i=0;i<word.length();i++){
            if(temp->containskey(word[i],temp)){
                temp=temp->pos(word[i],temp);
            }else {
                return 0;
            }
        }
        return temp->getend(temp);
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        node *temp=root;
        for(int i=0;i<word.length();i++){
            if(temp->containskey(word[i],temp)){
                temp=temp->pos(word[i],temp);
            }else {
                return 0;
            }
        }
        return temp->getcount(temp);
    }

    void erase(string &word){
        // Write your code here.
        node *temp=root;
        for(int i=0;i<word.length();i++){
            if(temp->containskey(word[i],temp)){
                temp=temp->pos(word[i],temp);
                temp->deccp(temp);
            }else{
                return;
            }
        }
        temp->deccw(temp);
    }
};
