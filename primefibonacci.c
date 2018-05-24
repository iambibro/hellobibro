#include <stdio.h>
#include <conio.h>
void main ( )
{
long a,b,c,i,n,j;
printf ("\n Enter the number to print fibnocci prime number\t");
scanf ("%ld",&n);
a=0;
b=1;
for (i=1; i<n; i++)
{
c=a+b;
a=b;
b=c;
printf ("\n fibnoci series is %ld\t",c);
for(j=2;j<c;j++)
{
if(c%j==0)
break;
}
if(c==j)
printf(" prime number is %ld\t",c);
}
getch();
}
