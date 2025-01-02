#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    int temp=0;
    for(int itr = 0; itr < size - 1; itr++){
        int minIndex = itr;

        for (int i = itr + 1; i <= size - 1; i++)
        {
            if (arr[i] < arr[minIndex])
            {
                minIndex = i;
            }
        }

        temp = arr[minIndex];
        arr[minIndex] =  arr[itr];
        arr[itr] = temp;

    }
}

int main(){
    int arr[5] = {6,3,-8,56,-1};
    int size = 5;

    selectionSort(arr,size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}