#include<stdio.h>
#include<string.h>
#define MAX_LETTER 50 
#define MAX_STUDENT 100
int isFull(int *pn){
    if(*pn > 0) return 1 ;
    else return 0 ;
}
int isEmpty(int *pn){
    if(*pn == 0) return 1 ;
    else return 0 ;
}
int Fullyet(int *pn){
    if(*pn < MAX_STUDENT && *pn > 0) return 1 ;
    else return 0 ;
}
char* lTrim (char s[])
{
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}
char* rTrim(char s[]){
    int i = strlen(s) -1 ;
    while(s[strlen(s) - 1] == ' ') i--;
     s[i+1] = '\0';
     return s;
}
char* trim(char s[]){
    s = lTrim(rTrim(s));
    return s ;
}
void add_student(char student[][MAX_LETTER], char s[], int* pn){
   if (isEmpty( &pn)) 
{
    printf("Input name you wanna add : ");
    fgets(s, sizeof(s), stdin);
    fflush(stdin);
    student[*pn][MAX_LETTER] = s[MAX_LETTER];
}
}
void search(char student[][MAX_LETTER], char s[], int* pn){
   if( isEmpty(student)) printf("This list is empty!\n ");
   else {
        printf("Input name you wanna search : ");
        fgets(s, sizeof(s), stdin);
        fflush(stdin);
        strupr(s);
        int found = 0 ;
        for(int i = 0 ; i < MAX_STUDENT ; i++)
        {
            if(strcmp(student[i], s) == 0) 
            found == i ;
            break;
        }
        if(found != 0) printf("The name %s is in the %d of the list\n", s , found+1);
        else printf("The name %s is not in the list!\n");
}
