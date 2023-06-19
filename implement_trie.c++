/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

struct node{
    node *ar[26];
    bool flag=false;
    bool check(char ch,node* temp){
        return (ar[ch-'a']!=NULL);
    }
    void ins(char ch,node *temp){
        ar[ch-'a']=temp;
    }
    node *get(char ch){
        return ar[ch-'a'];
    }
    bool setend(node *temp){
     flag=true;
    }
    bool lp(node *temp){
        return flag;
    }
};
class Trie {
private:
node *root;
public:

    /** Initialize your data structure here. */
    Trie() {
      
       root=new node();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        node *temp=root;
        for(int i=0;i<word.length();i++){
            if(!temp->check(word[i],temp)){
                temp->ins(word[i],new node());
            }
           temp= temp->get(word[i]);
        }
       temp->setend(temp);
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        node *temp=root;
        for(int i=0;i<word.length();i++){
            if(!temp->check(word[i],temp)){
                return false;
            }
           temp= temp->get(word[i]);
        }
        if(temp->flag==true){
            return true;
        }else {
            return false;
        }
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
    node *temp=root;
    for(int i=0;i<prefix.length();i++){
        if(!temp->check(prefix[i],temp)){
            return false;
        }
        temp=temp->get(prefix[i]);
    }
    return true;
    }
};
TIME COMPLEXITY OF ALL:0(N);