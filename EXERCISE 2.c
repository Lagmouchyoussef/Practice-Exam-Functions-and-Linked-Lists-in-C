#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Citizen {
    char cin[30];
    char name[30];
    char surname[30];
    int age;
    struct Citizen *next;
} Citizen;

Citizen* addToBeginning(Citizen *head) {
    Citizen *newCitizen = (Citizen*)malloc(sizeof(Citizen));
    printf("Enter CIN: ");
    scanf("%s", newCitizen->cin);
    printf("Enter name: ");
    scanf("%s", newCitizen->name);
    printf("Enter surname: ");
    scanf("%s", newCitizen->surname);
    printf("Enter age: ");
    scanf("%d", &newCitizen->age);
    newCitizen->next = head;
    return newCitizen;
}

Citizen* addToEnd(Citizen *head) {
    Citizen *newCitizen = (Citizen*)malloc(sizeof(Citizen));
    printf("Enter CIN: ");
    scanf("%s", newCitizen->cin);
    printf("Enter name: ");
    scanf("%s", newCitizen->name);
    printf("Enter surname: ");
    scanf("%s", newCitizen->surname);
    printf("Enter age: ");
    scanf("%d", &newCitizen->age);
    newCitizen->next = NULL;

    if (head == NULL) {
        return newCitizen;
    }

    Citizen *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newCitizen;
    return head;
}

void display(Citizen *head) {
    Citizen *temp = head;
    while (temp != NULL) {
        printf("CIN: %s, Name: %s, Surname: %s, Age: %d\n", temp->cin, temp->name, temp->surname, temp->age);
        temp = temp->next;
    }
}

int countAdults(Citizen *head, int x) {
    int count = 0;
    Citizen *temp = head;
    while (temp != NULL) {
        if (temp->age > x) {
            count++;
        }
        temp = temp->next;
    }
    return count;
}

int main() {
    Citizen *head = NULL;
    head = addToBeginning(head);
    head = addToEnd(head);
    display(head);
    int adults = countAdults(head, 18);
    printf("Number of adults: %d\n", adults);
    return 0;
}