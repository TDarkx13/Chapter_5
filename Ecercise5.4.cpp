#include <stdio.h>

char  line_text[50];
float kmph;
float mph;

int main()
{
	printf("Input kilometers per hour: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f", &kmph);

	mph = (kmph * 0.6213712);
	printf("%f miles per hour\n", mph);

	return(0);
}
