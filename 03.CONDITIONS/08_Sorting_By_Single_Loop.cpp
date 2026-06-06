#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 8, 1, 4};
    int n = 5;

    int i = 0;
    while (i < n - 1) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            i = 0;
        } else {
            i++;
        }
    }

    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";

    return 0;
}