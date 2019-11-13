#include<stdio.h>
void main()
{
int n,i,j,insertion[10],temp;
clrscr();
printf("\nEnter the total no. of elements: ");
scanf("%d",&n);
printf("\nEnter elements: ");
for(i=1;i<=n;++i)
	scanf("%d",&insertion[i]);
insertion[0]=0;
for(i=1;i<=n;++i)
{
	j=i-1;
	temp = insertion[i];
	while(temp<insertion[j])
	{
	insertion[j+1] = insertion[j];
	j--;
	}
	insertion[j+1] = temp;
}
printf("\nsorted array: ");
for(i=1;i<=n;++i)
	printf("%d ",insertion[i]);
getch();
}
