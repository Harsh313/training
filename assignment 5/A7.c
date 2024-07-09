#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    int caseType;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    
    discriminant = b*b - 4*a*c;

    
    if (discriminant > 0) {
        caseType = 1;
    } else if (discriminant == 0) {
        caseType = 2;
    } else {
        caseType = 3;
    }

    
    switch (caseType) {
        case 1: 
            root1 = (-b + sqrt(discriminant)) / (2*a);
            root2 = (-b - sqrt(discriminant)) / (2*a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;

        case 2: 
            root1 = -b / (2*a);
            printf("Roots are real and same.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
            break;

        case 3: 
            realPart = -b / (2*a);
            imaginaryPart = sqrt(-discriminant) / (2*a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
            break;

        default:
            printf("Unexpected error.\n");
    }

    return 0;
}

