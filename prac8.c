#include<stdio.h>
int main()
{
 int age;
 printf("enter your age:  ");
 scanf("%d", &age);

if(age>0)
{
   if(age>=18)
   {
     printf("eligible to open a saving account");
   }
   else
   {
     printf("not eligible to open a saving account");
   }

}
else
{
  printf("invalid age");

}

return 0;

}
