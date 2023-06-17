#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int input()
{   
    int n;
    scanf("%d", &n);
    return n;
}
void output(int n){
    printf("%d\n", n);
}
int count(char a[] ){
    int n = 0   ;
    for(int i = 0; i < strlen(a) ; i++) {
        if (a[i] == ' ') n++;
        }
}