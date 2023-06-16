#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
#include<windows.h>
#include <string.h>
void TextColor(int x)//X là mã màu
{
     HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}
int main(){

    printf("Enter di de co qua bat ngo cho em ne baby cua anh (mac du no hoi si da ti hihi :>>>)\n\n\n");
    getchar();
     


        Sleep(80);TextColor(11);
        printf("                        **********************          \n");
        Sleep(80);TextColor(11);
        printf("                      **************************        \n"); 
        Sleep(80);TextColor(11);
        printf("                    ******************************      \n");
        Sleep(80);TextColor(11);
        printf("                  **********************************    \n");
        Sleep(80);TextColor(11);
        printf("                 *****************  ******************  \n");
        Sleep(80);TextColor(11);
        printf("               *****************      ***************** \n");
        Sleep(80);TextColor(11);
        printf("             *****************          *****************\n");
        Sleep(80);TextColor(11);
        printf("           *****************               ****************\n");
        Sleep(80);TextColor(11);
        printf("         ****************************************************\n");
        Sleep(80);TextColor(11);
        printf("        *******************************************************\n");
        Sleep(80);TextColor(11);
        printf("      ***********************************************************\n");
        Sleep(80);TextColor(11);
        printf("     *****************                           ******************\n");
        Sleep(80);TextColor(11);
        printf("    ****************                               ******************\n");
        Sleep(80);TextColor(11);
        printf("  ****************                                   ******************\n\n\n\n");
        Sleep(80);
    

     int i, j, height = 32;

 Sleep(80);
    for (i = height / 2; i <= height; i += 2) {
        for (j = 1; j < height - i; j += 2) {
             TextColor(4);
            printf(" ");
   
        }
 Sleep(80);
        for (j = 1; j <= i; j++) {
             TextColor(4);
            printf("*");
                
        }
 Sleep(80);
        for (j = 1; j <= height - i; j++) {
             TextColor(4);
            printf(" ");
        
        }
 Sleep(80);
        for (j = 1; j <= i; j++) {
             TextColor(4);
            printf("*");
                
        }

        printf("\n");
    }
 Sleep(80);
    for (i = height; i >= 1; i--) {
        for (j = i; j < height; j++) {
             TextColor(4);
            printf(" ");
        }
 Sleep(80);
        for (j = 1; j <= (i * 2) - 1; j++) {
             TextColor(4);
            printf("*");
        }

        printf("\n\n\n\n");
    }
    char c[25][77]; // thay đổi kích thước mảng để đảm bảo đủ chỗ để lưu trữ các ký tự

for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 76; j++) {
        c[i][j] = '*';
    }
}
for(int i = 5; i < 10; i++) {
    for(int j = 0; j < 15; j++) { // thay đổi kích thước của mảng này từ 7 thành 77
        c[i][j] = '*';
    }
}
for(int i = 10; i < 15; i++) {
    for(int j = 0; j < 76; j++) {
        c[i][j] = '*';
    }
}
for(int i = 15; i < 20; i++) {
    for(int j = 0; j < 15; j++) { // thay đổi kích thước của mảng này từ 7 thành 77
        c[i][j] = '*';
    }
}
for(int i = 20; i < 25; i++) {
    for(int j = 0; j < 76; j++) {
        c[i][j] = '*';
    }
}

for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 76; j++) {
        TextColor(3);
        printf("%c", c[i][j]); // sử dụng c[i][j] thay vì &c[i][j]
       
    }
     Sleep(80);
    printf("\n");
}
for(int i = 5; i < 10; i++) {
    for(int j = 0; j < 15; j++) {
        TextColor(3);
        printf("%c", c[i][j]); // sử dụng c[i][j] thay vì &c[i][j]
      
    }
     Sleep(80);
    printf("\n");
}
for(int i = 10; i < 15; i++) {
    for(int j = 0; j < 76; j++) {
        TextColor(3);
        printf("%c", c[i][j]); // sử dụng c[i][j] thay vì &c[i][j]
       
    }
     Sleep(80);
    printf("\n");
}
for(int i = 15; i < 20; i++) {
    for(int j = 0; j < 15; j++) {
        TextColor(3);
        printf("%c", c[i][j]); // sử dụng c[i][j] thay vì &c[i][j]
      
    }
     Sleep(80);
    printf("\n");
}
for(int i = 20; i < 25; i++) {
    for(int j = 0; j < 76; j++) {
        TextColor(3);
        printf("%c", c[i][j]); // sử dụng c[i][j] thay vì &c[i][j]
       
    }
     Sleep(80);
    printf("\n");
}
}


