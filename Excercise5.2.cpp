#include<stdio.h>
int main()
{
     int r;
     float volume_sphere;
     
	 printf("Enter radius : ");
     scanf("%d",&r);
     
	 volume_sphere = (4/3.0)*3.14*r*r*r;
     
	 printf("\nVolume of sphere = %f",volume_sphere);
     return 0;
}
