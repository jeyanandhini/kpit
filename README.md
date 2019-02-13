# kpit
#include <stdio.h>
#include<stdlib.h>

 int month(int,int);
    int main(){
                  int year,x,y,z, value;
                  scanf("%d",&year);
                  x = ((year-1)%400) / 100;
                  y = (((year-1)%400) % 100) / 4;
                  z = (((year-1)%400) % 100) - (((year-1)%400) % 100) / 4;
                  value = (x*5+y*2+z+1) % 7;
                  printf("%d\n",year);
                  
                  printf("\n\nJanuary  %d\n\n",year);
                  value=month(31,value);
                 
                  printf("\n\nFebruary  %d\n\n",year);
                  if((year)%4==0 && (year)%100==0 && (year)%400==0)
                  value=month(29,value);
                  else
                  value=month(28,value);
               
                  printf("\n\nMarch  %d\n\n",year);
                  value=month(31,value);
                  
                  printf("\n\nApril  %d\n\n",year);
                  value=month(30,value);
                
                  printf("\n\nMay  %d\n\n",year);
                  value=month(31,value);
                 
                  printf("\n\nJune  %d\n\n",year);
                  value=month(30,value);
                  
                  printf("\n\nJuly  %d\n\n",year);
                  value=month(31,value);
                  
                   printf("\n\nAugust  %d\n\n",year);
                  value=month(31,value);
                  
                   printf("\n\nSeptember  %d\n\n",year);
                   value=month(30,value);
                   
                   printf("\n\nOctober  %d\n\n",year);
                   value=month(31,value);
                   
                   printf("\n\nNovember  %d\n\n",year);
                   value=month(30,value);
                   
                   printf("\n\nDecember  %d\n\n",year);
                   value=month(31,value);
   
     }
int month(int r,int s)
     {
                   int a,b,c;
                   printf("\n Sunnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn Mon Tue Wed Thu Fri Sat\n");
                   for(a=0;a<=s;a++)
                   if(a>=s)
                   {
                   for(b=1;b<=r;b++)
                   {
                    if((a % 7) == 0)
                    printf("\n");
                    printf("%4d",b);
                    a++;
                    }
                    }
                    else
                    printf("  ");
                    c=(r+s)%7;
    return(c);
    }
                 
