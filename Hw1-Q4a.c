#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size);

int main(void) {
    int homeValue, size, popularity;
    
    printf("Please enter popularity\n");
    scanf("%d", &popularity);
    
    printf("Please enter home size\n");
    scanf("%d", &size);
    
    homeValue = computeHomeValue(popularity, size);
    
    printf("Satın almak istediğiniz evin tahmini değeri \n %d", homeValue);
} 

int computeHomeValue(int popularity, int size) {
    int homeValue;
    homeValue = 10000 * ((pow(size, 2) + (pow(popularity, 3))));
    return(homeValue);
}