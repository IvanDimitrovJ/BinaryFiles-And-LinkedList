#include "structHeader.h"
void writeBinaryFile()
{
    Weed newData;
    unsigned int size;
    char* monthTemp=(char*)malloc(sizeof(char)*10);
    printf("Grams bought: ");
    scanf("%lf",&newData.gramsBought);
    printf("Price per bought gram: ");
    scanf("%lf",&newData.boughtPricePerGram);
    printf("Grams sold: ");
    scanf("%lf",&newData.gramsSold);
    printf("Price per sold gram: ");
    scanf("%lf",&newData.soldPricePerGram);
    printf("Month: ");
    scanf("%s",monthTemp);
    size=strlen(monthTemp);
    newData.month = (char*)malloc(sizeof(char)*(++size));
    strncpy(newData.month,monthTemp,size);
    newData.month[size]='/0';
    free(monthTemp);
    char* fname=(char*)malloc(sizeof(char)*size+4);
    strncpy(fname, newData.month,size);
    strcat(fname,".bin");
    FILE* f;
    if((f=fopen(fname,"ab"))==NULL){
        printf("Can not open the file!\nFind new dealer..\n");
        exit(1);
    }
    if(fwrite(&newData, sizeof(Weed),1,f)!=1){
        printf("Can not write weed info to file. Sorry.\n");
        exit(1);
    }
    fclose(f);
}
