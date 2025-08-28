#include<stdio.h>
int main()
{
  int marks;
  printf("enter student marks:");
  scamnf("%d",&marks);
 if(marks>=90)
  {
     printf("grade A");
  }
 else if(marks>=80&& marks<90)
  {
     printf("grade B");
  }
 else if(marks>=70&&marks<80)
  {
     printf("grade C");
  }
 else if(marks>=60&&marks<70)
  {
     printf("grade D");
  }
 else if(marks<60)
  {
     printf("grade E");
  }

return 0;

}
