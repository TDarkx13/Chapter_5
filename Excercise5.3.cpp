#include <stdio.h>

char line[10];
float width;
float height;
float perimeter;

int main(void) {
  printf("Perimeter calculator for a rectangle (you can include decimals)\n"); 
  printf("Enter width: ");
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &width);
  
  printf("Enter height: ");
  fgets(line, sizeof(line),stdin);
  sscanf(line, "%f", &height);

  if (width==height) {
    printf("This is a square, not a rectangle\n");
  }

  else {
    perimeter = 2 * (height + width);
    printf("Your perimeter is: %f\n", perimeter);

  }
  return 0;
}
