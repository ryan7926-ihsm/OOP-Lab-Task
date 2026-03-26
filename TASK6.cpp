#include<iostream>
using namespace std;
int maximizeSumWithKDistinct(int * arr, int size, int k);
int main(){
    cout<<"Input the size of Array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Input the elements of Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Input the number of integers to choose: ";
    int k;
    cin>>k;
    int result = maximizeSumWithKDistinct(arr, n, k);
    cout<<"the maximum sum of "<<k<<" distinct integers is: "<<result<<endl;
    return 0;
}
int maximizeSumWithKDistinct(int * arr, int size, int k){
    int sum[size]= {0};
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j+1]){
                sum[i] += arr[i];
                arr[j+1] = 0;    }    }
        arr[i] = 0;
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(sum[j]<sum[j+1]){
                int temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp;      }   }	}
    int maxSum = 0;
    for(int i=0;i<k;i++){
        maxSum += sum[i];   }
    return maxSum;
}