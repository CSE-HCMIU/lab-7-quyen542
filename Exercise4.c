/*
4. Input 2 binary number using string then return the sum of those two.
Result should use string.
Ex:
 __________________________________________________________
| Input: 111  11                                           |
| Output: 1010                                             |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define SIZE 1000

int b2d(int n)
{
	int dec = 0;
	int i = 0;
	while (n > 0)
	{
		dec = dec + (n % 10) * pow(2, i);
		i++;
		n = n / 10;
	}
	return dec;
}
int d2b(int n)
{
	int bin = 0;
	int i = 0;
	while (n > 0)
	{
		bin = bin + (n % 2) * pow(10, i);
		i++;
		n = n / 2;
	}
	return bin;
}
void ex4(char s1[], char s2[]){
    int result;
	int num1 = atol(s1);
	int num2 = atol(s2);
	int a = b2d(num1);
	int b = b2d(num2);
	int c = a + b;
	result = d2b(c);
	printf("%d",result);
}

int main(int argc, char *argv[]) {
	char n1[] = "111";
    char n2[] = "1111";
    ex4(n1,n2);
		
	return 0;
}
