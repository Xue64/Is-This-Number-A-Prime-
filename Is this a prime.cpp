#include <stdio.h>
#include <math.h>
#include <windows.h>

void gotoxy(short x, short y)
{ 
COORD pos = {x, y}; 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
} 

int isPrime (int n)
{
	if (n==0)
	{
		return 0;
	}
	int arr[100];
	int index = 0;
	for (int i=2; i<n; i++)
	{
		if (n%i==0){
			arr[index] = i;
			index++;
		}
	}
	if (index>0)
	{
		printf("The factors are: [");
		printf("1, ");
		for (int i=0; i<index; i++)
		{
			printf("%d, ", arr[i]);
		}
		printf("%d", n);
		printf("]\n");
		return 0;
	}
	return 1;
}

int main ()
{
	printf("Insert number: ");
	int n;
	scanf("%d", &n);
	if (isPrime(n))
	{
		printf("This is a prime number");
	}
	else 
	{
		printf("Not a prime");
	}
	printf("\n");
	printf("Do this process again? (Y/N): ");
	char verify;
	scanf(" %c", &verify);
	if (verify=='Y'||verify=='y')
	{
		gotoxy(0,0);
		for (int i=0; i<10; i++)
		{
			for (int i=0; i<45; i++)
			{
				printf(" ");
			}
		}
		gotoxy(0,0);
		main ();
	}
}
