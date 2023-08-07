#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: n- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t n_read, n_written;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
n_read = read(fd, buffer, letters);
if (n_read == -1)
return (0);
n_written = write(STDOUT_FILENO, buffer, n_read);
if (n_written == -1 || n_written != n_read)
return (0);
close(fd);
free(buffer);
return (n_written);
}
