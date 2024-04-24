/*


# Bianry Insertion Sort: 


1. Well "Binary Insertion Sort" is just a modified version of "Insertion Sort". 

2. In "Insertion Sort" we performed linear search for finding the correct insertable position of our current element, and while performing this linear search we also shifted the elements along the way and like this we had the best complexity of insertion sort to be at least O(n) instead of O(n^2). 

3. But in "Binary Insertion Sort" you basically use binary search to find the index where the current element should be inserted in the left side sorted array, and then you perform shifting from the current element's index-1 till the position where the element has to be inserted, and then you insert the element. 

4. Due to using binary search in insertion sort we have reduced the number of comparisons needed to insert an element from O(N) to O(log N), but still this isn't an improvement from time complexity's perspective if we see it from the perspective for normal datatypes, because for shifting the elements you still have to perform the O(n) time complexity shifiting operations. 

5. But due to the use of binary search in insertion sort the best case time complexity of "Binary Insertion Sort" is O(n * log(n)) which is a downgrade from "Insertion Sort's" best case time complexity. 

6. But "Binary Insertion Sort" isn't that useless, it's still a valid algorithm that can be useful in certain situations, particularly when the overhead of comparisons is high as compared to the cost of shifting elements. 

7. Binary insertion sort is a prime example of trade-off, we talk about "time-space trade off" in Data Structures and Algorithms, here we traded the best case time complexity of "Insertion Sort" so that we can have a specialized sort for complex datatypes where the comparison is more costly operation than shifting them. 

8. That's why "Binary Insertion Sort" may offer better performance than "Insertion Sort" in scenarios where comparison operations are more costly than element shifting operations. 


*/ 



#include<iostream>
#include<vector>
#include<utility> 
using namespace std;


// T.C. = O(log(n) to the base 2) 
// S.C. = O(1) 
int binarySearchFindGreaterElement(vector<int> &v, int start, int end, int val){

    while(start <= end){
        
        int mid = start + (end - start)/2; 

        if(v[mid] > val){
            if(mid-1 == -1){
                return 0; 
            }
            else{
                if(v[mid-1] <= val){
                    return mid; 
                }
                else{
                    end = mid - 1;
                }
            }
        }
        else if(v[mid] <= val) start = mid + 1; 
    }

    return -1; 
}


// T.C. = O( (n * (log(n) + (n-1))) / 2 ) = O(n^2) 
// Here, the best case time complexity of binary insertion sort is O(n*log(n)), average and worst case time complexity is O(n^2) even for binary insertion sort 

// S.C. = O(1) 
void insertion_sort(vector<int> &v){

    int n = v.size(); 

    for(int i=1; i < n; i++){
        
        int val = v[i];
        int pos = binarySearchFindGreaterElement(v, 0, i-1, val); 
        
        if(pos == -1) continue; 
        
        int j = i-1;
        while(j >= pos){
            if(val < v[j]){
                v[j+1] = v[j]; 
            }
            else{
                break;
            }
            j--;
        }
        v[pos] = val; 
    }

}

/* 

# T.C. = O( (n * (log(n) + (n-1))) / 2 ) = O(n^2) 
     Best Case     |    Average Case   |    Worst Case   | 
   O(n * log(n))   |       O(n^2)      |      O(n^2)     | 

# S.C. = O(1) 
     Best Case    |    Average Case   |    Worst Case   | 
       O(1)       |       O(1)        |      O(1)       | 

Here, n = the total number of elements which are present inside the input vector named "nums" 

*/ 


int main(){
    
    vector<int> v{5, 9, 8, 3, 7, 2, 2, 3, 3, 3, 10, 4, 6, 1, 0, 0}; 

    cout << endl;
    cout << "Array before sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;

    insertion_sort(v); 

    cout << "Array after sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;
    
    return 0;
}