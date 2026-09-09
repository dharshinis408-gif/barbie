#include<stdio.h>
void main(){
int p1[20],p2[20],sum[20];
int n1,n2,max,i;
printf("Enter highest degree of first polynomial:");
scanf("%d",&n1);
printf("Enter coefficients of first polynomial:\n");
for(i=n1;i>=0;i--){
printf("Coefficient of X^%d:",i);
scanf("%d",&p1[i]);
}
printf("Enter highest degree of second polynomial:");
scanf("%d",&n2);
printf("Enter coefficient of second polynomial:\n");
for(i=n2;i>=0;i--){
printf("Coefficient of X^%d:",i);
scanf("%d",&p2[i]);
}
max = (n1>n2)?n1:n2;
for(i=0;i<=max;i++){
if(i>n1)
p1[i]=0;
if(i>n2)
p2[i]=0;
}
for(i=0;i<=max;i++)
sum[i]=p1[i]+p2[i];
printf("\nResultant Polynomial:\n");
for(i=max;i>=0;i--){
printf("%dX^%d",sum[i],i);
if(i!=0)
printf("+");
}
printf("\n");
}