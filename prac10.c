#include<stdio.h>
int main()
{
   int choice;
   int total = 0;

   printf("welcome to the foodies restaurant \n");
   printf("please select item from given menu: \n");


   while (1)
    {
      printf("\nmenu:\n");
      printf("1. burger - rs150\n");
      printf("2. pizza - rs200\n");
      printf("3. pasta - rs120\n");
      printf("4. sandwich - rs100\n");
      printf("5. french fries - rs80\n");
      printf("enter 0 to finish order\n");


      printf("\n enter your choice:  ");
      scanf("%d", &choice);


      switch (choice)
      {
        case 1:
              total = total + 150;
              printf("burger added to your order. subtotal: rs %d\n", total);
              break;

        case 2:
              total = total + 200;
              printf("pizza added to your order. subtotal: rs %d\n", total);
              break;

        case 3:
              total = total + 120;
              printf("pasta added to your order. subtotal: rs %d\n", total);
              break;

        case 4:
              total = total + 100;
              printf("sandwich added to your order. subtotal: rs %d\n", total);
              break;

        case 5:
              total = total + 80;
              printf("french fries added to your order. subtotal: rs %d\n", total);
              break;

        case 0:
              printf("\norder completed.\n");
              printf("total bill amount: rs %d\n", total);
              return 0;
        default:
              printf("invalid choice , please enter valid choice");
              break;

+



      }













    }





























}
