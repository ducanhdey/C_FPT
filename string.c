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
    
}
int main(){
    char a[100];
    fgets(a,sizeof(a), stdin);
    uppercase(&a[0]);
    for(int i=0; i<100; i++){ // viet hoa 
        if(a[i] >= 97 && a[i] <= 122 && a[i-1] == ' ')
        uppercase(&a[i]);
    }
    lTrim(a);
    puts(a);
}