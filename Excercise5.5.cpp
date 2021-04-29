#include <stdio.h>

int hrs;
int min; 
int tot_min;

char line_text[50];

const int MINaHOUR = 60;

int main() {
	printf("Input hours: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &hrs);

	printf("Input minutes: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%d", &min);

	tot_min = min + (hrs * MINaHOUR);

	printf("Total: %d minutes.\n", tot_min);

	return(0);
}
