#include<stdio.h>
int main(void)
{
    //����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
    char ch;
    int char_num=0,kongge_num=0,int_num=0,other_num=0;
    while((ch=getchar())!='\n')//�س����������룬���һس���������
    {
        if(ch>='a'&&ch<='z'||ch<='z'&&ch>='a')
        {
            char_num++;
        }
        else if(ch==' ')
        {
            kongge_num++;
        }
        else if(ch>='0'&&ch<='9')
        {
            int_num++;
        }
        else
        {
            other_num++;
        }
    }
    printf("��ĸ= %d,�ո�= %d,����= %d,����= %d\n",char_num,kongge_num,int_num,other_num);
    return 0;
}