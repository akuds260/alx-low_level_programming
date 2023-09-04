#include "main.h"
/**
*read_textfile -Reads a textfile and prints the contents to the POSIX STDOUT`:
*@filename: The name of the file to read from
*@letters: The number of characters that should be displayed on the screen.
*Return: Returns the number of characters printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fild = 0, check = 0;
char *buffer;
if (!filename || !letters)
return (0);
fild = open(filename, O_RDONLY);
if (fild < 0)
return (0);
buffer = malloc(sizeof(char) * (letters));
if (!buffer)
return (0);
check = read(fild, buffer, letters);
check = write(STDOUT_FILENO, buffer, check);
if (check < 0)
return (0);
close(fild);
free(buffer);
return (check);
}
