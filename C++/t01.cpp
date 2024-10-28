//this is header file
#include <iostream>  //this lib used for taking input and give output to console
using namespace std; //std is dictionary for vector cout cin...works as keywords

// :: this is scope resolution operator
int main(){

    int a;
    cin>>a;
    cout<<a;
    return 0;
}

// arr of heap allocated and stack allocated
// delete:  does not wastes any memory
// sizeof(anything) gives byte size eg a= 12 sizeof(a) =  4
// long : memory in min equal to INT . is dynamic , makes according to size
// long long : it creates the size fully and then starts operation(static)

// signed: deafult(31 bits)
// unsigned: 0 to 20 range....but we can write pow(2,32)



/*call by reference abd pass by value*/

int a = 10;
int main(){
    int a = 90;
    cout<<"Local Variable----"<<a<<endl;
    cout<<"global variable----"<<::a<<endl;
}


// call by reference
int main(){
    int a = 10;
    int& b = a;   //&:empercent symbol used to refer the variable a , it prints the address of the variable
    return 0;
}

// const: in c++ keyword works as static keyword in java

// * : deference of operator

int a = 3;
int* b = &a; //b is just a ptr which stores the address of a(not the value of a)
// &a means address of a