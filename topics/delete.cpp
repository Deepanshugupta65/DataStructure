#include<bits/stdc++.h>
using namespace std;

void duplicate(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int temp = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                cout << arr[i] << endl;
                break;
            }
        }
    }
}

int main() {
    int arr[] = {3, 9, 18, 3, 28, 6, 17, 9, 3};
    int n = 9;
    duplicate(arr, n);

    return 0;
}
