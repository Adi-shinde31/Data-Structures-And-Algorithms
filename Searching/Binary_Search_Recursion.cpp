#include <iostream>
using namespace std;

int bs(int arr[], int num, int low, int high){
    int mid = (low + high) / 2;
    
    if(arr[mid] == num)
        return 1;
    
    if(low == high)
        return 0;
        
    if(arr[mid] < num)
        return bs(arr, num, mid + 1, high);
    
    if(arr[mid] > num)
        return bs(arr, num, low, mid - 1);
    
    return -1;
}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int num = 6;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int low = 0;
    int high = size - 1;
    
    int flag = bs(arr, num, low, high);
  
    if(flag == 1)
        cout << "Number found";
    else 
        cout << "Number not found";  
    return 0;
}