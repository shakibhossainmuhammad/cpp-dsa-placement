#include <stdio.h>
      int main( )
      { 
            int n, i, j, k;
            printf("Enter Number:");
            scanf("%d", &n);
            for(i=1; i<=n; i++)
            {
                  for(j=0; j<n-i; j++)
                  {
                         printf(" ");
                   }
                for (j=1; j<=i; j++)
                  {
                       printf ("*");
                   }
                 for (k=1;k<i;k++)
                 {
                      printf("*");
                  } 
                      printf("\n");
            }
            for( i = n-1; i>=1; i--)
              {
                    for (j=0; j<n-i; j++)
                     {
                          printf(" ");
                      }
                      for(j=1; j<=i; j++)
                       {
                              printf("*");
                         }
                        for(k=1; k<i; k++)
                         {
                              printf("*");
                          }
                          printf("\n");
                       }
                     return 0;
                  }
