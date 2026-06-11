// Find the Largest and Smallest Element in an Array
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 45, 5, 89, 23};
    int max = arr[0], min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "Largest element = " << max << endl;
    cout << "Smallest element = " << min << endl;
    return 0;
}

