#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double small;
    double large;
    double medium;
    int amount;
    
    
    
    
    
    const double TAX = 0.13;
    const char patSize = 'S';
    
    printf("Set Shirt Prices\n");
    printf("================\n");
    
    printf("Enter the price for a SMALL shirt = $ ");
    scanf("%lf", &small);
    printf("Enter the price for a MEDIUM shirt = $ ");
    scanf("%lf", &medium);
    printf("Enter the price for a LARGE shirt = $ ");
    scanf("%lf", &large);
    
  
  

    printf("\n\nShirt Store Price List\n");
    printf("======================\n");
    printf("\nSMALL : %lf", small);
    printf("\nMEDIUM : %lf", medium);
    printf("\nLARGE %lf", large);
    printf("\nNumber of shirts Patty is buying : ");
    scanf("%d", &amount);

    printf("\npatty's shopping cart...\n");
    printf("contains : %d shirts", amount);
    printf("\nSub-total: %lf", small*amount);
    printf("\nTaxes: %lf", small*amount*TAX);
    printf("\nTotal: %lf\n", small*amount*TAX+(small*amount));





    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

