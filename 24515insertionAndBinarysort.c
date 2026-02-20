#include<stdio.h>


int binarysearch(int arr[], int item, int low, int high){
    while(low <= high){
        int mid = low + (high - low )/2;
        if(arr[mid] == item)
            return mid+1;
        else if (arr[mid] < item)
            low = mid+1;
        else
            high = mid-1;

    }
    return low;
}



void insertionsort(int arr[], int n){
    for(int i = 0 ; i<n ; i++){
        int key = arr[i];
        int pos = binarysearch(arr,key,0,i-1);
        int j = i-1;
        while (j>=pos){
            arr[j+1] = arr[j];
            j--;
        }
        arr[pos] = key;
    }
}



int main()
{
    int arr [] = {7,5,6,9,8,3,1};
    int key = 2;
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,size);
    for(int i = 0; i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
