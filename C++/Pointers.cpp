#include <iostream>
using namespace std;

int main(){
    // Pointers are used to store address
    // * we are using the to create a pointer...
    int a = 10;

    int* ptr = &a;  //ptr is storing the address of a

    // ptr to ptr:
    int** ptr1 = &ptr; //storing the address of parent ptr
    return 0;
}

// * dereference variable used to get the value stored in the address

int main(){
    int* ptr = NULL; //does not point to any location
    // baiscally used for linkedlist and tree when we are creating from scratch

    return 0;
}

