#include <stdio.h>
int main(void) {
int n,i,s=0;
printf("Enter number:");
scanf("%d",&n);
while(n>0)
{
s=n%10;
n=n/10;
printf("%d",s);	
}
	return 0;
}
