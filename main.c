#include <stdio.h>

int main() {

    char bookName[70];

    printf("\n\n\t\t*** WELCOME TO LIBRARY APPLICATION ***\n\n");
    printf("\t\t\nENTER THE NAME OF THE BOOK YOU WOULD LIKE TO LOAN OR RETURN: \n");

    gets(bookName);

    //mitigation: fgets(bookName, 69, stdin);

    printf("\nThis book is unavailable: %s " , bookName);
    printf("\n\n");
    return 0;

}
