#include <stdio.h>

int main (){
    float x;
    float y;
    printf("Enter a number:");
    scanf ("%f", &x); //Note change of %d to %f
    //Complete the y = line below
    y = (x+2)/(x-1);//Make sure that add/sub a variable to a number needs brackets
    //Always type a semi colon at the end of every line
    printf("y: %f\n", y);
    return 0;
}
