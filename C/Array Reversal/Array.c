#include <stdio.h>
#include <stdlib.h>

void ReverseArr(int arr[],int n)
   {
      // for (int i=0; i<n; i++)
      // {
      //  printf("%d   ",arr[i]);
     //  }
       //printf("\n");

       for (int i=n-1; i>=0; i-- )
       {
           printf("%d ",arr[i]);
       }
       
   }



int main()
{
    int num=0; 
    int *ptr=NULL; 
    int i=0;
    
    scanf("%d", &num);
    
    ptr = (int*) malloc(num * sizeof(int));
    
    for(i = 0; i < num; i++) {
        scanf("%d", &ptr[i]);
    }

    ReverseArr(ptr,num);
    free(ptr);
    
}
