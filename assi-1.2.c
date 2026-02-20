#include<stdio.h>

int main(){
int arr[9] = {1,2,3,4,5,4,3,2,1};
int max ;
for (int i = 0; i < 9; i++)
{
  if (max < arr[i]){
  max = arr[i];
  }
  
  else{
  printf("the max number's index is %d ", i-1);
  break;
  }
}

}
