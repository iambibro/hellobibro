

//May 21, 2009, 4:16 pm
//How to create C program for the Russian Peasant Multiplication Algorithm using for loops ,,, ??

//Check out my program below ,,, which doesn't multiply right upon execution ,,, !

#include<stdio.h>

int main ()
      {
       int val_1,val_2,lesser,greater,result=0;
       printf("Russian Peasant Multiplication Algorithm\n");
       printf("\nEnter multiplier:");
       scanf("%d",&val_1);
       printf("\nEnter multiplicand:");
       scanf("%d",&val_2);
       greater=((lesser=val_1<val_2?val_1:val_2)==val_1)?val_2:val_1;
       for (lesser;lesser/=2;greater*=2)
           {
             result+=lesser%2?greater:0;
                }
 				printf("%d\n",result);
				printf("\nI am Bibro!\n");
				return 0;
 }
