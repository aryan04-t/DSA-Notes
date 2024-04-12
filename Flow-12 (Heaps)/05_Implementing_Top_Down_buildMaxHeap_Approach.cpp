#include<iostream>
#include<vector> 
#include<limits.h> 
#include<utility> 
#include<cmath> 
using namespace std;


class MaxHeap{

    private:
        vector<int> maxHeap; 

    public: 
        int maxHeapSize(); 
        void insertInMaxHeap(int data); 
        int getMax(); 
        void deleteMax();
        void visulaizeHeap(); 

        void push_back(int data); 

        void siftUpHeapify(int index); 
        void siftUpHeapify_BuildHeap(); 
};


void MaxHeap::visulaizeHeap(){

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
int MaxHeap::maxHeapSize(){
    return maxHeap.size(); 
}


// T.C. = O(1) 
// S.C. = O(1) 
int MaxHeap::getMax(){
    return maxHeap.size() ? maxHeap[1] : INT_MIN; 
}


// T.C. = O(log(n)) 
// S.C. = O(1) 
void MaxHeap::insertInMaxHeap(int data){
    
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
void MaxHeap::deleteMax(){

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
void MaxHeap::push_back(int data){
    
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
void MaxHeap::siftUpHeapify(int index){

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
void MaxHeap::siftUpHeapify_BuildHeap(){

    int n = maxHeap.size(); 

    for(int i=2; i < n; i++){
        siftUpHeapify(i); 
    }

}


int main(){
    

    MaxHeap h; 

    h.push_back(10); 
    h.push_back(20); 
    h.push_back(30); 
    h.push_back(40); 
    h.push_back(50); 
    h.push_back(5); 
    h.push_back(15); 
    h.push_back(25); 

    h.visulaizeHeap(); 

    h.siftUpHeapify_BuildHeap();

    h.visulaizeHeap(); 

    cout << "Current max element is: " << h.getMax() << endl; 


    return 0;
} 