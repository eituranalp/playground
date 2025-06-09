#include <iostream>
using namespace std;
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void printArray(int arr[], int size);
int main(){
    int values[8] = {20, 13, 4, 2, 6, 11, 0, 56};
    cout << "Original array: ";
    printArray(values, 8);
    mergeSort(values,0,7);  //right is size-1
    cout << "Using merge sort: ";
    printArray(values, 8);
}
void mergeSort(int arr[], int left, int right){
    //left is starting index, right is ending index
    if(left<right){
        int mid =(left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
void merge(int arr[], int left, int mid, int right){
    int n1= mid - left + 1;
    int n2= right - mid;

    int* leftArr = new int[n1];
    int* rightArr = new int[n2];

    for(int i=0; i<n1; i++){
        leftArr[i]=arr[left+i];
    }
    for(int i=0; i<n2; i++){
        rightArr[i]=arr[mid+i+1];
    }

    int i=0;
    int j=0;
    int k=left;

    //merge the two temp arrays back
    while(i<n1 && j<n2){
        if(leftArr[i]<=rightArr[j]){
            arr[k]=leftArr[i];
            i++;
        }else{
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    //copy remaining elements of left and right arrays
    while(i<n1){
        arr[k]=leftArr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=rightArr[j];
        j++;
        k++;
    }
    delete[] leftArr;
    delete[] rightArr;
}
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}