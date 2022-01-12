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

#if 0 
int main(void)
{
	float inch,cm;
	printf("请输入长度(单位英寸):");
	scanf("%f",&inch);
	cm = inch * 2.54;
	printf("等于 %0.2f 厘米",cm); 
	return 0;	
} 
#endif

#if 0 
int main(void)
{
	printf("char:%d\r\n", sizeof(char));
	printf("short:%d\r\n", sizeof(short));
	printf("int:%d\r\n", sizeof(int));
	printf("float:%d\r\n", sizeof(float));
	printf("double:%d\r\n", sizeof(double));
	printf("long:%d\r\n", sizeof(long));
	printf("long long:%d\r\n", sizeof(long long));
	printf("long double:%d\r\n", sizeof(long double));

	printf("unsigned char:%d\r\n", sizeof(unsigned char));
	printf("unsigned short:%d\r\n", sizeof(unsigned short));
	printf("unsigned int:%d\r\n", sizeof(unsigned int));
	printf("unsigned long:%d\r\n", sizeof(unsigned long));
	printf("unsigned long long:%d\r\n", sizeof(unsigned long long));

	printf("void * :%d\r\n", sizeof(void *));
	printf("wchar_t:%d\r\n", sizeof(wchar_t));
	return 0;
}
#endif
 

int main(void)
{

    float a = 12.3;

//    printf("%x\n", a);
//    printf("%X\n", a);
//    printf("%#x\n", a);
//    printf("%#X\n", a);
//    printf("%o\n", a);
//	printf("%#o\n", a);
//	printf("%hu\n", a);
//	printf("%hhu\n", a);
	printf("%F\n",a);
    return 0;

}

