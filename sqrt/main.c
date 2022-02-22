#include <stdio.h>
#include <math.h>

int main()
{
    float a,i,t,p;
    int b;
    scanf("%f%d",&a,&b);
    for(i=0;i<b;i++)
    {
        t=sqrt(a);
        int p=t*100;
        a=(float)p/100;
    }
    printf("%.2f",t);
    return 0;
}
