#include  <stdio.h>

main()
{
 char str[3][81];
 int upper,lower,digit,space,other;
 int i,j;
 upper=0;lower=0;digit=0;space=0;other=0;
 
 printf ("�����������ַ���\n");

 for (i=0;i<3;i++)
     gets(str[i]);

 for (i=0;i<3;i++)
 {
     for (j=0;j<80;j++)
     {
         if (str[i][j]>='A' && str[i][j]<='Z')
             upper++;
         else if (str[i][j]>='a' && str[i][j]<='z')
             lower++;
         else if (str[i][j]>='0' && str[i][j]<='9')
             digit++;
         else if (str[i][j]==' ')
             space++;
         else
             other++;
     }
 }
 printf("��д��ĸ��%d ��\n",upper);
 printf("Сд��ĸ��%d ��\n",lower);
 printf("�������֣�%d ��\n",digit);
 printf("�ա�����%d ��\n",space);
 printf("�䡡������%d ��\n",other);
}