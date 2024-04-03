#include<iostream>
#include<vector> 
#include<limits.h> 
#include<utility> 
using namespace std;


class MaxHeap{

    private:
        vector<int> maxHeap; 

    public: 
        int maxHeapSize(); 
        void insertInMaxHeap(int data); 
        int getMax(); 

};



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


int main(){
    
    MaxHeap h; 

    h.insertInMaxHeap(10);
    cout << h.getMax() << endl;

    h.insertInMaxHeap(20);
    cout << h.getMax() << endl;

    h.insertInMaxHeap(40);
    cout << h.getMax() << endl;
    
    h.insertInMaxHeap(100);
    cout << h.getMax() << endl;
    
    h.insertInMaxHeap(30);
    cout << h.getMax() << endl;
    
    return 0;
}