#include<stdio.h>
void main()
{
int n,i,j,bubble[10],temp;
clrscr();
printf("\nEnter total no. of elements: ");
scanf("%d",&n);
printf("\nEnter elements: ");
for(i=0;i<n;++i)
	scanf("%d",&bubble[i]);
//main algo for bubble sorting
for(i=0;i<n-1;++i)
{
	for(j=0;j<n-i-1;++j)
	{
	if(bubble[j]>bubble[j+1])
	{
	temp = bubble[j+1];
	bubble[j+1] = bubble[j];
	bubble[j] = temp;
	}
	}
}
printf("\nDisplaying value of bubble sort algo: ");
for(i=0;i<n;++i)
	printf("%d ",bubble[i]);

getch();
}
