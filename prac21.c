#include<stdio.h>
int main()
{
    int arr[24];
    int i=0,cp=0,cn=0,ce=0,co=0;
    for(i=0; i<25; i++)
    {
        printf("enter your integers arr[%d]: ",i);
        scanf("%d",&arr[i]);

        if(arr[i]>=0)
        {
            cp++;
        }
        else
        {
            cn++;
        }
        if(arr[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }

    }
    printf("positive integers is: %d\n",cp);
    printf("negative integers is: %d\n",cn);
    printf("odd integers is: %d\n",co);
    printf("even integers is: %d\n",ce);

}
