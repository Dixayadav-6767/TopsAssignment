#include<stdio.h>
int main() {
    int math, phy, chem, subtotal, total;

    printf("\n Enter the math, physics and chemistry marks: ");
    scanf("%d %d %d", &math, &phy, &chem);

    if(math >= 65 && phy >= 55 && chem >= 50) {
        subtotal = math + phy;
        total = math + phy + chem;

        if(subtotal >= 140 || total >= 190) {
            printf("\n eligible");
        } else {
            printf("\n inner not eligible");
        }
    } else {
        printf("\n not eligible");
    }

    return 0;
}

