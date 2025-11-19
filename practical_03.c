#include<stdio.h>
int main()
{
    float h,w,bmi;
    printf("Enter your height: (meter)\n");
    scanf("%f",&h);
    printf("Enter ypur weight: (kg)\n");
    scanf("%f",&w);
    bmi=w/(h*h);
    printf("your bmi is: %.2f\n",bmi);
    if(bmi<18.5)
       {
           printf("you are underweight\n\n");
       }
    else if(bmi>=18.5&& bmi<24.9)
        {
            printf("you are normalweight\n\n");
        }
    else if(bmi>=24.9&&bmi<29.9)
    {
        printf("you are overweight\n\n");
    }
     printf("submitted by JANVI RUPARELIYA\nID NO: 25CE103");
     return 0;


}
