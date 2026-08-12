#include<stdio.h>
void handleArithmetic();

int main() {
    handleArithmetic();
    return 0;
}

void handleArithmetic() {
    double a,b,result;
        int choice;
        printf("\nEnter Numbers\n");
        scanf("%lf %lf",&a,&b);
        printf("Enter 1 for Addition\n");
        printf("Enter 2 for Subtraction\n");
        printf("Enter 3 for Multiplication\n");
        printf("Enter 4 for Division\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            result=a+b;
            printf("Addition Is= %.2lf\n",result);
            break;
            case 2:
            result=a-b;
            printf("Subraction Is= %.2lf\n  ",result);
            break;
            case 3:
            result=a*b;
            printf("Multiplication Is= %.2lf\n",result);
            break;
            case 4:
            if (b == 0) {
                printf("Error: Division by zero is undefined!\n");
            } else {
                result = a / b;
                printf("Division Is = %lf\n", result);
            }
            break;
            default:
            printf("Invalid Option Selected\n");
            break;
        }
}