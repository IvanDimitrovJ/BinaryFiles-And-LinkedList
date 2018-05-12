#include "structHeader.h"
int main()
{
    WeedList* root=NULL;
    unsigned int userChoice;
    while(1) {
      system("cls");
      printf("Hey, Dealer. What do you want me to do?\n");
      printf("1. Write to file\n");
      printf("2. Print data for the cheapest \"Ice cream\"\n");
      printf("3. Print data for the most expensive \"Ice cream\"\n");
      printf("4. Print best profit\n");
      printf("5. Print profit for defined month\n");
      printf("0. Exit\n");
      printf("Your choice: ");
      if(scanf("%u",&userChoice)!=1){
        printf("Invalid input.");
        exit(1);
        }
      switch(userChoice) {
          case 1:
            writeBinaryFile();
            break;
        case 2:
            printDataForCheapestWeed(root);
            break;
        case 3:
            printDataForMostExpensiveWeed(root);
            break;
        case 4:
            makeMeRich(root);
            break;
        case 5:
            profitForMonth(root);
            break;
        case 0:
            deleteList(&root);
            exit(0);
        default:
            printf("Wrong choice\n");
            }
        fflush(stdin);
        system("PAUSE");
    }
    return 0;
}
