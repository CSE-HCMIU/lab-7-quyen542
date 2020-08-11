/*
2. Remove duplicate elements from an array and return the new length.
Do not create any temporary array
Ex:
 _________________________________________
| Input: [ab, ac, ab, bc]                 |
| Output: 3                               |
|_________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000
void re(char str[100][100], int vt, int *n)
{
	int i;
	int x=*n;
	for (i = vt; i < x -1; i++)
	{
	      strcpy(str[i],str[i+1]);
	}
	*n=x-1;
}

void ex2(char str[100][100],int n){
        int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])==0)
			{
				re(str,j,&n);
				j--;
			}
		}
	}
	printf("%d",n);
}

int main(int argc, char *argv[]) {
	
	char str[100][100]={"ab","abcd","ab","abdr"};
    ex2(str,4);
		
	return 0;
}
