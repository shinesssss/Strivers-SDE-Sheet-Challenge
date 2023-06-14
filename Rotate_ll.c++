/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL || head->next==NULL|| k==0){
          return head;
     }
     Node*temp=head;
     int len=1;
     while(temp->next!=NULL){
          temp=temp->next;
        len++;
     }
     temp->next=head;
     k=k%len;
     k=len-k;
   //  Node *st=head;
     while(k--){
temp=temp->next;
     }
     head=temp->next;
     temp->next=NULL;
return head;
}
//time complexity:o(n)
//space complexity:0(1)