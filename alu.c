#include <stdio.h>

int main() {
    int a ,b, result;
    int pick;
    printf("enter the numbers;\n");
    scanf("%d %d",&a,&b);
    printf("1. Addition (a + b)\n");
    printf("2. Subtraction (a - b)\n");
    printf("3. AND (a & b)\n");
    printf("4. OR (a | b)\n");
    printf("5. XOR (a ^ b)\n");
    printf("6. NOT (~a)\n");
    printf("7. Left Shift (a << 1)\n");
    printf("8. Right Shift (a >> 1)\n");
    printf("pick the one in (1-8):\n");
    scanf("%d",&pick);
    if (pick == 1 ){
        result = a + b;
        printf("result is:%d",result);
    }
    else if (pick == 2){
        result = a-b;
        printf("result is: %d",result);
    }
    else if (pick == 3){
        result = a & b;
        printf("result is : %d",result);
    }
    else if (pick == 4){
        result = a | b;
        printf("result is : %d",result);
    }
    else if (pick == 5){
        result = a ^ b;
        printf("result is : %d",result);
    }
    else if (pick == 6){
        result = ~a;
        printf("result is : %d",result);
    }
    else if (pick == 7){
        result = a<<1;
        printf("result is : %d",result);
    }
    else if (pick == 8){
        result = a>>1;
        printf("result is : %d",result);
    }
    

    return 0;
}
