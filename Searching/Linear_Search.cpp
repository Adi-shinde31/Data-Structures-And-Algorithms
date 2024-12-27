#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int size){
    for(int i = 0; i < size; i++){
        if (arr[i] == n)
            return i;
    }
    return -1;
        
}
int main(){
    int arr[4] = {3,87,2,4};
    int num = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int flag = linearSearch(arr, num, size);
    
    (flag == -1) ? cout << "Number doesnot exist!" : cout << "Number exist at postion " << flag;
    
    return 0;
}