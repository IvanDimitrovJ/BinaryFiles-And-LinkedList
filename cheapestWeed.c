#include "structHeader.h"
void printDataForCheapestWeed(WeedList* root)
{
    readBinaryFile(&root);
    WeedList* curr_item = root;
    double cheapestPrice = curr_item->boughtPricePerGram*curr_item->gramsBought;
    double currPrice;
    curr_item=curr_item->next;
    while(curr_item!=NULL)
    {
        currPrice=curr_item->boughtPricePerGram*curr_item->gramsBought;
        if(cheapestPrice>currPrice)
            cheapestPrice=currPrice;
        curr_item=curr_item->next;
    }
    curr_item=root;
    while(curr_item!=NULL)
    {
        currPrice=curr_item->boughtPricePerGram*curr_item->gramsBought;
        if(cheapestPrice==currPrice){
            printf("Cheapest Weed For This Month:\n");
            printf("Grams Bought: %.2lf\tPrice per Gram: %.2lf\tPrice: %.2lf\n",curr_item->gramsBought,curr_item->boughtPricePerGram,curr_item->gramsBought*curr_item->boughtPricePerGram);
        }
        curr_item=curr_item->next;
    }
}
