#include<stdio.h>

void fun(int *p) 
{ 
  int q = 10; 
 p=&q; 
printf("*p=%d\t%p\n",*p,p); 

}     
   
int main() 
{ 
  int r = 20; 
  int *p = &r;
printf("*p=%d\t%p\n",*p,p); 
  fun(p); 
printf("*p=%d\t%p\n",*p,p); 
  printf("%d", *p); 
  return 0; 
}
