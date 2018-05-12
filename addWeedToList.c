#include "structHeader.h"
void addWeedToList(WeedList** root,Weed data)
{
    WeedList* temp = malloc(sizeof(WeedList));
    if(temp == NULL)
    {
        printf("Not memory enough");
        exit(1);
    }double gramsBought;
    double gramsSold;
    double boughtPricePerGram;
    double soldPricePerGram;
    char* month;
    temp->gramsBought = data.gramsBought;
    temp->gramsSold = data.gramsSold;
    temp->boughtPricePerGram = data.boughtPricePerGram;
    temp->soldPricePerGram = data.soldPricePerGram;
    temp->month = data.month;
    if(*root==NULL)
    {
        temp->next = NULL;
    }
    else
    {
        temp->next = *root;
    }
    *root = temp;
}
