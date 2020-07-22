#include <stdio.h>

float baseVal;
int expVal;
float answer;

float expCalc(float base, int exp);

int main() {

    //Variable Inputs
    printf("Enter the base value: ");
    scanf(" %f", &baseVal);
    //check
    if (baseVal <= 0){
        printf("Invalid input. Positive values for the base only.");
        return(0);
    }

    printf("\nEnter the exponent: ");
    scanf(" %i", &expVal);
    //check
    if (expVal < 0){
        printf("Invalid input. Non negative values for the exponent only. \n");
        return(0);
    }

    //Final Output
    answer = expCalc(baseVal, expVal);
    printf("\nThe answer is: %f \n", answer);

    return 0;
}
//Exponent Calculator Function
float expCalc(float base, int exp){

    //base case
    if(exp == 0){
        return(1);
    }
    //even exponent
    if (exp % 2 == 0){
        return(expCalc(base, exp/2) * expCalc(base, exp/2));
    }
    //odd exponent
    else{
        return ( expCalc(base,(exp-1)/2) * expCalc(base, (exp-1)/2) * base);
    }

}