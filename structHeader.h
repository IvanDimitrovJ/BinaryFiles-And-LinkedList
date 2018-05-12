#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct S_Weed
{
    double gramsBought;
    double gramsSold;
    double boughtPricePerGram;
    double soldPricePerGram;
    char* month;
} Weed;
typedef struct node
{
    double gramsBought;
    double gramsSold;
    double boughtPricePerGram;
    double soldPricePerGram;
    char* month;
    struct Weed* next;
} WeedList;
void writeBinaryFile();
void readBinaryFile(WeedList** root);
void addWeedToList(WeedList** root,Weed data);
void printDataForCheapestWeed(WeedList* root);
void printDataForMostExpensiveWeed(WeedList* root);
void makeMeRich(WeedList* root);
void profitForMonth(WeedList* root);
void deleteList(WeedList**head);

#endif
