#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Square of %d is %d.",num,findSquare(num));
    return 0;
}

findSquare(int num){
    return (num*num);
}