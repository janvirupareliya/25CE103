#include<stdio.h>
int main()
{
 int ch;
 float wamount, tbalance=5000;
 while(1)
 {
   printf("enter 1 for withdrawing , 2 for exit:");
   scanf("%d",&ch);
   switch(ch)
      {
       case 1:
         printf("enter amount you want to withdraw");
         scanf("%f",&wamount);
         if(wamount<=tbalance)
         {
           tbalance = tbalance-wamount;
           printf("remaining balance is %f\n",tbalance);

         }
         else
         {
           printf("you have insufficent balance\n");
           return 1;
         }
         break;
       case 2:
           return 1;
           break;
       default:
           printf("invalid choice\n");
           break;



      }


 }


}
