#include<stdio.h>
int main()
{
	int a[3][4]={5,2,3,4,
				6,6,7,3,
				7,9,6,5},i,j,max,t,k,c;
	int flag=0;
	for(i=0;i<3;i++)
	{
		max=a[i][0];t=0;
		for(j=0;j<4;j++)
		{
			if(a[i][j]>max)
			{
			max=a[i][j];
			t=j;
			}
		}
	c=1;
	for(k=0;k<3;k++)
	{
		if(max>a[k][t])
		{
			c=0;break;
		}
	}
	if(c==1){printf("������%d",max);flag++;}
	}
if(flag==0)printf("û�а���");

return 0;
}