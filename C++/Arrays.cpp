#include <iostream>
using namespace std;

/*for max and min values in c++
int min = INT_MIN
int max = INT_MAX */

// to find max and min elements
int main(){
    int arr[5] = {3,5,6,10,-3};
    int mn = INT_MAX;
    int mx = INT_MIN;

    for(int i=0;i<5;i++){

        // built in functions min and max 
        mn = min(mn , arr[i]); 
        mx = max(mx , arr[i]);
    }

    cout<<mn<<" " << mx;
    return 0;
}


int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Dynamically sized array using n (only allowed in C++ with Variable Length Arrays, supported by some compilers)

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input elements of the array
    }

    // Finding the size of the array
    int sz = sizeof(arr) / sizeof(arr[0]); // Use sizeof to determine the number of elements

    cout << "The array elements are: " << endl;
    for (int i = 0; i < sz; i++) { // Use a traditional for loop to iterate through the array
        cout << arr[i] << endl;
    }

    return 0;
}
