#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;

}

int main() {
    int arr[] = {
        1,2,3,4,5,6,7,8,9,10
    };
    
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << linearSearch(arr, n, 5) << endl;


    return 0;
}