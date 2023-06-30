#include <bits/stdc++.h> 
class Queue {
 int *arr;
 int fronts;
 int rear;
 int size;
    
public:
    Queue() {
        // Implement the Constructor
        size=1000;
        arr=new int[size];
        fronts=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(fronts==rear){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear!=size){
            arr[rear++]=data;        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(rear==fronts){
            return -1;
        }else {
            int temp=arr[fronts++];
            if(fronts==rear){
                fronts=0;
                rear=0;
            }
            return temp;
        }
    }

    int front() {
        // Implement the front() function
        if(fronts==rear){
            return -1;
        }
        return arr[fronts];
    }
};