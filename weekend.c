#include <stdio.h>
  void main()
  {
      int cigars,weekend;
      printf("enter the numbers of cigars:\n");
      scanf("%d",&cigars);
      printf("enter 0 for not weekend 1 for weekend\n");
      scanf("%d",&weekend);
      if(weekend)
      {
          if(cigars>=40)
          {
              printf("success");
          }
          else 
          {
              printf("fail");
          }
      }
          else
          {
              if(cigars>=40&&cigars<=60)
              {
                  printf("success");
              }
              else
              {
                  printf("fail");
              }
          }
      }
