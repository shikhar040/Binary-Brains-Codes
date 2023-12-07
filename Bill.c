#include <stdio.h>

int main() 
{
    float pencilCost, penCost, eraserCost, totalCost, gst;
    printf("Enter the cost of a pencil: ");
    scanf("%f", &pencilCost);
    printf("Enter the cost of a pen: ");
    scanf("%f", &penCost);
    printf("Enter the cost of an eraser: ");
    scanf("%f", &eraserCost);
    totalCost = pencilCost + penCost + eraserCost;
    gst = 0.18 * totalCost;
    totalCost += gst;
    printf("------- Bill -------\n");
    printf("Pencil Cost   : %.2f\n", pencilCost);
    printf("Pen Cost      : %.2f\n", penCost);
    printf("Eraser Cost   : %.2f\n", eraserCost);
    printf("--------------------\n");
    printf("Total Cost    : %.2f\n", totalCost);
    return 0;
}