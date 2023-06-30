#include <bits/stdc++.h> 
void inse(stack<int>&stack,int r){
	if(stack.empty()||stack.top()<r){
		stack.push(r);
		return;
	}
	int p=stack.top();
	stack.pop();
	inse(stack,r);
	stack.push(p);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
if(stack.empty()){
	return;
}
int r=stack.top();
stack.pop();
sortStack(stack);
inse(stack,r);
	
}