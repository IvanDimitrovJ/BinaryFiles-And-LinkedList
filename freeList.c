#include "structHeader.h"
void deleteList(WeedList**head)
{
    WeedList *p, *temp;

     for (p=*head;p!=NULL; ) {
         temp = p;
         p=p->next;
         free(temp);
     }
     *head = NULL;
}
