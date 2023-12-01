// Explain word travering 


// when initializing array with curly braces, empty places are initialized with 0, give size 10 an d{1,2,4} example also. 
// when you don't use curly braces and set manually few values, rest are garbage values. arr[i] = 10; and all
// when you want to initialize whole array with 0, you can use curly braces {0}. 


// Write why it is a bad practice and why we should not take input of array size in a int and why we should not initialize array like int[n]; if we want to create a dynamic array, we will learn right way of creating dynamic arrays ahead 

//  https://stackoverflow.com/questions/216259/is-there-a-max-array-length-limit-in-c


// Define terms like capacity and size of array 

// and why we cannot use sizeof() operator to know the total number of elements in array when array is not completely filled with elements, at this time the track of number of elements which are stored in array should pe kept explicitly and this number should also be passed to functions when an array of this type (which don't have all indexes filled) is being passed to that function 


// Disadvantages of Array 


// when you want to initialize whole array with -1 or 0 then you can use memset function. 

// memset can only be used to set chars, and int 0 and -1, because memset works byte by byte 

// Syntax of memset: 
