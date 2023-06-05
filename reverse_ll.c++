//recursive solution
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    //recursive solution
    LinkedListNode<int>*temp=head;
     LinkedListNode<int>*prev=NULL;
      LinkedListNode<int>*nex=NULL;
    while(temp!=NULL){
        nex=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nex;
    }
    return prev;

}