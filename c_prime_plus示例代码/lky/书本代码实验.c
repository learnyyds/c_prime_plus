#include <stdio.h>

#if 0 
int main(void)
{
	int n,n2,n3;
	
	n = 5;
	n2 = n*n;
	n3 = n2*n;
	
	printf("n = %d,n squared = %d, n cubed = %d\n",n,n2,n3);
	
	return 0;	
} 
#endif


int main(void)
{
	float inch,cm;
	printf("请输入长度(单位英寸):");
	scanf("%f",&inch);
	cm = inch * 2.54;
	printf("等于 %0.2f 厘米",cm); 
	return 0;	
} 



