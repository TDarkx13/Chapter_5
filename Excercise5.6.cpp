#include <stdio.h>

int tot_min;
int hrs;
int min;

char line_text[50];

const int MINaHOUR = 60;

int main() {
	printf("Input minutes: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &tot_min);

	hrs = (tot_min / MINaHOUR);
	min = (tot_min % MINaHOUR);

	printf("%d Hours, %d Minutes.\n", hrs, min);

	return(0);
}
