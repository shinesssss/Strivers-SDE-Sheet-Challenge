bool detectCycle(Node *head)
{
	//	Write your code here
    Node *fast=head;
    Node *slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
// Time complexity:O(N);
// Space  complexity:O(1);