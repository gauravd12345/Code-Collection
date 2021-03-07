#include <iostream>

using namespace std;

void printArr(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";

    }
    cout << endl;


}

void bubblesort(int arr[], int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
               
        }
    }


}

int main(){
    int arr[20] = {4, 19, 10, 12, 16, 7, 9, 11, 5, 3, 2, 1, 17, 18, 14, 13, 8, 20, 15, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Unsorted Array
    cout << "\nUnsorted Array: ";
    printArr(arr, len);
    
    // Sorted Array
    bubblesort(arr, len);
    cout << "Sorted Array: ";
    printArr(arr, len);

}