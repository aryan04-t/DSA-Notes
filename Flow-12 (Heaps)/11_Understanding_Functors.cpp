/*

# Functors: 

- A functor is a concept in C++ that refers to objects that can be treated as if they were functions. 
- The term "functor" is derived from "function" and "operator". 
- Functors are instances of classes or structs that override the operator() method, allowing them to be called as if they were functions. 

*/


// Code Example of Functors: 


#include<iostream>
using namespace std; 

class MyFunctor{
    public: 

        void operator()(int x) const {
            cout << "Functor called with value: " << x << std::endl;
        }
};

int main() {

    MyFunctor functor;
    functor(10);                    // Call the functor as if it were a function
    
    return 0;
}
