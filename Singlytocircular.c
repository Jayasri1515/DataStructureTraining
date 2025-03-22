#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void tocircular();
void circulardisplay();
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void create() {
    struct Node *tmp, *ptr;
    int ele;
    tmp = (struct Node*)malloc(sizeof(struct Node));
    if (tmp == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }
    scanf("%d", &ele);
    tmp->data = ele;
    tmp->next = NULL;
    if (head == NULL) {
        head = tmp;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = tmp;
    }
}
void display() {
    struct Node *ptr;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("The list elements are:\n");
    ptr = head;
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
void tocircular() {
    struct Node *ptr;
    if (head == NULL) return;
    ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = head;
}
void circulardisplay() {
    struct Node *ptr;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("The circular list elements are:\n");
    ptr = head;
    do {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}
int main() {
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        create();
    }
    display();
    tocircular();
    circulardisplay();
    return 0;
}
