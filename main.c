

#include <stdio.h>

int main()
{
    double a,b;
    char c;
    double s;
    printf("Enter the operation to be done:\nA.Addition\nB.Subtraction\nC.Multiplication\nD.Division\n");
    scanf("%c",&c);
    switch(c){
        case 'A':
            printf("Enter two number with a space ");
            scanf("%lf %lf",&a,&b);
            s=a+b;
            printf("Sum=%0.2lf",s);
            break;
        case 'B':
            printf("Enter the number from whuch number has to subtracted ");
            scanf("%lf",&a);
            printf("Enter the number to be subtracted ");
            scanf("%lf",&b);
            s=a-b;
            printf("Difference:%0.2lf",s);
            break;
        case 'C':
            printf("Enter two numbers with a space ");
            scanf("%lf %lf",&a,&b);
            s=a*b;
            printf("Product=%0.2lf",s);
            break;
        case 'D':
            printf("Enter the number to be divided ");
            scanf("%lf",&a);
            printf("Enter the divisor ");
            scanf("%lf",&b);
            printf("%0.2lf",a/b);
            break;

    }

}
