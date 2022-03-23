#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>

float Addition(float iValue1,float iValue2)
{
    float iRet=0;
    iRet=iValue1+iValue2;
    return iRet;
}

float Substraction(float iValue1,float iValue2)
{
    float iRet=0;
    iRet=iValue1-iValue2;
    return iRet;
}

int main()
{
	
    int iNo1=0,iNo2=0;
    
    float fNo1=0,fNo2=0;
    
    float fRet=0;
    
    int iRet=0;
    
    scanf("%d %d \n ",&iNo1,&iNo2);
    scanf("%f %f \n",&fNo1,&fNo2);
    
    iRet=Addition(iNo1,iNo2);
    printf("%d ",iRet);
    
    iRet=Substraction(iNo1,iNo2);
    printf("%d \n",iRet);
    
    
    fRet=Addition(fNo1,fNo2);
    printf("%.1f ",fRet);
    
    fRet=Substraction(fNo1,fNo2);
    printf("%.1f \n",fRet);
    
    return 0;
}
