#include <iostream>

using namespace std;

int find(int arr[], int len, int key){
    for(int i = 0; i < len; i++){
        if(arr[i] == key){
            return i;

        }
    }

    return -1;
}


int main(){
    int arr[20] = {4, 19, 10, 12, 16, 7, 9, 11, 5, 3, 2, 1, 17, 18, 14, 13, 8, 20, 15, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    int key = 8;
    int result = find(arr, len, key);
    if(result != -1){
        cout << "\nFound the element " << key << " at index " << result << " in the array" << endl;

    }
    else{
        cout << "\nElement not in array" << endl;

    }

}