#include<stdio.h>

int main(){

int arr[] = {11,4,6,8,9,1};
int l = sizeof(arr);
for (int i = 0 ; i < l ; i++){
  for(int j = i+1 ; j < l ; j++){
    if(arr[i]>arr[j]){
     int temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp ;
     }
  }
  
}
for (int i = 0; i<l ; i++){
  printf("%d",arr[i]);
} 
return 0;
}
