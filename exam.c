#include<stdio.h>
int main(){
int x,p,disc,fin=0,m;
scanf("%d%d",&x,&p);
while(x!=0)
{disc=x*(p/100);
m=x-disc;
//fin=fin+m;
x=x-m;
fin=fin+m+x;}
printf("%d",fin); return 0;
}
