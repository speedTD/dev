#include <stdio.h>
#include <conio.h>
main()
{

	int n,i,gt;
do
{

gt=1;
	printf("\nnhap vao gia tri cho n=");	
	scanf("%d",&n);

			
	 for (i=1;i<=n;i++)
	
	  gt=gt*i;
	  
	printf("gia tri giai thua la =%d ",gt);
}
while (n!=0);
	getch();
	
	
}
