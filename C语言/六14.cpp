#include<stdio.h>
int main()
{
        char str1[80],str2[80];
        int i=0,r;
        puts("input string1:");
        gets(str1);
        puts("input string2:");
        gets(str2);
       
        while((str1[i]==str2[i])&&(str1[i]!='\0')) //���������Ӧ�ַ���ȣ������ַ�����û�н�������i++�������ж���һ���ַ���
                                                   //����ֻҪ�����ַ�����ȣ����������ַ����Ѿ����������ٽ�����һ���ַ����жϡ�
        {
            i++;      
        }
        if(str1[i]=='\0'&&str2[i]=='\0')    //���ͬʱ�����������
        {
            r=0;
        }
        else
        {
            r=str1[i]-str2[i];
        }
        printf("result:%d.\n",r);

    return 0;
}