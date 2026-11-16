#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    double small;
    double large;
    double medium;
    
    int pattyamount;
    double pattysubtotal;
    double pattytax;
    double pattytotal;
    
    int sallyamount;
    double sallysubtotal;
    double sallytax;
    double sallytotal;

    int tommyamount;
    double tommysubtotal;
    double tommytax;
    double tommytotal;

    double Asubtotal;
    double Atax;
    double Atotal;

    
    

    const char patsize = 'S';
    const char sallysize = 'M';
    const char tommysize = 'L';

    //coins
    double toonies = 2.0000;
    double loonies = 1.0000;
    double quarters = 0.2500;
    double dimes = 0.1000;
    double nickels = 0.0500;
    double pennies = 0.0100;

    //amount coins
    double Atoonies = 0.0000;


    
    
    

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
    printf("\nNumber of shirts Sally is buying :");
    scanf("%d", &sallyamount);
    printf("\nNumber of shirts Tommy is buying :");
    scanf("%d", &tommyamount);



    //printf("\npatty's shopping cart...\n");
    //printf("contains : %d shirts", amount);
    //printf("\nSub-total: %lf", small*amount);
    //printf("\nTaxes: %lf", small*amount*TAX);
    //printf("\nTotal: %lf\n", small*amount*TAX+(small*amount));

    pattysubtotal = small*pattyamount;
    pattytax = pattysubtotal*TAX;
    pattytotal = pattytax+pattysubtotal;

    sallysubtotal = medium*sallyamount;
    sallytax = sallysubtotal*TAX;
    sallytotal = sallytax+sallysubtotal;

    tommysubtotal = large*tommyamount;
    tommytax = tommysubtotal*TAX;
    tommytotal = tommytax+tommysubtotal;

    Asubtotal = pattysubtotal+sallysubtotal+tommysubtotal;
    Atax = pattytax+sallytax+tommytax;
    Atotal = pattytotal+sallytotal+tommytotal;

    



    
    printf("customer size price QTY    sub-total tax      total\n");
    printf("patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf \n", patsize, small, pattyamount, pattysubtotal, pattytax, pattytotal );
    printf("sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf \n", sallysize, medium, sallyamount, sallysubtotal, sallytax, sallytotal );
    printf("sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf \n", tommysize, large, tommyamount, tommysubtotal, tommytax, tommytotal );
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n", Asubtotal, Atax, Atotal);

    Asubtotal = Atoonies % toonies;
    
    printf("\nDaily retail sales represented by coins\n");
            printf("=======================================\n");
            printf("Sales EXCLUDING tax\n");
            printf("Coin     Qty   Balance\n");
            printf("-------- --- ---------\n");
            printf("             %lf\n", Asubtotal);
            printf("Toonies %lf", Atoonies);
            


    

          



   



    


    





    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

