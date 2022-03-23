#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <math.h>

int IMax(int iNo1,int iNo2,int iNo3,int iNo4)
    {
        
        //iNo1 is greater 
        if((iNo1>iNo2)&&(iNo1>iNo3)&&(iNo1>iNo4))
        {
            return iNo1;
        }
        
        //iNo2 is greater
        else if((iNo2>iNo1)&&(iNo2>iNo3)&&(iNo2>iNo4))
        {
            return iNo2;
        }
        
        //iNo3 is greater 
        else if((iNo3>iNo1)&&(iNo3>iNo2)&&(iNo3>iNo4))
        {
            return iNo3;
        }
        
        //iNO4 is greater
        else
        {
            return iNo4;
        }
                
    }
    

int main() 
{ 
    int iValue1=0,iValue2=0,iValue3=0,iValue4=0;
    
    int iRet=0;
    
    scanf("%d %d %d %d ",&iValue1,&iValue2,&iValue3,&iValue4);
    
    iRet=IMax(iValue1,iValue2,iValue3,iValue4);
    
    printf("%d",iRet);


    return 0;  //tells that compiler dead succesfully
}
