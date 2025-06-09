#include <iostream>
#include <vector>
using namespace std;
int average(int *arr, int size);
void addTwoDimArrays(vector<vector<int>> &arr1, vector<vector<int>> &arr2);
void printMatrix(const vector<vector<int>>& arr);
int main(){
    const int SIZE=10;
    int arr[SIZE]={1,56,73,2,46,-732,9,51,-5,0};
    //cout<<average(arr,SIZE);
    //----------------------------
    vector<vector<int>> vec1={{1,2,3,4,5},{2,3,4,10,5}};
    vector<vector<int>> vec2={{1,2,3,4,5},{2,3,4,10,5}};
    addTwoDimArrays(vec1,vec2);
    printMatrix(vec1);
}
int average(int *arr, int size){
    int avg=0;
    for(int i=0;i<size;i++){
        avg+=arr[i];
    }
    avg=avg/size;
    //C(N)
    //cout<<"Average: "<<avg<<endl;
    return avg;
}
void addTwoDimArrays(vector<vector<int>> &arr1, vector<vector<int>> &arr2){
    //assume vectors are the same size
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr1[i].size();j++){
            arr1[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //C(n^2)
}
void printMatrix(const vector<vector<int>>& arr) {
    for (const auto& row : arr) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    //C(n^2)
}
