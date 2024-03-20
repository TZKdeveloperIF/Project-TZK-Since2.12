The only way (afaik) in OFP scripts to custom data structure is make good use of array.
# Data Structure
1st element is the array that stores data.  
2nd element is size. Vector is simple require no more informations.  

In OFP the "set" command will also resize the array if index is greater than its current size. This will lead to memory reallocation. "Vector" here is similar as in C++ that double its capacity every time to reduce reallocation.
## information
+ size
    + indacate the size of current circular buffer
+ *mutex variable*   
    + required if wish to operate vector concurrently
## concepts
+ capacity
    + count of 1st element array
## interface
+ push_back
    + if size < capacity, write element and increase size
    + define a new array with enlarged capacity, and move elements
+ pop_back
    + ensure size >= 1
    + decrease size
+ at
    + ensure legal input
    + return element, or objNull