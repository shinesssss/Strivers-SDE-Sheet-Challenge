//approach-1
int len(Node *head){
    Node *temp=head;
    int c=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    return c;
}
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int l1=len(firstHead);
    int l2=len(secondHead);
    int diff=0;
    Node *p1=NULL;
    Node *p2=NULL;
    if(l1>l2){
        diff=l1-l2;
        p1=firstHead;
        p2=secondHead;
    }else {
        diff=l2-l1;
        p1=secondHead;
        p2=firstHead;
    }
    while(diff!=0){
        p1=p1->next;
        if(p1==NULL){
            return NULL;
        }
        diff--;
    }
    while(p1!=NULL && p2!=NULL){
        p1=p1->next;
        p2=p2->next;
        if(p1==p2){
            return p1;
        }
    }
    return NULL;
  
    
}

//approach2
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

Node * findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    if(firstHead==NULL || secondHead==NULL){
        return NULL;
    }
    Node *p1=firstHead;
    Node *p2=secondHead;
while(p1!=p2){
        p1=p1->next;
        p2=p2->next;
        if(p1==p2){
            if(p1==NULL){
                return NULL;
            }
            return p1;
        }
        if(p1==NULL){
            p1=secondHead;
        }
        if(p2==NULL){
            p2=firstHead;
        }
        
}
return  NULL;
}