/*
1. Given an array of string, find the longest common prefix of all element.
 ________________________________________________
| Input: abc abd abf                             |
| Output: ab                                     |
|________________________________________________|
*/

void sort(char a[100][100], int n)
{
	char temp[100];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(a[i], a[j]) > 0)
			{
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}
        }
}

void ex1(char str[100][100],int n){
		char result[100];
		char a[100][100];
		for(int i=0;i<n;i++)
		{
			strcpy(a[i],str[i]);
		}
		sort(a, n);
		for (int i = 0; i < strlen(a[0]); i++)
		{
			if (a[0][i] == a[n - 1][i])
			{
				result[i] = a[0][i];
			}
			else
			{
				break;
			}
		}
	puts(result);
	
}
int main(int argc, char *argv[]) {
	
	char str[100][100]={"abc","abcd","abe","abdr"};
	ex1(str,4);
			
	return 0;
}

