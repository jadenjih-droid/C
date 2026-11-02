#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    double small;
    double large;
    double medium;
    int pattyamount;
    double pattysubtotal = small*pattyamount;
    double pattytax = pattysubtotal*TAX;
    double pattytotal = pattytax+pattysubtotal;
    
    

    const char patsize = 'S';
    
    

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
    printf("\nNumber of shirts Patty is buying :");
    scanf("%d", &pattyamount);

    //printf("\npatty's shopping cart...\n");
    //printf("contains : %d shirts", amount);
    //printf("\nSub-total: %lf", small*amount);
    //printf("\nTaxes: %lf", small*amount*TAX);
    //printf("\nTotal: %lf\n", small*amount*TAX+(small*amount));
    
    printf("customer size price QTY    sub-total tax      total\n");
    printf("patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf \n", patsize, small, pattyamount, pattysubtotal, pattytax, pattytotal );
    





    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

