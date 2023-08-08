#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: z- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ph;
	ssize_t ty;
	ssize_t z;
	ssize_t t;

	ty = open(filename, O_RDONLY);
	if (ty == -1)
		return (0);
	ph = malloc(sizeof(char) * letters);
	t = read(ty, ph, letters);
	z = write(STDOUT_FILENO, ph, t);
	free(ph);
	close(ty);
	return (z);
}
