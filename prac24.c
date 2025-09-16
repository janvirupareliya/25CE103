#include<stdio.h>
int main()
{

    int i=0,j,len = 0;
    char notes[10], rev[10];
    printf("enter your sentence: ");
    gets(notes);

    for(i=0; notes[i]!= '\0'; i++)
    {
        len++;
    }
    printf("\nlength of the given sentence is: %d ",len);
    for(i = len-1,j=0; i>=0; i--, j++)
    {
        rev[j]= notes[i];
    }
    rev[j]='\0';
    printf("\nthe reverse string is: ");
    puts(rev);

    int result=0;
    int cmp[10];
    printf("enter sentence for compare: ");
    gets(cmp);
    i=0;

    while(notes[i]!= '\0'&&cmp[i]!= '\0')
    {


        if(notes[i]!=cmp[i])
        {
            result = notes[i] - cmp[i];
            break;
        }
        i++;
    }

    if(result==0)
    {
        result = notes[i] - cmp[i];
    }

    if(result==0)
    {
        printf("both string are same\n");
    }
    else
    {
        printf("both strng are not same\n");
    }








    return 0;

















}
