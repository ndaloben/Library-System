
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int menu(); // prototype
int main ()

int main()

    Action = menu();
    do {
    printf("\tcounty Library\n");
    printf("Welcome Mr.Philip. \n");
    printf("What would you like to do?\n");
    printf("1. view Users.\n");
    printf("2. Add new User\n");
    printf("3. Edit User. \n");
    printf("4. Delete User.\n");
    printf("5. Change password.");
    printf("6. Logout. \n");
    printf("7. Exit. \n");
    printf("Selected action(1-7): ");
    scanf("%d", &action);
    if(action<1 || action >7)
            printf("Invalid Action. Try again");
        }

    }  while(action< 1 || action > 7);{
        system ("cls);
        printf("Invalid Action.Try again.\n");
    }

        return 0;

}


