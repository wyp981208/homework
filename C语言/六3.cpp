#include<stdio.h>  
  
int main() {  
    int a[3][3];  
    int i, j;  
    int sum;  
    for (i = 0; i < 3; i++)  
        for (j = 0; j < 3; j++)  
            scanf("%d", &a[i][j]);  
    for (i = 0; i < 3; i++)  
        for (j = 0; j < 3; j++)  
            if ((i == j) || (i + j == 2))  
                sum = sum + a[i][j];  
    printf("%d",sum);  
    return 0;  
}  