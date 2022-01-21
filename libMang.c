// issue, return a book
#include <stdio.h>
#include <conio.h>
#include <string.h>

int book_count = 0;

struct libMang
{
    int UniqueBookId[5];
    char BookName[20];
    char AuthorName[20];
};

void star()
{

    for (int i = 0; i < 2; i++)
    {
        printf("\t\t");
        for (int j = 0; j < 100; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void welcome()
{
    char str[100] = "Library Management System By Hamid Hussain Siddiqui BCA(2021-24)";

    for (int i = 0; i < 30; i++)
    {
        printf("*");
    }

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }

    for (int i = 0; i < 30; i++)
    {
        printf("*");
    }
}

void show()
{
    struct libMang book[10];

    for (int i = 0; i < book_count; i++)
    {
        printf("Unique Book Id: %2s\n", book[i].UniqueBookId);
        printf("Book Name: %2s\n", book[i].BookName);
        printf("Author Name: %2s\n", book[i].AuthorName);
    }
}

int main()
{
    struct libMang book[10];

    int pass;
    int a, i, j, ir;
    char ar_nm[20], bk_nm[20], issuePer[20];

    printf("\n");

    star();
    welcome();
    printf("\n");
    star();

    printf("Enter the password: ");
    scanf("%d", &pass);

    if (pass == 100)
    {

        while (a != 6)
        {

            printf("\nWhat Do You Want To Do In Library Management System:-\n");
            printf("Enter 1 to ADD book detail.\n");
            printf("Enter 2 to SHOW all book detail.\n");
            printf("Enter 3 to FIND book detail.\n");
            printf("Enter 4 to ISSUE or RETURN book count.\n");
            printf("Enter 5 to SHOW book count.\n");
            printf("Enter 6 to EXIT.\n");

            scanf("%d", &a);

            switch (a)
            {

            // ADD book
            case 1:

                printf("Enter how many books you want to add: -");
                scanf("%d", &j);

                for (int k = 0; k < j; k++)
                {
                    printf("Enter the UniqueBookId: ");
                    scanf("%d", &book[i].UniqueBookId);

                    printf("Enter the Book Name: ");
                    scanf("%s", &book[i].BookName);

                    printf("Enter the author name: ");
                    scanf("%s", &book[i].AuthorName);
                }

                book_count++;

                break;

            // SHOW all book
            case 2:
                show();
                break;

            // FIND book
            case 3:

                printf("Enter author name : ");
                scanf("%s", &ar_nm);

                for (i = 0; i < book_count; i++)
                {

                    if (strcmp(ar_nm, book[i].AuthorName) == 0)
                    {
                        printf("%d %s %s", book[i].UniqueBookId, book[i].BookName, book[i].AuthorName);
                    }
                }

                break;

            // ISSUE or RETURN book
            case 4:

                printf("Enter 1 to ISSUE the book\n");
                printf("Enter 3 to return the book\n");
                scanf("%d", &ir);

                switch (ir)
                {
                case 1:
                    printf("Ënter your name: ");
                    scanf("%s", issuePer);

                    printf("Enter the book name you want to issue:");
                    scanf("%s", &bk_nm);

                    for (i = 0; i < book_count; i++)
                    {

                        if (strcmp(bk_nm, book[i].BookName) == 0)
                        {
                            printf("%d %s %s", book[i].UniqueBookId, book[i].BookName, book[i].AuthorName);
                        }
                    }

                    printf("%s has been issued for you", bk_nm);

                    break;

                case 2:

                    printf("Enter the book name you want to return:");
                    scanf("%s", &bk_nm);

                    for (i = 0; i < book_count; i++)
                    {

                        if (strcmp(bk_nm, book[i].BookName) == 0)
                        {
                            printf("%d %s %s", book[i].UniqueBookId, book[i].BookName, book[i].AuthorName);
                        }
                    }
                    printf("You are %s\n", issuePer);

                    printf("%s has been returned for you\n", bk_nm);

                    break;

                default:
                    printf("Enter the right key.\n");
                    break;
                }

                break;

            // SHOW book
            case 5:
                printf("The Book Count Is %d\n", book_count);
                break;

            // EXIT
            case 6:
                goto end;
            }
        }
    }
    else
    {
        printf("Enter the right password\n");
    }

end:;

    return 0;
}