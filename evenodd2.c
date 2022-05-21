#include<stdio.h>
int demo();
 int main()
 {
 	int a=0;
 	 auto int b=0;

 	printf("Enter a number");

 	scanf("%d",&a);

 	b=demo(a);

 	if (b==1)
 	{
 		printf("even no");
 	}
 	else
 	{

 		printf("odd number");
 	}


 	return 0;
 }

int demo(int no)
{

register int output;

if (no%2==0)

{
	
	output=1;

}
else
{


	output=0;
}
 
 return output;


}