/* Function prototypes  */

/* putchar function */
int _putchar(int character);

/* function that takes a pointer to an int as parameter and updates the value it points to to 98 */
void reset_to_98(int *n);

/* function that swaps the values of two integers */
void swap_int(int *a, int *b);

/* function that returns the length of a string */
int _strlen(char *s);

/* function that prints a string, followed by a new line, to stdout */
void _puts(char *str);

/* function that prints a string, in reverse, followed by a new line */
void print_rev(char *s);

/* function that reverses a string */
void rev_string(char *s);

/* function that prints every other character of a string, starting with the first 
 * character, followed by a new line 
 */
void puts2(char *str);

/* function that prints half of a string, followed by a new line */
void puts_half(char *str);

/* function that prints n elements of an array of integers, followed by a new line */
void print_array(int *a, int n);

/* function that copies the string pointed to by src, including the terminating null 
 * byte (\0), to the buffer pointed to by dest
 */
char *_strcpy(char *dest, char *src);
