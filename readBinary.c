#include "structHeader.h"
void readBinaryFile(WeedList** root)
{
    FILE* f;
    Weed temp;
    unsigned int i,size,items_read;
    char* monthTemp=(char*)malloc(sizeof(char)*10);
    printf("Month to check: ");
    scanf("%s",monthTemp);
    size=strlen(monthTemp);
    char* fname = (char*)malloc(sizeof(char)*(++size)+4);
    strncpy(fname,monthTemp,size);
    free(monthTemp);
    strcat(fname,".bin");
    if((f=fopen(fname,"rb"))==NULL){
        printf("Can not open file!");
        exit(1);
    }
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    rewind(f);
    items_read = size/sizeof(Weed);
    rewind(f);
    for(i=0; i<items_read; i++){
        if(fread(&temp, sizeof(Weed),1,f)!=1){
            printf("Can not read data!");
            exit(1);
        }
        addWeedToList(root, temp);
    }
    fclose(f);
}
