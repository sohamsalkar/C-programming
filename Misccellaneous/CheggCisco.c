#include <stdio.h>
#include <string.h>
struct CompInfo
{
    char name[20];
    int itemID;
    float price, tax, total;
};
void showInfo(struct CompInfo newComp);
void computeTotal(struct CompInfo *pntNewComp, float taxRate);
int main()
{

    struct CompInfo purchaseCisco;

    strcpy(purchaseCisco.name, "Cisco");
    purchaseCisco.itemID = 23;
    purchaseCisco.price = 1250.00;
    purchaseCisco.tax = 0.0;
    purchaseCisco.total = 0.0;

    printf("purchaseCisco itemId: %d\n", purchaseCisco.itemID);
    printf("purchaseCisco name: %s\n\n", purchaseCisco.name);

    purchaseCisco.price = 2034.00;

    showInfo(purchaseCisco);

    computeTotal(&purchaseCisco, 0.06f);

    showInfo(purchaseCisco);

    return 0;
}

void showInfo(struct CompInfo newComp)
{
    printf("newComp name: %s\n", newComp.name);
    printf("newComp itemId: %d\n", newComp.itemID);
    printf("newComp price: %f\n", newComp.price);
    printf("newComp tax: %f\n", newComp.tax);
    printf("newComp total: %f\n\n", newComp.total);
}

void computeTotal(struct CompInfo *pntNewComp, float taxRate)
{
    pntNewComp->tax = taxRate * pntNewComp->price;
    pntNewComp->total = pntNewComp->price + pntNewComp->tax;
}