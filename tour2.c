/*island *p = malloc(sizeof(island));
island p = (island*)malloc(sizeof(island));

free(p);
*/

#include "head.h"

typedef struct island{
char *name;
char *opens;
char *closes;
struct island *next;
}island;

island* create(char *name)
{
island *i = malloc(sizeof(island));
i->name = name;
i->opens = "09:00";
i->closes = "17:00";
i->next = NULL;
return i;
}


void display(island *start){
island *i = start;
for(i; i != NULL; i = i->next){
printf(" \n Name: %s \n Opens: %s \n Closes: %s\n", i->name, i->opens, i->closes);
}
}

int main(){


island* a= create("amity");
island* b= create("craggy");
island* c= create("isla_nublar");
island* d= create("shutter");

a->next = b;
b->next = c;
c->next = d;

display(a);

}
