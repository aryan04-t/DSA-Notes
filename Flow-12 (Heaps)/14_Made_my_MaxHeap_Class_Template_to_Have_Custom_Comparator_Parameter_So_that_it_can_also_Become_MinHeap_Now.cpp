#include<iostream>
#include<vector> 
#include<limits.h> 
#include<utility> 
#include<cmath> 
using namespace std;


template<class T>
class myGreater{

    public:

        bool operator()(const T& a, const T& b) const {
            return a > b;
        }
};


template<class T>
class mySmaller{

    public:

        bool operator()(const T& a, const T& b) const {
            return a < b;
        }
};


template <class T, class Container = vector<T>, class Comparator = mySmaller<T>> 
class Heap{

    private:
        Container heap; 
        Comparator comparator;

    public: 
        T size(); 
        T top(); 
        bool empty(); 

        void insertInHeap(int data); 
        void deleteFromHeap();
        void visulaizeHeap(); 

        void push_back(int data); 

        void siftUpHeapify(int index); 
        void siftUpHeapify_BuildHeap(); 

        void siftDownHeapify(int index); 
        void siftDownHeapify_BuildHeap(); 
};


template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::visulaizeHeap(){

    cout << endl; 
    cout << "Visualizing Heap: " << endl; 

    int i = 1; 
    int n = heap.size(); 

    int level = -1;

    while(i < n){

        level++; 
        int levelSize = pow(2, level); 

        for(int j=0; i < n && j < levelSize; i++, j++){
            cout << heap[i] << " ";
        }

        cout << endl;
    }

    cout << endl;

}


// T.C. = O(1) 
// S.C. = O(1) 
template <class T,  class Container, class Comparator> 
T Heap<T, Container, Comparator>::size(){
    return heap.size(); 
}


// T.C. = O(1) 
// S.C. = O(1) 
template <class T, class Container, class Comparator> 
T Heap<T, Container, Comparator>::top(){
    return heap.size() ? heap[1] : T{}; 
}


template <class T,  class Container, class Comparator> 
bool Heap<T, Container, Comparator>::empty(){
    return heap.size() ? true : false;
}


// T.C. = O(log(n)) 
// S.C. = O(1) 
template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::insertInHeap(int data){
    
    if(heap.size() == 0){
        heap.push_back(-1); 
        heap.push_back(data); 
        return; 
    }
    
    heap.push_back(data); 
    int i = heap.size() - 1; 

    while(i > 1){
        int parentIndex = i/2; 
        if( !comparator(heap[i], heap[parentIndex]) ){
            swap(heap[i], heap[parentIndex]); 
            i = parentIndex; 
        }
        else{
            break; 
        }
    }
}


// T.C. = O(log(n)) 
// S.C. = O(1) 
template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::deleteFromHeap(){

    if(heap.size() == 0){
        return; 
    }

    if(heap.size() == 2){
        heap.pop_back();
        heap.pop_back();
        return;
    }

    int i = heap.size() - 1;

    heap[1] = heap[i]; 
    heap.pop_back(); 

    i = 1; 
    int n = heap.size(); 

    while(2*i < n || 2*i+1 < n){

        int leftChild = 2*i; 
        int rightChild = 2*i + 1; 

        int largest = i; 

        if(leftChild < n && !comparator(heap[leftChild], heap[i]) ){
            largest = leftChild; 
        }
        if(rightChild < n && !comparator(heap[rightChild], heap[largest]) ){
            largest = rightChild; 
        }

        if(largest != i){
            swap(heap[largest], heap[i]); 
            i = largest; 
        }
        else{
            break; 
        }
    }
}


// T.C. = O(1) 
// S.C. = O(1) 
template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::push_back(int data){
    
    int n = heap.size(); 

    if(n == 0){
        heap.push_back(-1);
        heap.push_back(data);
        return; 
    }

    heap.push_back(data);
}


// T.C. = O(log(n)) 
// S.C. = O(1) 
template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::siftUpHeapify(int index){

    if(index <= 1) return; 

    while(index/2 >= 1){
        int parentIndex = index/2; 
        if( !comparator(heap[index], heap[parentIndex]) ){
            swap(heap[parentIndex], heap[index]); 
            index = parentIndex; 
        }
        else{
            break;
        }
    }

}


// T.C. = O(n * log(n)) 
// S.C. = O(1) 
template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::siftUpHeapify_BuildHeap(){

    int n = heap.size(); 

    for(int i=2; i < n; i++){
        siftUpHeapify(i); 
    }

}


// T.C. = O(log(n)) 
// S.C. = O(1) 
template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::siftDownHeapify(int i){

    if(i == 0) return; 

    int n = heap.size(); 
    
    while(2*i < n || 2*i+1 < n){
        
        int leftChild = 2*i; 
        int rightChild = 2*i + 1; 
        int largest = i; 

        if(leftChild < n && !comparator(heap[leftChild], heap[i]) ){
            largest = leftChild; 
        }
        if(rightChild < n && !comparator(heap[rightChild], heap[largest]) ){
            largest = rightChild; 
        }

        if(largest != i){
            swap(heap[largest], heap[i]); 
            i = largest; 
        }
        else{
            break; 
        }
    }

}


/*

// This function is the recursive implementation of above written iterative siftDownHeapify() function, although iterative code is better as it has O(1) space complexity, and even a optimized complier is also capable of converting below written tail recursive function To a code where the stack space won't be used and space complexity will become O(1), but we will not take in consideration that our compiler is smart and we will consider the space complexity as O(log(n)) which is caused due to the function call stack, although iterative code is overall better, but I just wanted to write this recursive code also once, that's it 

// T.C. = O(log(n)) 
// S.C. = O(log(n)) 
template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::siftDownHeapify(int i){

    iint(i == 0) return; 

    int n = heap.size();   

    int leftChild = 2*i; 
    int rightChild = 2*i + 1; 
    int largest = i; 

    if(leftChild < n && !comparator(heap[leftChild], heap[i]) ){
        largest = leftChild; 
    }
    if(rightChild < n && !comparator(heap[rightChild], heap[largest]) ){
        largest = rightChild; 
    }

    if(largest != i){
        swap(heap[largest], heap[i]); 
        siftDownHeapify(largest); 
    }
}

*/


// T.C. = O(n) 
// S.C. = O(1) 
template <class T, class Container, class Comparator> 
void Heap<T, Container, Comparator>::siftDownHeapify_BuildHeap(){

    int n = heap.size(); 

    for(int i = (n-1)/2; i >= 1; i--){
        siftDownHeapify(i); 
    }

}


int main(){
    
    Heap<int, vector<int>, myGreater<int>> h; 

    h.push_back(10); 
    h.push_back(20); 
    h.push_back(30); 
    h.push_back(40); 
    h.push_back(50); 
    h.push_back(5); 
    h.push_back(15); 
    h.push_back(25); 

    h.visulaizeHeap(); 

    h.siftDownHeapify_BuildHeap();

    h.visulaizeHeap(); 

    cout << "Current max element is: " << h.top() << endl; 


    return 0;
} 