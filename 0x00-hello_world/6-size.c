#include <stdio.h>
#include <libc6-dev-i386.h>
/**
 * main - Entry point
 * Description: print sizes of types
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("size of a char %lu byte(s)\n", sizeof(char));
printf("size of an int %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
