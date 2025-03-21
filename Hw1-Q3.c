#include <stdio.h>
#include <math.h>

/* function main begins program execution */
int main(void) {
    double homeValue, homeSize, homePopularity;
    
    printf("Please enter popularity\n");
    scanf("%lf", &homePopularity);
    
    printf("Please enter home size\n");
    scanf("%lf", &homeSize);
    
    homeValue = 10000 * ((pow(homeSize, 2) + (pow(homePopularity, 3))));
    
    printf("Satın almak istediğiniz evin tahmini değeri \n %lf", homeValue);
}