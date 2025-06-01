#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EVENTS 100

struct Event {
    char name[50];
    char date[20];
    char time[20];
};

struct Event events[MAX_EVENTS];
int eventCount = 0;

void addEvent() {
    if (eventCount >= MAX_EVENTS) {
        printf("Event capacity reached. Cannot add more events.\n");
        return;
    }

    printf("Enter event name: ");
    scanf("%s", events[eventCount].name);

    printf("Enter event date: ");
    scanf("%s", events[eventCount].date);

    printf("Enter event time: ");
    scanf("%s", events[eventCount].time);

    eventCount++;
    printf("Event added successfully.\n");
}

void deleteEvent() {
    if (eventCount == 0) {
        printf("No events to delete.\n");
        return;
    }

    int i, index;
    char eventName[50];
    printf("Enter event name to delete: ");
    scanf("%s", eventName);

    for (i = 0; i < eventCount; i++) {
        if (strcmp(eventName, events[i].name) == 0) {
            index = i;
            break;
        }
    }

    if (i == eventCount) {
        printf("Event not found.\n");
        return;
    }

    for (i = index; i < eventCount - 1; i++) {
        strcpy(events[i].name, events[i + 1].name);
        strcpy(events[i].date, events[i + 1].date);
        strcpy(events[i].time, events[i + 1].time);
    }

    eventCount--;
    printf("Event deleted successfully.\n");
}

void displayEvents() {
    if (eventCount == 0) {
        printf("No events to display.\n");
        return;
    }

    int i;
    printf("Event List:\n");
    for (i = 0; i < eventCount; i++) {
        printf("Event %d:\n", i + 1);
        printf("Name: %s\n", events[i].name);
        printf("Date: %s\n", events[i].date);
        printf("Time: %s\n", events[i].time);
        printf("\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("Event Management System\n");
        printf("1. Add Event\n");
        printf("2. Delete Event\n");
        printf("3. Display Events\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEvent();
                break;
            case 2:
                deleteEvent();
                break;
            case 3:
                displayEvents();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
