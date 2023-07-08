class Queue {
    // Define the data members(if any) here.
    stack<int>s1;
    stack<int>s2;
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        s1.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        //remove and return the fifo element
        //the one which enters first,return that
         if(s1.empty()&& s2.empty()){
            return -1;
        }
  if(s2.empty() &&!s1.empty()){
      while(!s1.empty()){
          s2.push(s1.top());
          s1.pop();
      }
      int ans=s2.top();
      s2.pop();
      return ans;
  }else if(!s2.empty()){
      int p=s2.top();
      s2.pop();
      return p;
  }
    }

    int peek() {
        // Implement the peek() function here.
        //return the top most element
        if(s1.empty()&& s2.empty()){
            return -1;
        }
      if(s2.empty()&& !s1.empty()){
          while(!s1.empty()){
              s2.push(s1.top());
              s1.pop();
          }
          int ans=s2.top();
          return ans;
      }else if(!s2.empty()){
          return s2.top();
      }
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return s1.empty()&& s2.empty();
    }
};