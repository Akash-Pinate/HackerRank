#include <stdio.h>
#include<stdlib.h>


void Update(int *a,int *b) 
{       
    int iValue1=0;   //used to storing values 
    int iValue2=0;
    
    //filters
    
    //1 method  ->ternary operator
    //(*a)=(*a)<0? -1*(*a):(*a);
    //(*b)=(*b)<0? -1*(*b):(*b);
    
    //2 method  ->whenever we use abs built in function we need to use <stdlib.h>                   header file
    //*a=abs(*a);
    //*b=abs(*b);
    
    //3 method  ->multiply the negative values with -1 then the value converted                     into positive
    if ((*a)<0)
    {
        *a=-1*(*a);
    }
    
    if ((*b)<0)
    {
        *b=-1*(*b);
    }
    
    iValue1=((*a)+(*b));
    iValue2=((*b)-(*a));
    
    if (iValue1<0)
    {
        iValue1=(-1)*iValue1;
    }
    
    if(iValue2<0)
    {
        iValue2=(-1)*iValue2;
    }   
     
    *a=iValue1;
    *b=iValue2;
}

int main()
 {
    int a, b;
    int *p = &a;
    int *ptr = &b;
    
    scanf("%d %d", &a, &b);
    Update(&a, &b);
    
    printf("%d\n%d", a, b);

    return 0;
    
    
    
}
