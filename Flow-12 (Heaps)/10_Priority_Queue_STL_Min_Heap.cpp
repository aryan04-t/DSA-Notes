#include<iostream> 
#include<queue> 
#include<functional>       // greater<int> comparator 
using namespace std; 



int main(){

    // This is the way of converting the by deafult "Max Heap" priority queue of STL into a "Min Heap": 
    priority_queue<int, vector<int>, greater<int>> pq; 

    // Here, "int" is the datatype which definese that which type of data will be stored in the heap
    // vector<int> is the container which will be used to form the heap, there are two valid candidates for being the container of priority queue, "vector" and "deque", but by default when you don't change the container explicitly then it is "vector" 
    // And greater<int> is just a comparator which is basically used to flip the swapping logic of Max Heap so that it will behave like Min Heap, you can also define your own custom compartator and you can pass that also as the parameter here instead of greater<int> if you want
    // greater<int> custom compartor is present in <functional> header file in C++ 

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