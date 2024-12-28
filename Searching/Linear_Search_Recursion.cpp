#include <iostream>
using namespace std;

int ls(int arr[], int num, int size, int itr){
    if(itr == size) return 0;
    
    if(arr[itr] == num) return 1;
    
    return ls(arr, num, size, ++itr);
}

int main()
{
    int arr[5] = {5,3,2,6,4};
    int num = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    int itr = 0;
    int flag = ls(arr, num, size, itr);
    
    if(flag == 1)
        cout << "Number found";
    else if(flag == 0)
        cout << "Number not found";

    return 0;
}