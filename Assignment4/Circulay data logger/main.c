#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];//Defines buffer capacity

int count = 0;
int next = 0;

// Function to insert a new sample
void insertSample(int value)
{
    buffer[next] = value;

    next = (next + 1) % BUFFER_SIZE;//allows for circular indexing

    if (count < BUFFER_SIZE)
    {
        count++;
    }
}

// Function to print samples in chronological order
void printSamples()
{
    int i;
    int oldest;

    if (count == 0)
    {
        printf("\nNo samples stored yet.\n");
        return;
    }

    printf("\nStored sensor readings (Oldest to Newest):\n");

    oldest = (next - count + BUFFER_SIZE) % BUFFER_SIZE;//Calculates the position of the oldest reading

    for (i = 0; i < count; i++)
    {
        printf("%d ", buffer[(oldest + i) % BUFFER_SIZE]);//displays readings in order
    }

    printf("\n");
}

// Main function
int main()
{
    int choice, value;

    do
    {
        printf("\n===== CIRCULAR DATA LOGGER =====\n");
        printf("1. Insert new sensor reading\n");
        printf("2. Display stored readings\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter sensor value: ");
                scanf("%d", &value);

                insertSample(value);

                printf("Sample inserted successfully!\n");
                break;

            case 2:
                printSamples();
                break;

            case 3:
                printf("Exiting data logger...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
