
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct node
{
    int16_t val;
    struct node *next;
};

typedef struct node node;

void addNode(node **head, int16_t val);
void printList(node *head);
void insert(node **head, int16_t val, int8_t index);
void delete(node **head, int8_t index);

int main()
{
   uint8_t input = 0;
   uint8_t data, i;

   node *head = NULL;
   
   while(input != 2 )
   {
        printf("opperation choise : ");
        scanf("%d", &input);

        switch(input)
        {
            case 0:
                printf("please enter node val : ");
                scanf("%d", &data);
                addNode(&head, data);
                break;
            case 1:
                printList(head);
                printf("\n");
                break;
            case 3:
                printf("please enter node val : ");
                scanf("%d", &data);
                printf("please enter node index : ");
                scanf("%d", &i);
                insert(&head, data, i);
                break;
            default:
                printf("enter number between 0-2 ");
                break;
        }
   }
   printf("Exiting...");

   return 0;
}

void addNode(node **head, int16_t val)
{
    node *newNode = (node *) malloc(sizeof(node));
    newNode->val = val;
    newNode->next = NULL;

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    node *temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

void printList(node *head)
{
    node *ptr = head;
    if( ptr == NULL)
    {
        printf("Empty Linked List");
    }
    while(ptr->next != NULL) 
    {
        printf("%d->",ptr->val);
        ptr = ptr->next;
    }
   printf("%d",ptr->val);
}

void insert(node **head, int16_t val, int8_t index)
{
    node *ptr = head;
    node *newNode = (node *) malloc(sizeof(node));
    newNode->val = val;
    if(index == 0){
        newNode->next = *head;
        *head = newNode;
        return;
    }
    while (index > 0 && ptr != NULL)
    {
        ptr = ptr->next;
        index--;
    }
    if(ptr == NULL)
    {
        printf("wrong index\n");
        return;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
}