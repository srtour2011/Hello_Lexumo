#include<stdio.h>
int main(void)
{
   double pounds;

   printf("\n\tHello World,\n\tLet's do something useful like convert US lbs to kg and Stone");
   printf("\n\tType Ctl-C or 0 to exit");
   printf("\n\n\tWeight in pounds?: ");
   scanf("%lf",&pounds);

   /* Loop until user signals halt with negatie integer.  */
   while(pounds>0)
   {
   printf("\t\t\t   kg = %.2f \t Stone = %f", pounds*0.45359237, pounds/14);
   printf("\n\tWeight in pounds? ");
   scanf("%lf",&pounds);
   }
exit:   return 1;
}
