#include <iostream>

using namespace std;

void printArr(int arr[], int len){
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";

    }
    cout << endl;


}

void selectionsort(int arr[], int len){
    for(int i = 0; i < len - 1; i++){
        int minIndex = i;
        for(int j = i; j < len; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;

            }
               
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;


    }


}

int main(){
    int arr[20] = {4, 19, 10, 12, 16, 7, 9, 11, 5, 3, 2, 1, 17, 18, 14, 13, 8, 20, 15, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Unsorted Array
    cout << "\nUnsorted Array: ";
    printArr(arr, len);
    
    // Sorted Array
    selectionsort(arr, len);
    cout << "Sorted Array: ";
    printArr(arr, len);

}