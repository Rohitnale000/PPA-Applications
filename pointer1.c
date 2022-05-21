#include<stdio.h>
int main()
{
	int no=10;

	int *p= &no;

	printf("%d\n",no);  //10

	printf("%d\n",&no); // 100

	printf("%d\n",&p); // 200

	printf("%d\n",p); //100

	printf("%d\n",*p); //10

	printf("%d\n",sizeof(no)); //4

	printf("%d\n",sizeof(p)); //8

	printf("%d\n",sizeof(*p)); //4

	printf("\n***********************************\n");


	float f= 10.11;

	float *pf = &f;

	printf("%f\n",(*pf)); 

	printf("%f\n",f);

	printf("%d\n",&f);

	printf("%d\n",pf);

	printf("%d\n",&pf);

	printf("%d\n",sizeof(f));

	printf("%d\n",sizeof(*pf));

	printf("%d\n",sizeof(pf));

	 
	printf("\n***********************************\n");


	 char ch = 'M';

	 char *pc = &ch;



	 printf("%c\n",ch);

	 printf("%c\n",*pc);

	 printf("%d\n", &ch );

	 printf("%d\n",&pc);

	 printf("%d\n",&(*pc));

	 printf("%d\n",pc);

	 printf("%c\n",sizeof(*pc));

	 printf("%d\n",sizeof(ch) );

	printf("%d\n",sizeof(&pc));

	printf("%d\n", sizeof(&ch));

	return 0;
}