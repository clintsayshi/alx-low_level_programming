#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: alphabet in lowercase except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int counter = 0;
	int length_letters = sizeof(letters) / sizeof(char);

	while (counter < length_letters - 1)
	{
		if (letters[counter] == 'q' || letters[counter] == 'e')
		{
			//
		}
		else
		{
			putchar(letters[counter]);
		}
		counter = counter + 1;
	}
	putchar('\n');
	return (0);
}
