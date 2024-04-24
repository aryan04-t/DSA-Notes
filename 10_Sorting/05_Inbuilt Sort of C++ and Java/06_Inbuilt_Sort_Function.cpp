#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;


int main(){
    
    vector<int> v{5, 9, 8, 3, 7, 2, 10, 4, 6, 1, 0}; 

    cout << endl;
    cout << "Array before sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;

    sort(v.begin(), v.end()); 

    cout << "Array after sorting: " << endl; 
    for(int val : v){
        cout << val << " ";
    }
    cout << endl << endl;
    
    return 0;
}



/*


# You can even sort the array using inbuilt sort: 





*/