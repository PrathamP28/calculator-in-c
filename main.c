/*🍃🍀*/
#include <stdio.h>

int main() {
    while (1)
    {
        double a,b;
        char v;
        printf("Enter Formula >");
        scanf("%lf %c %lf",&a,&v,&b);
        switch (v)
        {
        case '+':
            printf("%.2lf\n",a + b);
            break;
        case '-':
            printf("%.2lf\n",a - b);
            break;
        case '*':
            printf("%.2lf\n",a * b);
            break;
        case '/':
            printf("%.2lf\n",a / b);
            break;
        default:
            printf("errer");
            break;
        }
    }
    return 0;

}

/*written by Pratham 🍂🍁*/
