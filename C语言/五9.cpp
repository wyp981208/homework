#include<stdio.h>

int main()

{int i,j,s;

 for(i=2;i<=1000;i++)

 {s=1;

  for(j=2;j<=i/2;j++)

 if(i%j==0)s+=j;

  if(s==i)

  {   printf("%d its factors are 1 ",i);

 for(j=2;j<=i/2;j++)

 if(i%j==0)printf("%d ",j);

 printf("\n");

  }

 }

return 0;

}