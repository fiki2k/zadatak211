// Program treba izracunat kamatnu stopu.

#include <stdio.h>
#include <math.h>
 
int main()
{
    float osnova, stopa, godina, kamata;
     
    printf("Unesi osnovu : ");
    scanf("%f", &osnova);
     
    printf("Unesi stopu : ");
    scanf("%f", &stopa);    
     
    printf("Unesi vrijeme u godinama : ");
    scanf("%f", &godina);
 
 
    kamata=osnova*((pow((1+stopa/100),godina)-1));
     
    printf("Kamtna stopa je : %f\n",kamata);
         
    return 0;
}
