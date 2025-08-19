#include<stdio.h>
int main()
{
  double tp=1441981744,tw,tm,tl,tlw,tlm,ti,tiw,tim;
  tw=(48.4*1441981744)/100;
  tm=tp-tw;
  tl=(85.95*1441981744)/100;
  tlm=(80.95*tm)/100;
  tlw=tl-tlm;
  ti=1441981744-tl;
  tiw=tw-tlw;
  tim=tm-tlm;
  printf("total population is %lf\n" ,tp);
  printf("total women is %lf\n",tw);
  printf("total man is %lf\n",tm);
  printf("total literate people is %lf\n",tl);
  printf("total literate men is %lf\n",tlm);
  printf("total literate women is %lf\n",tlw);
  printf("total illiterate people is %lf\n",ti);
  printf("total illiterate women is %lf\n",tiw);
  printf("total illiterate men is %lf\n",tim);
  return 0;



}
