#include <stdio.h>
//#include <string.h>
//#include <math.h>
#include <stdlib.h>

int CalSum(int arr[],int iLength)
{
    int iSum=0;
    int i=0;
    
    for (int i; i<iLength; i++)
    {
        iSum=iSum+arr[i];
    }
    
    return iSum;
}


int main() {
    int n=0,iRet=0;
    
    scanf("%d",&n);
    
    int *ptr=NULL;
    
    ptr=(int*)malloc(sizeof(int)*n);
    
    for (int i=0; i<n; i++)
    {
        scanf("%d ",&ptr[i]);
    }
    
    iRet= CalSum(ptr,n);
    
    printf("%d",iRet);
    
    free(ptr);   
   
    return 0;
}
