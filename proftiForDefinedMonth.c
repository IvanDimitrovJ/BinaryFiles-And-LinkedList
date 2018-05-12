#include "structHeader.h"
void profitForMonth(WeedList* root)
{
    readBinaryFile(&root);
    WeedList* curr_item=root;
    double profitForWholeMonth=0;
    while(curr_item!=NULL)
    {
        profitForWholeMonth+=curr_item->soldPricePerGram*curr_item->gramsSold - curr_item->boughtPricePerGram*curr_item->gramsBought;
        curr_item=curr_item->next;
    }
    if(profitForWholeMonth>0)
    {
        printf("I love my job! Profit for this month: %.2lf.\n",profitForWholeMonth);
    }
    else if(profitForWholeMonth==0)
    {
        printf("I should do something. I have no profit.\n");
    }
    else
    {
        printf("I must find a new job.\nLoss: %.2lf.\n",profitForWholeMonth);
    }
}
