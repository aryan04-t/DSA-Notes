/*

# Algorithm of Heap Sort: 

1. Convert Array into Max Heap (Write buildHeap Function using Bottom-Up Approach, Start from Leaf Node, and Implement the heapify function using siftDown Operation) 

2. Now once you have the max heap formed, keep fetching the 0th index max element, swap the last valid max heap number with 0th index, heapify the tree until the valid range, and insert the element which you fetched in the beginning at its right position 

*/



#include<iostream> 
#include<vector> 
#include<utility> 
#include<cmath> 
using namespace std; 


// T.C. = O(log(n)) 
// S.C. = O(1) 
void heapify(vector<int> &v, int i, int n){

    while(2*i+1 < n || 2*i+2 < n){

        int leftChild = 2*i + 1; 
        int rightChild = 2*i + 2; 
        int largest = i; 

        if(leftChild < n && v[leftChild] > v[i]){
            largest = leftChild; 
        }
        if(rightChild < n && v[rightChild] > v[largest]){
            largest = rightChild; 
        }

        if(largest != i){
            swap(v[largest], v[i]); 
            i = largest; 
        }
        else{
            break; 
        } 
    } 
}


// T.C. = O(n) 
// S.C. = O(1) 
void buildHeap(vector<int> &v){

    int i = 0; 
    int n = v.size(); 

    for(int i = (n/2)-1; i >= 0; i--){
        heapify(v, i, n); 
    }

}


// T.C. = O(n) + O(n * log(n)) = O(n *  log(n)) 
// S.C. = O(1) 
void heapSort(vector<int> &v){

    buildHeap(v); 

    int n = v.size(); 
    for(int i=n-1; i >= 0; i--){
        int temp = v[0]; 
        v[0] = v[i]; 
        heapify(v, 0, i); 
        v[i] = temp;
    }

}


void visulaizeHeap(const vector<int> &v){

    cout << endl; 
    cout << "Visualizing Heap: " << endl; 

    int i = 0; 
    int n = v.size(); 

    int level = -1;

    while(i < n){

        level++; 
        int levelSize = pow(2, level); 

        for(int j=0; i < n && j < levelSize; i++, j++){
            cout << v[i] << " "; 
        }

        cout << endl;
    }

    cout << endl;

}


int main(){

    vector<int> v{100, 50, 50, 100, 60, 80, 90, 20, 20, 20, 70, 30, 100, 40, 10, 5000}; 

    heapSort(v);

    cout << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl; 

    return 0; 
}