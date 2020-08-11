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

void ex2(char str[100][100],int n){
	int x=n;
        for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])==0)
			{
				x--;
			}
		}
	}
	printf("%d",x);
}

int main(int argc, char *argv[]) {
	
	char str[100][100]={"ab","abcd","ab","abdr"};
    ex2(str,4);
		
	return 0;
}
