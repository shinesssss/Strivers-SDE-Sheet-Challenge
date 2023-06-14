#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>*dummy=new Node<int>(-1);
    Node<int>*tr=dummy;
    Node<int>*f=first;
    Node<int>*sec=second;
    while(f!=NULL && sec!=NULL){
        if(f->data<sec->data){
            tr->next=f;
            tr=tr->next;
        f=f->next;
        }else {
            tr->next=sec;
            tr=tr->next;
            sec=sec->next;
        }
}
while(f!=NULL){
    tr->next=f;
    tr=tr->next;
    f=f->next;
}
while(sec!=NULL){
    tr->next=sec;
    tr=tr->next;
    sec=sec->next;
}
return dummy->next;
}
