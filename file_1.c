#include <stdio.h>
int main()
{
  int num1, num2,sum;
printf("enter two integers:");
sacnf("%D %d", &num1,&num2);

//calculate the sum
sum= num1+num2;
printf("%d+%d=%d", num1,num2,sum);
return 0;
}
//Function added in branch1

int func_add(int a, int b)
{ 
	return a+b;

}

