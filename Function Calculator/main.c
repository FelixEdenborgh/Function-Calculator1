#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Welcome to my function calculator!\n");

    int result, choose x, y;

    printf("Choose an operator 1: add, 2: sub, 3: multi, 4: div, 5: modelus");
    scanf("%d", &choose);

    while(1!=0){
        if(choose == 1){
            add(&x, &y);
            printf("x = %d, y = %d", x, y);
        }
        else if(choose == 2){
            sub(&x, &y);
            printf("x = %d, y = %d", num1, num2);
        }


    }








    int add(x, y){
        result = x + y;
        return result;
    }
    int sub(x, y){
        result = x - y;
        return result;
    }
    int multi(x, y){
        result = x * y;
        return result;
    }
    int div(x, y){
        result = x / y;
        return result;
    }
    int modelus(x, y){
        result = x % y;
        return result;
    }


    return 0;
}
