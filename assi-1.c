# include <stdio.h>
int main(){
  int n;
  printf("enter the number of element in array :-");
  scanf("%d",&n);
  
  int arr[n] ;
  int arrsum =0;
  printf("enter the elements :-");
  for ( int i = 0; i < n; i ++){
      scanf("%d", &arr[i]);
  
  }
  int sum = (n*(n+1))/2 ;
  printf("%d",sum);
  
  
  for ( int j = 0; j < n; j++){
   arrsum = arrsum + arr[j]; 
  }
  
  
  
  int missingele = sum - arrsum;
  printf("the missing element is :-");
  printf("%d", missingele);
  




  return 0;

}
