#include<stdio.h>
int main()
{
  int i;
  for(i=1;i<=50;i++)
  {
    if(i%5==0)
    {
      printf("book ID:%d (special edition)\n");
      continue;
    }
    else
    {
    printf("book ID:%d\n",i);
    }

  }

return 0;
}
