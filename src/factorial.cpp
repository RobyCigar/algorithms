#include "iostream"

int factorial(int num) 
{
	if (num == 0 || num == 1)
	{
		return 1;
	} else {
		return num * factorial(num - 1);
	}
}

int main(int argc, char const *argv[]) 
{
	printf("%d\n", factorial(4));
	return 0;
}