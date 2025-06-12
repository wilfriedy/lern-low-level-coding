#include <stdio.h>

int returnAnum(int a, int b) {
    int res = a + b;
    return res;
}

int main(){
    int a, b;
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("Enter a second number: \n");
    scanf("%d", &b);
    int res = returnAnum(a, b);
    printf("your result is %d:", res);
    return 0;
} 
