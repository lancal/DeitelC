//
// Created by Alan  on 8/9/17.
//

#include <stdio.h>

int main (){

    double weightInKG,heightIntMts,BMI;

    printf("Please Enter weight in KG:\n");
    scanf("%lf", &weightInKG);

    printf("Please Enter height in Mts:\n");
    scanf("%lf",&heightIntMts);


    BMI = weightInKG / (heightIntMts * heightIntMts);

    printf("BMI Values\n");

    printf("BMI = %f\n",BMI);

    if(BMI < 18.5){ printf("Underweight: less than 18.5" ); };

    if(BMI >= 18.5 && BMI <= 24.9){ printf("Normal: between 18.5 and 24.9"); };

    if(BMI >= 25 && BMI <= 29.9){ printf("Overweight: between 25 and 29.9"); };

    if(BMI >= 30){printf("Obese: 30 or greater"); };

    return 0;
}