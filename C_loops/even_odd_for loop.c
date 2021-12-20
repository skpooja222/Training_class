#include<stdio.h>
int main()
{
  int i=1,n,even=0,odd=0;
   printf("Enter the Ending value:\n");
   scanf("%d",&n);
   printf("Even numbers:\n");
   while(i<=n)
   {
      if(i%2==0)
      {
        printf("\n%d",i);
        even++;
      }
      i++;
   
   }
   printf("Odd numbers:\n");
   i=1;
   while(i<=n)
   {
     if(i%2==1)
     {
        printf("%d\n",i);
        odd++;
     }
     i++;
   }
   printf("Total even numbers:%d\n",even);
   printf("TOtal odd numbers:%d\n",odd);
   return 0;
}


