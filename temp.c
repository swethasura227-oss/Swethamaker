#include <stdio.h>
  void main()
  {
      int summer,temp;
      printf("enter the temp :\n");
      scanf("%d",&temp);
      printf("enter 0 for not summer 1 for summer\n");
      scanf("%d",&summer);
      if(summer)
      {
          if(temp>=60&&temp<=100)
          {
              printf("play");
          }
          else if(temp>=60&&temp<=90)
          {
             printf("play");
          }
          else
          {
              printf("not play");
          }
      }
  }