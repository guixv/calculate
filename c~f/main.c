 #include <stdio.h>
#include <stdlib.h>

int transfer(int celsius, int fahr);
int celsius, fahr;
int lowest, highest, step;




int main()
{

    lowest = -40;
    highest = 200;
    step = 10;
    celsius = lowest;
    printf("摄氏度转换为华氏度转化表\n");
    transfer(celsius,fahr);
/*
    double i,j;
    printf("输入想要转换的摄氏温度\n");
    scanf("%lf",&i);
    j = 9*i / 5 + 32;
    printf("%.2f\t%.2f\n",i,j);
*/
    return 0;
}

int transfer(int celsius, int fahr)
{

    lowest = -40;
    highest = 200;
    step = 10;
    while(celsius<=highest)
    {
        fahr = 9*celsius / 5 + 32;
        printf("%d\t%d\n",celsius,fahr);
        celsius= celsius + step;
    }
}
