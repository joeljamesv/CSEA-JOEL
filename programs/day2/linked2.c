#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head);

int main()
{
    int n, num;
    printf("enter the number of elements: ");
    scanf("%d", &n);

    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("enter the 0th data: ");
    scanf("%d", &num);
    head->data = num;
    head->next = NULL;
    struct node *temp = head;

    for (int i = 1; i < n; i++)
    {
        struct node *temp2 = (struct node *)malloc(sizeof(struct node));
        printf("enter the %dth data: ", i);
        scanf("%d", &num);

        temp2->data = num;
        temp2->next = NULL;
        temp->next = temp2;
        temp = temp2;
    }

    display(head);

    return 0;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void reverse(struct node *head)
{
    struct node *tail=head;
    while (tail != NULL)
    {
        tail=tail->next;
    }

    
}