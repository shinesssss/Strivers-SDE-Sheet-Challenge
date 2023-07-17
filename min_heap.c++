#include <bits/stdc++.h> 
void heapify(vector<int> &v, int i){

int smallest = i;

int left = 2*i+1;

int right = left + 1;

 

if(left <v.size() && v[left] < v[smallest]){

smallest = left;

}

if(right < v.size() && v[right] < v[smallest]){

smallest = right;

}

if(smallest != i){

swap(v[smallest], v[i]);

heapify(v, smallest);

}

}

 

int deleteElem(vector<int> &v){

int ans = -1;

if(v.size() == 0) return ans;

 

ans = v[0];

 

// only one element is present in heap

if(v.size() == 1){

v.pop_back();

return ans;

}

 

// common algorithm to delete where we swap the

// rightmost element with element at index 0

// pop the array and then put the element at index 0 at

// its original place using heapify algoritm

v[0] = v[v.size()-1];

v.pop_back();

heapify(v, 0);

 

return ans;

}

 

void insert(vector<int> &v, int num){

v.push_back(num);

 

// element inserted was the only element in heap

if (v.size() == 1) {

return;

}

 

// index of recently pushed element

int idx = v.size()-1;

 

// put the recently pushed element in its correct place

while(idx > 0){

int parentIndex = (idx-1)/2;

if(v[parentIndex] > v[idx]){

swap(v[parentIndex], v[idx]);

idx = parentIndex;

}

else break;

}

}

 

vector<int> minHeap(int n, vector<vector<int>>& q) {

vector<int> v; // actual heap array

vector<int> ans; // vector to store the response of query type 1 ie.e deleted elements

 

// itereate through the given queries

for(int i=0; i<q.size(); i++){

vector<int> query = q[i];

 

// query for insertion has 0 at index 0

if(query[0] == 0){

insert(v, query[1]);

}

else{

// query for insertion has 1 at index 0, so its handled in else case

int res = deleteElem(v);

ans.push_back(res); // pushing deleted element in ans vector

}

}

return ans;

}
