#include<stdio.h>

int main(void)
{

int *p;
int c;

c=22;

printf("ad of c=%u\n",&c);
printf("d of c=%d\n",c);

p=&c;

printf("ad of p=%u\n",p);
printf("d of p=%d\n",*p);

c=11;

printf("ad of c=%u\n",&c);
printf("d of c=%d\n",c);

*p=34;

printf("ad of c=%u\n",&c);
printf("d of c=%d\n",c);

printf("ad of p=%u\n",p);
printf("d of p=%d\n",*p);

return 0;
}
