/*



* The array representation of our binary tree heap that we have implemeted, that is also called a "Priority Queue". 

--> A priority queue can be implemented using array, linked list, heaps and binary search trees, but heap is one of the most efficient ways of implementing priority queue, that's why under the hood in C++ STL priority queue template, heaps are used to implement the priority queue. 

--> When a priority queue says it will give priority to elements with larger value then it behaves like a "Max Heap", and when you set a priority queue to give priority to elements with smaller value then it behaves like a "Min Heap". 



# Include <queue> header file and then you can use priority queue 

# By default the priority queue of C++ STL is a Max Heap, but you can convert it into Min Heap if you want 



# CPlusPlus.com (std::priority_queue): 
https://cplusplus.com/reference/queue/priority_queue/ 



*/


#include<iostream> 
#include<queue> 
using namespace std; 



int main(){

    priority_queue<int> pq;

    pq.push(40);
    pq.push(10);
    pq.push(20);
    pq.push(50); 
    pq.push(30);

    cout << endl; 
    cout << "Size of Max Heap is: " << pq.size() << endl; 
    cout << "Maximum element in Heap is: " << pq.top() << endl << endl; 
    pq.pop();

    if(pq.empty()){
       cout << "Heap is empty." << endl; 
    }
    else{
        cout << "Heap is not empty." << endl; 
    }
    cout << endl;

    cout << "Size of Max Heap is: " << pq.size() << endl; 
    cout << "Maximum element in Heap is: " << pq.top() << endl << endl; 
    pq.pop();

    cout << "Size of Max Heap is: " << pq.size() << endl; 
    cout << "Maximum element in Heap is: " << pq.top() << endl << endl; 
    pq.pop();
    pq.pop();
    pq.pop();

    if(pq.empty()){
       cout << "Heap is empty." << endl; 
    }
    else{
        cout << "Heap is not empty." << endl; 
    }
    cout << endl; 

    return 0; 

}