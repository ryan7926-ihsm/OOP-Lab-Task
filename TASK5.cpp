#include <iostream>
using namespace std;

int* resizeArray(int *arr, int &capacity);  

int main() {
    int capacity = 5;   
    int *arr = new int[capacity];
    int size = 0;       // number of elements actually stored
	cout << "Enter integers (enter -1 to stop):" << endl;
    while (true) {
        int num;
        cin >> num;
		if (num == -1) break; 
		// If array is full, resize
        if (size == capacity) {
            arr = resizeArray(arr, capacity);
        }
		arr[size] = num;
        size++; }
	cout << "You entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";  }
    cout << endl;
	delete[] arr;
	return 0;
}
int* resizeArray(int *arr, int &capacity) {
    // Double the capacity
    int newCapacity = capacity * 2;
    int *newArr = new int[newCapacity];
	for (int i = 0; i < capacity; i++) {   // Copy old data into new array
        newArr[i] = arr[i];
    }
	delete[] arr;
	capacity = newCapacity;
    return newArr;
}