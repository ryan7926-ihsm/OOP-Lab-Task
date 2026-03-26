#include <iostream>
using namespace std;
int* sortArray(int arr[], int size); // function prototype

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
	int arr[100];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  }
	sortArray(arr, size);
	cout << "Sorted array (odds first, evens later): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "  ";  }
    cout << endl;
	return 0;
}
int* sortArray(int arr[], int size){
    for (int i = 0; i < size - 1; i++) {   // First sort the whole array normally (ascending)
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[i]) {
                swap(arr[i], arr[j]);   }    }   }   // Swaping  
	int tempArr[100];
    int k = 0;
	for (int i = 0; i < size; i++) {    // Copy odds
        if (arr[i] % 2 != 0) {
            tempArr[k++] = arr[i];    }  }
	for (int i = 0; i < size; i++) {  // Copy evens
        if (arr[i] % 2 == 0) {
            tempArr[k++] = arr[i];   }  }
   	for (int i = 0; i < size; i++) {  // Copy back into original array
        arr[i] = tempArr[i];
    }
	return arr;
}