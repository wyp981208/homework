#include<stdio.h> 

main() 
{ 
float a, x1, x2; 
printf("������Ҫ����������"); 
scanf("%f", &a); 
if (a==0) 
printf("0��ƽ����Ϊ��0"); 
else 
{ 
x1=x2=a; 
do 
{ 
x1=x2*0.6666666F+a/(x2*x2*3); 
x2=x1*0.6666666F+a/(x1*x1*3); 
//x1=(x2+a/x2)/2; //��ƽ������ 
//x2=(x1+a/x1)/2; //��ƽ������ 
}while (x2-x1>=1e-5 || x1-x2>=1e-5); 
printf("%f��ƽ����Ϊ��%f", a, x2); 
} 
}