#include <stdio.h>


void printarray(int arr[], int size, char *s)
{
  printf("%s ",s);
  for(int i = 0; i<=size; i++)
  {
    printf("%d,",arr[i]);
  }
  printf(" size: %d\n",size);
}


int main(void) {
  int arr[8]={5,4,8,2,6,9,1,3};
  int size = sizeof(arr)/sizeof(arr[0]);

  for(int i = 0; i<size; i++)
  {
    for(int j = i; j<size; j++ )
    {
      if(arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
      } 
    }
  }
  printarray(arr, size-1, "Sorted array:");

  return 0;
}