#include<iostream>
#include<vector> 
#include<limits.h> 
#include<utility> 
#include<cmath> 
using namespace std;


template <class T> 
class MaxHeap{

    private:
        vector<T> maxHeap; 

    public: 
        T maxHeapSize(); 
        void insertInMaxHeap(int data); 
        T getMax(); 
        void deleteMax();
        void visulaizeHeap(); 

        void push_back(int data); 

        void siftUpHeapify(int index); 
        void siftUpHeapify_BuildHeap(); 

        void siftDownHeapify(int index); 
        void siftDownHeapify_BuildHeap(); 
};


template <class T> 
void MaxHeap<T>::visulaizeHeap(){

    cout << endl; 
    cout << "Visualizing Heap: " << endl; 

    int i = 1; 
    int n = maxHeap.size(); 

    int level = -1;

    while(i < n){

        level++; 
        int levelSize = pow(2, level); 

        for(int j=0; i < n && j < levelSize; i++, j++){
            cout << maxHeap[i] << " ";
        }

        cout << endl;
    }

    cout << endl;

}


// T.C. = O(1) 
// S.C. = O(1) 
template <class T>
T MaxHeap<T>::maxHeapSize(){
    return maxHeap.size(); 
}


// T.C. = O(1) 
// S.C. = O(1) 
template <class T>
T MaxHeap<T>::getMax(){
    return maxHeap.size() ? maxHeap[1] : T{}; 
}


// T.C. = O(log(n)) 
// S.C. = O(1) 
template <class T>
void MaxHeap<T>::insertInMaxHeap(int data){
    
    if(maxHeap.size() == 0){
        maxHeap.push_back(-1); 
        maxHeap.push_back(data); 
        return; 
    }
    
    maxHeap.push_back(data); 
    int i = maxHeap.size() - 1; 

    while(i > 1){
        int parentIndex = i/2; 
        if(maxHeap[i] > maxHeap[parentIndex]){
            swap(maxHeap[i], maxHeap[parentIndex]); 
            i = parentIndex; 
        }
        else{
            break; 
        }
    }
}


// T.C. = O(log(n)) 
// S.C. = O(1) 
template <class T>
void MaxHeap<T>::deleteMax(){

    if(maxHeap.size() == 0){
        return; 
    }

    if(maxHeap.size() == 2){
        maxHeap.pop_back();
        maxHeap.pop_back();
        return;
    }

    int i = maxHeap.size() - 1;

    maxHeap[1] = maxHeap[i]; 
    maxHeap.pop_back(); 

    i = 1; 
    int n = maxHeap.size(); 

    while(2*i < n || 2*i+1 < n){

        int leftChild = 2*i; 
        int rightChild = 2*i + 1; 

        int largest = i; 

        if(leftChild < n && maxHeap[leftChild] > maxHeap[i]){
            largest = leftChild; 
        }
        if(rightChild < n && maxHeap[rightChild] > maxHeap[largest]){
            largest = rightChild; 
        }

        if(largest != i){
            swap(maxHeap[largest], maxHeap[i]); 
            i = largest; 
        }
        else{
            break; 
        }
    }
}


// T.C. = O(1) 
// S.C. = O(1) 
template <class T>
void MaxHeap<T>::push_back(int data){
    
    int n = maxHeap.size(); 

    if(n == 0){
        maxHeap.push_back(-1);
        maxHeap.push_back(data);
        return; 
    }

    maxHeap.push_back(data);
}


// T.C. = O(log(n)) 
// S.C. = O(1) 
template <class T>
void MaxHeap<T>::siftUpHeapify(int index){

    if(index <= 1) return; 

    while(index/2 >= 1){
        int parentIndex = index/2; 
        if(maxHeap[parentIndex] < maxHeap[index]){
            swap(maxHeap[parentIndex], maxHeap[index]); 
            index = parentIndex; 
        }
        else{
            break;
        }
    }

}


// T.C. = O(n * log(n)) 
// S.C. = O(1) 
template <class T>
void MaxHeap<T>::siftUpHeapify_BuildHeap(){

    int n = maxHeap.size(); 

    for(int i=2; i < n; i++){
        siftUpHeapify(i); 
    }

}


// T.C. = O(log(n)) 
// S.C. = O(1) 
template <class T>
void MaxHeap<T>::siftDownHeapify(int i){

    if(i == 0) return; 

    int n = maxHeap.size(); 

    while(2*i < n || 2*i+1 < n){
        
        int leftChild = 2*i; 
        int rightChild = 2*i + 1; 
        int largest = i; 

        if(leftChild < n && maxHeap[leftChild] > maxHeap[i]){
            largest = leftChild; 
        }
        if(rightChild < n && maxHeap[rightChild] > maxHeap[largest]){
            largest = rightChild; 
        }

        if(largest != i){
            swap(maxHeap[largest], maxHeap[i]); 
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
template <class T>
void MaxHeap<T>::siftDownHeapify(int i){

    iint(i == 0) return; 

    int n = maxHeap.size(); 

    int leftChild = 2*i; 
    int rightChild = 2*i + 1; 
    int largest = i; 

    if(leftChild < n && maxHeap[leftChild] > maxHeap[i]){
        largest = leftChild; 
    }
    if(rightChild < n && maxHeap[rightChild] > maxHeap[largest]){
        largest = rightChild; 
    }

    if(largest != i){
        swap(maxHeap[largest], maxHeap[i]); 
        siftDownHeapify(largest); 
    }
}

*/


// T.C. = O(n) 
// S.C. = O(1) 
template <class T>
void MaxHeap<T>::siftDownHeapify_BuildHeap(){

    int n = maxHeap.size(); 

    for(int i = (n-1)/2; i >= 1; i--){
        siftDownHeapify(i); 
    }

}


int main(){
    

    MaxHeap<int> h; 

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

    cout << "Current max element is: " << h.getMax() << endl; 


    return 0;
} 