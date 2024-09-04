#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUFFER_LEN 1024

/*
 * readline() reads an entire line from stream and stores at most one less than
 * size characters into the buffer pointed to by buffer.
 * A terminating null byte ('\0') is stored after the last character in the
 * buffer.
 *
 * On success, readline() returns the number of characters read, excluding the
 * terminating null byte ('\0').
 *
 * The function returns -1 on failure to read a line (including end-of-file
 * condition).
 */
static ssize_t readline(char *buffer, size_t size, FILE *stream)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	ssize_t ncopied = -1;

	nread = getline(&line, &len, stream);
	if (nread != -1) {
		// copy at most size - 1 bytes
		ncopied = nread < (ssize_t)size - 1 ? nread : (ssize_t)size - 1;
		memcpy(buffer, line, ncopied);
		// terminating null byte
		buffer[size] = '\0';
	}
	free(line);

	return ncopied;
}

int main() {
    char buffer[BUFFER_LEN];
    int counts[256] = {0};

    printf("Entrez une chaine quelconque : ");
    scanf("%s", buffer);

    int length = strlen(buffer);

    if (length == -1) {
        fprintf(stderr, "Erreur de lecture\n");
        return 1;
    }

    for (int i = 0; i < length; i++) {
        counts[buffer[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            printf("%c(0x%02x): %d\n", i, i, counts[i]);
        }
    }

    return EXIT_SUCCESS;
}