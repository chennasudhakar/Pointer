#include<stdio.h>

int main(void)
{
int i,class[6],sum=0;
printf("enter 6 numbers\n");

for(i=0;i<6;i++)
{
scanf("%d",(class+i));
sum+=*(class+i);
}
printf("sum=%d\n",sum);
return 0;
}

