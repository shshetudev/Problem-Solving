#include<stdio.h>

int main() {
    int n, i =1;
    printf("How many numbers you want to print:");
    scanf("%d", &n);
    while(i<=n) {
        printf("%d", i);
        if(i != n && i%2==1)
            printf("-");
        else if(i != n && i%2 == 0)
            printf("+");    
        i++;
    }
    return 0;
}