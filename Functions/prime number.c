#include<stdio.h>
 
int is_prime(int num);
 
int main()
{
   int num, res;
 
   printf("Enter number to check whether it is prime or not.\n");
   scanf("%d",&n);
 
   res = is_prime(num);
 
   if ( res == 1 )
      printf("%d is prime.\n", num);
return 1;
   else
      printf("%d is not prime.\n", num);
 
   return 0;
}