#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int n, int size){
    int mid = 0;
    
    while (low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == n)
            return mid;

        if(arr[mid] < n){
            low = mid + 1;
        }

        if(arr[mid] > n){
            high = mid - 1;
        }

    }
    return -1;

}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int num = 8;
    int size = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = size - 1;
    
    int flag = binarySearch(arr,low,high,num,size);

    (flag == -1) ? cout << "\n\nNumber doesnot exist!" : cout << "\n\nNumber exist at postion " << flag;

    return 0;
}