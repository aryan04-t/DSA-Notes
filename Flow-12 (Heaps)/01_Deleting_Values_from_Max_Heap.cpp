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

        int leftChildIndex = 2*i;
        int rightChildIndex = 2*i + 1;

        if(leftChildIndex < n && maxHeap[leftChildIndex] > maxHeap[i]){
            swap(maxHeap[leftChildIndex], maxHeap[i]); 
            i = leftChildIndex; 
        }
        else if(rightChildIndex < n && maxHeap[rightChildIndex] > maxHeap[i]){
            swap(maxHeap[rightChildIndex], maxHeap[i]); 
            i = rightChildIndex; 
        }
        else{
            break; 
        }
    }
}


int main(){
    

    MaxHeap h; 

    cout << endl;
    h.insertInMaxHeap(10);
    cout << "Inserted 10 in the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;

    cout << endl << "- - - - - - - - - - " << endl << endl; 



    h.insertInMaxHeap(20);
    cout << "Inserted 20 in the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;

    cout << endl << "- - - - - - - - - - " << endl << endl; 



    h.insertInMaxHeap(40);
    cout << "Inserted 40 in the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;
    
    cout << endl << "- - - - - - - - - - " << endl << endl; 


    
    h.insertInMaxHeap(100); 
    cout << "Inserted 100 in the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;
    
    cout << endl << "- - - - - - - - - - " << endl << endl; 



    h.insertInMaxHeap(30);
    cout << "Inserted 30 in the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl; 

    cout << endl << "- - - - - - - - - - " << endl << endl; 

   

    h.insertInMaxHeap(5000); 
    cout << "Inserted 5000 in the heap." << endl; 
    h.visulaizeHeap(); 
    cout << "Current max element in the heap is: " << h.getMax() << endl; 

    cout << endl << "- - - - - - - - - - " << endl << endl; 




    h.deleteMax();
    cout << "Deleted max element from the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;

    cout << endl << "- - - - - - - - - - " << endl << endl;  



    h.deleteMax();
    cout << "Deleted max element from the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;

    cout << endl << "- - - - - - - - - - " << endl << endl; 



    h.deleteMax();
    cout << "Deleted max element from the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;

    cout << endl << "- - - - - - - - - - " << endl << endl; 



    h.deleteMax();
    cout << "Deleted max element from the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;

    cout << endl << "- - - - - - - - - - " << endl << endl; 



    h.deleteMax();
    cout << "Deleted max element from the heap." << endl; 
    h.visulaizeHeap();
    cout << "Current max element in the heap is: " << h.getMax() << endl;

    cout << endl << "- - - - - - - - - - " << endl << endl; 



    return 0;
} 