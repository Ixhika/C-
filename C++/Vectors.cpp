#include <iostream>
using namespace std;
#include <vector>

// for vectors we need to know about STL, Standard Template Library: toolbox where implemetation of DSA is already given
int main(){
    // vectors are dynamic allocation memory
    // capcity of vector i.e extra space created in vec, capacity is 2x of size
    
    vector<int> vec //size of 0;
    
    //without defining the size if we tyr to access the vector it will give us segmentation fault error which means we are trying to access a memory space which does not exist

    
    vector<int> vec = {1,2,4}; //defined elements

    vector<int> vec(3,0)   //first one denotes size of vector and 2nd is what value should be there in each index simply works as Arrays.fill(arr,0)

    // to get size of vec
    cout<<vec.size()<<endl;

    // to add elements
    vec.push_back(25); //adds element at the end of vector

    // to delete element
    vec.pop_back(); //lst indx val pops out

    // to view 1st element
    vec.front();
    
    // to view last
    vec.back();

    // to get any element at specifc index
    vec[i]   /*or*/   vec.at(i);

    return 0;
}

// why we use vector<int>& vec: because we want the values to be passed by their reference i.e it creates an alias i.e an alternate a name...
// Eg: gandadhar is shaktiman...like that