LinkedListNode<int> *middle(LinkedListNode<int> *head){
    LinkedListNode<int> *slow=head;
    LinkedListNode<int> *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
LinkedListNode<int> *reverse(LinkedListNode<int> *head){
    LinkedListNode<int> *curr=head;
    LinkedListNode<int> *nex=NULL;
    LinkedListNode<int> *prev=NULL;
    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int> *mid=middle(head);
    LinkedListNode<int> *rev=reverse(mid);
    LinkedListNode<int> *temp=head;//traverse from starting
             LinkedListNode<int> *midd=rev;
             while(midd!=NULL){
                 if(temp->data!=midd->data){
                     return false;
                 }else{
                     temp=temp->next;
                     midd=midd->next;
                 }
             }
             return true;



}
//time complexity:middle-o(n),reverse-o(n),palindrome-o(n)
//overall tc-o(3n)=~0(n);
//space complexity-o(1)