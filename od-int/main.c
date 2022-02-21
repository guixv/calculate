#include<stdio.h>
#include<stdlib.h>

    int pint,cup,ounce,tablespoon,teaspoon;

int transfer(float inputer)
{
    float temp1,temp2;
    cup=(int)inputer;
    temp1=inputer-(float)cup;
    pint=(cup-(cup%2))/2;
    cup=cup-pint*2;
    temp2=temp1*8;
    ounce=(int)temp2;
    temp2=temp2-ounce;
    temp1=temp2*2;
    tablespoon=(int)temp1;
    temp2=temp1-tablespoon;
    temp1=temp2*3;
    teaspoon=(int)temp1;
return -1;
}



int main()
{
    float inputer;
    printf("input cups");
    scanf("%f",&inputer);
    transfer(inputer);
    printf("%d pints,%d cup,%d ounce,%d tablespoon,%d teaspoon",pint,cup,ounce,tablespoon,teaspoon);
return 0;
}
