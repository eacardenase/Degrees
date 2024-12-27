//
//  main.c
//  Degrees
//
//  Created by Edwin Cardenas on 12/27/24.
//

#include <stdio.h>
#include <stdlib.h>

float fahrenheitFromCelsius(float cel)
{
    float fahr = cel * 1.8 + 32.0;
    
    printf("%f Celsius is %f Farenheit\n", cel, fahr);
    
    return  fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    
    return EXIT_SUCCESS;
}
