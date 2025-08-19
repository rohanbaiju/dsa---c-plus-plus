
/*If-Else

👉 Write a program to check if a number is:

Even or odd.

Positive, negative, or zero. */


#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d is greater than %d and %d\n",a,b,c);
    }
   else if(b>a && b>c)
   {
    printf("%d is greater than %d and %d\n",b,a,c);
   }
   else if(c>a && c>b)
   {
    printf("%d is greater than %d and %d\n",c,a,b);
   }

   if(a>0)
   {
    printf("%d is positive\n",a);
   }
   else if(a!=0)
   {
    printf("%d is negative\n",a);
   }
   else if(a==0)
   {
    printf("%d is zero\n",a);
   }

   if(b>0)
   {
    printf("%d is positive\n",b);
   }
   else if(b!=0)
   {
    printf("%d is negative\n",b);
   }
   else if(b==0)
   {
    printf("%d is zero\n",b);
   }


   
   if(c>0)
   {
    printf("%d is positive\n",c);
   }
   else if(c!=0)
   {
    printf("%d is negative\n",c);
   }
   else if(c==0)
   {
    printf("%d is zero\n",c);
   }

   

}