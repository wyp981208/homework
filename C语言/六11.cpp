#include <stdio.h>  
int main()  
{  
    int i,j;  
    for(i=0;i<5;i++)  
    {     
        for(j=0;j<i;j++)//���ƿո�  
             printf("  ");    
  
        for(j=0;j<5;j++)//�������5��'*'  
            printf("* ");//�������'*'��' '  
      
        printf("\n");  
    }  
    return 0;  
}  