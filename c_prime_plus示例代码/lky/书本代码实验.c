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
	printf("�����볤��(��λӢ��):");
	scanf("%f",&inch);
	cm = inch * 2.54;
	printf("���� %0.2f ����",cm); 
	return 0;	
} 



