include "shell.h"

/**
 * main - entry point
 * @ca: count arg
 * @va: vector arg
 *
 * Return: 0 on success, 1 on error
 */

int main(int ca, char **va)
{
	char *prompt = "(Type here) $ ";
	size_t promptlen = 0;

	write(STDIO_FILENO, prompt, 12);

	getline(&prompt, &promptlen, stdin);
	write(STDIO_FILENO, prompt, strlen(promptlen));

	return (0);
}
