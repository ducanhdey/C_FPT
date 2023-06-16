#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
#include<windows.h>
char getuserchoice(){
    char c;
    printf("[Y/n] is yes and [N/n] is no\n");
        
    scanf("%c",&c);
    return c;
   
}
void guessnumber(){
    srand((unsigned int)time(NULL));
    int number  = 1+ rand() % 100;
    int x ,d ;
    int i;
    int j = 0 ;
    printf("Input an positive integer from 1 to 100 : \n");
    flag :
    scanf("%d",&x);
    d = abs(x - number);
    j++;
    if(d == 0) i = 4;
    else if (0< d && d < 10) i = 1;
    else if (d > 10 && d < 20)  i = 2;
    else i = 3;
    switch(i) {
        case 1:
        Sleep(1000);
        printf("It ís very close ! Chaiyooo <3 \n");
        goto flag ;
        break;
        case 2:
        Sleep(1000);
        printf("It is far from the number =((\n");
        goto flag ;
        break;
        case 3:
        printf("Oh no far vcl far roi =)))\n");
        goto flag;
        break;
        case 4:
        printf("YOU GOT THE NUMBER AFTER : %d times \n", j);
        default:
        break;
}   
getchar();
}
int main()
{
    
    char choice;
        printf("Choi tro doan so voi minh nhe ???\n");
       
        choice = getuserchoice();
        switch (choice)
        {
        case 'Y':
        case 'y':
            guessnumber();
            break;
        case 'N':
        case 'n':
            break;
        default:
            break;
        }
        
    return 0;
}