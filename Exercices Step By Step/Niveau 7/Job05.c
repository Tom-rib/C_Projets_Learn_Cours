#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *path;

	path = getenv("PATH");
    
	if (path != NULL)
		printf("La chaîne d'environnement \"PATH\" est: %s\n", path);

	else
		printf("La variable PATH n'existe pas\n");

	return (0);
}