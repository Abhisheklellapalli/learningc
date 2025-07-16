#include <stdio.h>
int main() {
    int a ,b,result;
    int i;
    int pick;
    printf("00- ALU for binary numbers \n");
    printf("11- ALU for decimal numbers \n");
    scanf("%b",&i);
    if(i==00){
        printf("enter the two binarynumbers:  \n");
        scanf("%b %b",&a,&b);
        printf("1- Addition operation \n");
        printf("2- Subtraction operation \n");
        printf("3- AND operation \n");
        printf("4- OR operation\n");
        printf("5- XOR operation \n");
        printf("6- NOT operation\n");
        printf("7- Left Shift operation \n");
        printf("8- Right Shift operation \n");;
        printf("Enter the choice: ");
        scanf("%d",&pick);
        if (pick == 1 ){
            result = a + b;
            printf("result is %d",result);
        }
        else if (pick == 2){
            result = a-b;
            printf("result is %d",result);
        }
        else if (pick == 3){
            result = a & b;
            printf("result is %d",result);
        }
        else if (pick == 4){
            result = a | b;
            printf("result is %d",result);
        }
        else if (pick == 5){
            result = a ^ b;
            printf("result is %d",result);
        }
        else if (pick == 6){
            result = ~a;
            printf("result is %d",result);
        }
        else if (pick == 7){
            result = a<<1;
            printf("result is %d",result);
        }
        else if (pick == 8){
            result = a>>1;
            printf("result is %d",result);
        }
    }
    else {
        printf("enter two decimals number:\n");
        scanf("%d %d",&a,&b);
        printf("1- Addition operation \n");
        printf("2- Subtraction operation\n");
        printf("3- Multiplication operation \n");
        printf("4- Division operation\n");
        printf("5- modulus operation\n");
        printf("Enter the choice :");
        scanf("%d",&pick);
        if (pick == 1 ){
            result = a + b;
            printf("result is %d",result);
        }
        else if (pick == 2){
            result = a-b;
            printf("result is %d",result);
        }
        else if (pick == 3){
            result = a*b;
            printf("result is %d",result);
        }
        else if (pick == 4){
            result = a/b;
            printf("result is %d",result);
        }
        else if (pick == 5){
            result = a%b;
            printf("result is %d",result);
        }
        
    }
    
    return 0;
}




https://onlinegdb.com/MrQKYS7m4 (for output)
