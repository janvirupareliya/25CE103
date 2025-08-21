#include<stdio.h>
int main()
{
    float amount,discount,tamount;
    printf("enter shopping amount:  ");
    scanf("%f", &amount);
    if(amount>0)
    {

        if(amount<1000)
        {
            printf("no discount is applied");
        }
        else if(amount>1000&&amount<5000)
        {
            discount=(10*amount) /100;
            printf("you are eligible for 10%% discount \n");
            printf("the discount price is %f\n",discount);
            tamount=amount-discount;
            printf("the total amount is %f",tamount);



        }
        else if(amount>5000)
        {
            discount=(20*amount) /100;
            printf("you are eligible for 20%% discount \n");
            printf("the discount price is %f\n",discount);
            tamount=amount-discount;
            printf("the total amount is %f",tamount);

        }

        else if(amount<0)
        {
            printf("your amount is invalid");

        }

        return 0;

    }

}






























