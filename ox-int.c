#include<stdio.h>
#include<stdlib.h>

    int integer;

int htoi(char s[])
{
    int i;
    int len;
    len = sizeof(s-1);
    for(;s[2]!='x' && s[2]!='X';)
        for(i=len;i<=len;i--)
        integer=16*s[i];
}

int main()
{
    int len;
    char s[len];
    len = sizeof(s-1);
    printf("输入要转换的数");
    scanf("%s",s);
    htoi(s);
    printf("%d",integer);
}
