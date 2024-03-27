#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 27

char *generate_password(void)
{
	int i;

	char *password = malloc(PASSWORD_LENGTH + 1);
	if (password == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = '!' + (rand() % ('~' - '!'));
	}
	password[PASSWORD_LENGTH] = '\0';

	return password;
}
int main(void)
{
	char *password = generate_password();

	printf("%s\n", password);

	free(password);

	return 0;
}
