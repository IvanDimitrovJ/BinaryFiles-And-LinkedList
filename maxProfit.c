#include "structHeader.h"
void makeMeRich(WeedList* root)
{
    readBinaryFile(&root);
    WeedList* curr_item = root;
    double maxProfit=curr_item->soldPricePerGram*curr_item->gramsSold - curr_item->boughtPricePerGram*curr_item->gramsBought;
    double currProfit;
    curr_item=curr_item->next;
    while(curr_item!=NULL)
    {
        currProfit=curr_item->soldPricePerGram*curr_item->gramsSold - curr_item->boughtPricePerGram*curr_item->gramsBought;
        if(maxProfit<currProfit)
            maxProfit=currProfit;
        curr_item=curr_item->next;
    }
    curr_item=root;
    while(curr_item!=NULL)
    {
        currProfit=curr_item->soldPricePerGram*curr_item->gramsSold - curr_item->boughtPricePerGram*curr_item->gramsBought;
        if(maxProfit==currProfit){
            printf("Best Deal This Month:\n");
            printf("Grams Bought: %.2lf\tPrice per Gram: %.2lf\n",curr_item->boughtPricePerGram,curr_item->gramsBought);
            printf("Grams Sold: %.2lf\tPrice per Gram: %.2lf\n",curr_item->soldPricePerGram,curr_item->gramsSold);
            printf("Profit: %.2lf\n",maxProfit);
        }
        curr_item=curr_item->next;
    }
}
