The only way (afaik) in OFP scripts to custom data structure is make good use of array.
# Data Structure
1st element is the array that stores data.  
2nd element stores information about current circular buffer
## information
+ begin index
    + indicate the start position where data stroed
+ size
    + indacate the size of current circular buffer
+ *mutex variable*   
    + work for concurrent flow
    + otherwise you have to operate circular buffer serially
## concepts
+ capacity
    + count of 1st element array
## interface
+ push_back
    + if size < capacity, write element and increase size
    + define a new array with enlarged capacity, and move elements
+ pop_front
    + ensure size >= 1
    + move begin index
    + decrease size
+ pop_back
    + ensure size >= 1
    + decrease size
+ at
    + ensure legal input
    + return element, or objNull