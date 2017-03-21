#include<stdio.h>

struct node
{
    int data;
    struct node *n;
};
typedef struct node nod;
int main()
{
    nod *p;
    p=(nod*)malloc(sizeof(nod));
    p->data=15;
    p->n=(nod*)malloc(sizeof(nod));
    p->n->data=78;
    p->n->n=(nod*)malloc(sizeof(nod));
    p->n->n->data=96;
    printf("%d %d %d",p->data,p->n->data,p->n->n->data);
    return 0;
}
