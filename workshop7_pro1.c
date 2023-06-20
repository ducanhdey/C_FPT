
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VALUE 100

int menu()
{
	int choice;
	printf("\n*************************MENU*********************");
	printf("\n| 1- Add a student                               |");
	printf("\n| 2- Remove a student                            |");
	printf("\n| 3- Search a student                            |");
	printf("\n| 4- Print the list in ascending                 |");
	printf("\n| 5- Quit                                        |");
	printf("\n**************************************************\n");
	printf("\nEnter Your Choice: ");
	scanf("%d", &choice);
	fflush(stdin); 
	return choice;
}

int isFull(int n)
{
	return n == MAX_VALUE;
}

int isEmpty(int n)
{
	return n == 0;
}

char* lTrim (char s[])
{
	int i = 0;
	while (s[i] == ' ')	i++;
	if (i > 0) strcpy(&s[0], &s[i]);
	return s;
}

char* rTrim (char s[])
{
	int i = strlen(s) - 1;
	while (s[i] == ' ') i--;
	s[i+1] = '\0';
	return s;
}

char* trim (char s[])
{
	rTrim(lTrim(s));
	char *ptr = strstr(s, "  ");
	while (ptr != NULL)
	{
		strcpy(ptr, ptr + 1);
		ptr = strstr(s, "  ");
	}
	return s;
}

void addStudent(char names[][31], int *pn)
{
	char name[31];
	int i;
	
		printf("\nEnter name of student: ");
		scanf("%[^\n]", name);
		fflush(stdin);
		strupr(name);
		trim(name);
	strcpy(names[*pn], name);
	(*pn)++;
}

void removeStudent(char names[][31], int *pn)
{
	printf("\nList of student: \n");
	int i, j;
	for (i = 0; i < *pn; i++)
		printf("[%d]: %s\n", i+1, names[i]);
	int remove;
	printf("\nEnter number of student you wanna remove: ");
	scanf("%d", &remove);
	if (remove >= 0 && remove <= *pn)
	{
		for (j = remove + 1 ; j <= *pn; j++)
			strcpy(names[j-2], names[j-1]);
		printf("\nRemoved!!!\n");
		(*pn)--;
	}
	else
		printf("\nUnremove!!!\n");
}

void searchStudent(char names[][31], int n)
{
	char name[31];
	printf("\nEnter name of student you wanna searh: ");
	scanf("%[^\n]", name);
	fflush(stdin);
	strupr(name);
	int i, x;
	int check = 0;
	for (i = 0; i < n; i++)
		{
			x = strcmp(names[i], name);
			if (x == 0)
			{
				printf("\nFound it!\n");
				printf("\nResult: %d : %s\n", i+1, names[i]); 
				check = 1;
			}
		}
	if (check == 0)
		printf("\nNot found!\n");
}

void printStudent(char names[][31], int *pn)
{
	int i, j;
   	for (i = 0; i < *pn-1; i++)
     	for (j = *pn-1; j > i; j--)
     		if (strcmp(names[j] , names[j-1]) < 0)
     			{
     				char trans[31];
		            strcpy(trans, names[j]);
		            strcpy(names[j], names[j-1]);
		            strcpy(names[j-1], trans);
				}
	for (i = 0; i < (*pn); i++)
		printf("%d. %s \n", i+1, names[i]);
}

int main()
{
	int userChoice, check = 1;
	char names[MAX_VALUE][31];
	int n = 0;
    do
    {
		userChoice = menu();
    	switch(userChoice)
		{
			case 1:
				if (isFull(n))
					printf("\nSorry! The List is full!\n");
				else
					addStudent(names, &n);					
					printf("\nAdded!\n");
		        break;
		    case 2:
		    	if (isEmpty(n))
					printf("\nSorry! The List is empty!\n");
				else
					removeStudent(names, &n);
			    break;
			case 3:
				if (isEmpty(n))
					printf("\nSorry! The List is empty!\n");
				else
					searchStudent(names, n);
				break;
			case 4:
				if (isEmpty(n))
					printf("\nSorry! The List is empty!\n");
				else
					printStudent(names, &n);
				break;
		    default:
		    	if (userChoice == 5)
		    		check = 0;
		    	else 
					printf("\n>>>Wrong input!!!!\n");
				break;					
	    }
	}
	while (check == 1);
	printf("\nGood Bye!");
	return 0 ;
}
