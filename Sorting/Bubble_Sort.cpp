#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    int temp = 0; 
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}
int main(){
    int arr[4] = {5,3,9,0};
    int size = 4;

    bubbleSort(arr, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}