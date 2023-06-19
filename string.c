#include<stdio.h>
#include<string.h>
#include<ctype.h>
int uppercase(char* c){
    if( (*c) >= 97 && *c <= 122 )
        *c = *c - 32;
    return *c;
}
int lowercase(char* c){
    if( (*c) >= 65 && *c <= 90 )
        *c = *c + 32;
    return *c;
}
char lTrim(char *c){
    int i = 0 ;
    while (c[i] == ' ') 
    {
        i++;
        strcpy(&c[0], &c[i]);
    }
    return *c;
}
char rTrim(char *c){
    int i = strlen(c) - 1 ;
    while(c[i] == ' ') {
        i--;
        c[i + 1] = '\0';
    }

    return *c;
}
char perfect(char *a){
    uppercase(&a[0]);
    for(int i=0; i<100; i++){ // viet hoa 
        lowercase(&a[i]);
        if(a[i] >= 97 && a[i] <= 122 && a[i-1] == ' ')
        uppercase(&a[i]);
    }
    lTrim(a);
    rTrim(a);
    return *a;
}
int main(){
    char a[100][50];
    for(int i = 0 ; i < 100 ; i++){

    fgets(a[i],sizeof(a), stdin);
    }
}