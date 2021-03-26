#include<stdio.h>
#include<math.h>
#define feet 0.3048

int main()
{
    float weight,height,bmi,heightm;
    int gender;

    printf("If your are MALE (PRESS 0) or FEMALE (PRESS 1) : ");
    scanf("%d",&gender);

    if(gender == 0)
    {
        printf("<----MALE---->\n");

        printf("Enter your weight(in KG) :");
        scanf("%f",&weight);

        printf("Enter your height(in M) :");
        scanf("%f",&height);

        heightm = height * feet;

        bmi = ((weight)/(heightm*heightm));
        printf("YOUR BMI IS %f\n",bmi);

        if(bmi >= 25)
        {
            printf("You are OVERWEIGHT");
        }
        else if((bmi >= 18)&&(bmi <= 24))
        {
            printf("You are Healthy");
        }
        else
        {
            printf("You are UNDERWEIGHT");
        }

    }
    else if(gender == 1)
    {
        printf("<----FEMALE---->\n");

        printf("Enter your weight(in KG) :");
        scanf("%f",&weight);
        printf("Enter your height(in M) :");
        scanf("%f",&height);

        heightm = height * feet;

        bmi = ((weight)/(heightm*heightm));
        printf("YOUR BMI IS %f\n",bmi);

        if(bmi >= 30)
        {
            printf("You are OVERWEIGHT");
        }
        else if((bmi >= 18)&&(bmi <= 24))
        {
            printf("You are Healthy");
        }
        else
        {
            printf("You are UNDERWEIGHT");
        }

    }
    else{
        printf("Enter only 1 or 0");
    }
    return 0;

}
