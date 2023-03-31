#include<stdio.h>
void add();                                               
int main()
{
  add();                                                  
  return 0;
}
void add()                                                
{
   int a,b,c;
   printf("\nEnter The Two values:");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("Addition:%d",c);
}
