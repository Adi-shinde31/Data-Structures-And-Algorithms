#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    int minIndex = 0;
    int j;
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
        
        j = minIndex - 1;
        int dindex = minIndex;
        int temp;

        while (j>=0)
        {          
            if (arr[dindex] < arr[j]) {
                temp = arr[j];
                arr[j] = arr[dindex];
                arr[dindex] = temp;
            }
            dindex--;   
            j--;
        }
    }  
}

int main(){
    int arr[5] ={-5,2,-54,0,24};
    int size = 5;

    insertionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}