
#include <stdio.h>

int main(int argc, const char * argv[]) {
    double hips, waist, chest;
    int clothingType;
    double sizeTop[] = {30.5, 33, 35, 37.5, 40.5, 42, 45};
    double sizeBottom[] = {22.5, 24, 25, 26, 27, 28, 29.75, 31.5, 33.25, 35};
    int index = 0;
    
    printf("Please input your measurements in inches to get your customized mannequin and size.\n");

    printf("Chest: ");
    scanf("%lf", &chest);
    
    printf("Hips: ");
    scanf("%lf", &hips);
        
    printf("Waist: ");
    scanf("%lf", &waist);
    
    while (chest >= sizeTop[index] && index <= 6) {
        index++;
    }
    printf("Tops: ");
    switch (index) {
        case 0:
            printf("2XS");
            break;
        case 1:
            printf("XS");
            break;
        case 2:
            printf("S");
            break;
        case 3:
            printf("M");
            break;
        case 4:
            printf("L");
            break;
        case 5:
            printf("XL");
            break;
        default:
            printf("2XL");
            break;
    }
    printf("\nBottoms: ");
    index = 0;
    while (waist >= sizeBottom[index] && index <= 9) {
        index++;
    }
    switch (index) {
        case 0:
            printf("00");
            break;
        case 1:
            printf("0");
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("4");
            break;
        case 4:
            printf("6");
            break;
        case 5:
            printf("8");
            break;
        case 6:
            printf("10");
            break;
        case 7:
            printf("12");
            break;
        case 8:
            printf("14");
            break;
        default:
            printf("16");
            break;
    }
    
    printf("\nWhat are you looking for today? (1 Tops, 2 Bottoms, 3 Loungewear, 4 Casual, 5 Formal, 6 Winter, 7 Summer, 8 Fall, 9 Spring, 10 Activewear)");
    scanf("%d", &clothingType);
    
    printf("Here are your recommended outfits: ");
    
    return 0;
}
