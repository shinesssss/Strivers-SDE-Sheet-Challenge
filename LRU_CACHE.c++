#include<bits/stdc++.h>
class LRUCache{
    public:
class node{
   public:
    int key;
    int value;
    node *next;
    node *prev;
    node(int a,int b){
        key=a;
        value=b;
        next=NULL;
        prev=NULL;
    }
};
//creation  of two nodes in DLL
node *head=new node(-1,-1);
node *tail=new node(-1,-1);
unordered_map<int,node*>mp;
int ca;


public:
    LRUCache(int capacity)
    {
        // Write your code here
        ca=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void addnode(node *add){
        node*temp=head->next;
        add->next=temp;
        temp->prev=add;
        head->next=add;
        add->prev=head;
    }
    void deletenode(node *add){
        node *delnext=add->next;
        node *delprev=add->prev;
        delprev->next=delnext;
        delnext->prev=delprev;
    }
    int get(int key)
    {
        // Write your code here
        if(mp.find(key)!=mp.end()){
            node *add=mp[key];
            int ans=add->value;
            mp.erase(key);
            deletenode(add);
            addnode(add);
            mp[key]=head->next;
            return ans;
        }
        return -1;
    }

    void put(int key, int value)
    {
        // Write your code here
        if(mp.find(key)!=mp.end()){
       node *existingnode=mp[key];
       mp.erase(key);
       deletenode(existingnode);
            
        }
        if(mp.size()==ca){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        mp[key]=head->next;
    }
};
