#include<stdio.h>
int main()
{

	int a = 10;

	char ch ='M';

	int arr[7];

	float b = 12.12;

	double c ;

	long double d;

	printf("Size of a is :%u\n",&a);

	printf("size of M is :%u\n",&ch);

	printf("size of arr is :%u\n",&arr);

	printf("Size of b is :%u\n",&b);

	printf("Size of C is :%u\n",&c);

	printf("Size of D is :%u\n",&d);

	printf("Size of a is :%d\n",sizeof(a));

	printf("size of M is :%d\n",sizeof(ch));

	printf("size of arr is :%d\n",sizeof(arr));

	printf("Size of b is :%d\n",sizeof(b));

	printf("Size of C is :%d\n",sizeof(c));

	printf("Size of D is :%d\n",sizeof(d));

	return 0;

}