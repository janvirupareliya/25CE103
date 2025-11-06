#include<stdio.h>
int main()
{
    float arr[5];
    float max=0;
    float *p=arr;
    int valid;

    printf("enter your price item : ");
    for(int i=0; i<5; i++)
    {
        valid=scanf("%f",p);
        if(valid!=1)
        {
            printf("ERROR: enter valid price\n");
            return 0;
        }
        else
            p++;
    }
    float *p1=arr+1;
    for(p=arr; p<arr+5; p++)
    {
        for(p1=arr+1; p1<arr+5; p1++)
        {
            if(*p>*p1)
            {
                max=*p;
                *p=*p1;
                *p1=max;
            }
        }



    }
    for(p=arr; p<arr+5; p++)
    {
        printf("%f",*p);
    }
    return 0;
}
