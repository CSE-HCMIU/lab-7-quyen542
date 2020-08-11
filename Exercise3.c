/*
3. Input 2 complex numbers using string then return a string
that represent the product of those two. Result should use string.
Complex number has the form of a+bi (i2 = -1, b can be negative or positive)
Ex:
 __________________________________________________________
| Input: 3+2i 3+2i                                         |
| Output: 5+12i                                            |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000
void number(int *a, int *b, char c[])
{
	int a1,b1;
	a1=b1=0;

	int sa = 0, sb = 0, i = 0;
	if (c[0] == '-')
	{
		sa = 1;
		i++;
	}
	while (c[i] >= 48 && c[i] <= 57)
	{
		a1 = a1* 10 + (c[i] - '0');
		i++;
	}
	if (c[i] == '-')
	{
		sb = 1;
		i++;
	}
	else if (c[i] == '+')
	{
		sb = 0;
		i++;
	}
	while (c[i] >= 48 && c[i] <= 57)
	{
		if (c[i] == 'i')
		{
			break;
		}
		b1 = b1 * 10 + (c[i] - '0');
		i++;
	}
	if (sa == 1)
	{
		a1 = a1 * (-1);
	}
	if (sb == 1)
	{
		b1 = b1 * (-1);
	}
	*a=a1;
	*b=b1;
}
void ex3(char s1[], char s2[]){
	char  result[100], temp1[100], temp2[100];
	int a, b, a1, b1;
	number(&a, &b, s1);
	number(&a1, &b1, s2);
	int m = a * a1 - b * b1;
	int n = a * b1 + a1 * b;
	sprintf(temp1,"%d",m);
	sprintf(temp2,"%d",n);
	strcpy(result,temp1);
	if (n > 0)
	{
		result[strlen(result)]='+';
		result[strlen(result)]='\0';
		strcat(result,temp2);
		result[strlen(result)]='i';
	}
	else
	{
		strcat(result,temp2);
		result[strlen(result)]='i';

	}
	 printf("%s",result);
}

int main(int argc, char *argv[]) {
	char n1[] = "1+9i";
    char n2[] = "8+7i";
    ex3(n1,n2);
		
	return 0;
}
