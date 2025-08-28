#include<stdio.h>
int main()
{
 int s;
 printf("enter your countdown second:");
 scanf("%d",&s);
 if(s<0)
 {
   printf("invalid value\n");

 }
 while(s>=0)
 {
   sleep(1);
   printf("%d\n\a",s);
   s--;

 }
 printf("countdown complete");
 return 0;
}
