
# include <stdio.h>  
  
int  main(void)  
{  
    int x, y, num1, num2, temp;  
      
    printf("������������������\n");  
    scanf("%d %d", &num1, &num2);  
if(num1 < num2)  
    {  
        temp = num1;  
        num1 = num2;  
        num2 = temp;  
    }  
    x = num1;  
    y = num2;  
    while(y != 0)  
    {  
        temp = x%y;  
        x = y;  
        y = temp;  
    }  
printf("���ǵ����Լ��Ϊ��%d\n", x);  
    printf("���ǵ���С������Ϊ��%d\n", num1*num2/x);  
      
    return 0;  
}  
