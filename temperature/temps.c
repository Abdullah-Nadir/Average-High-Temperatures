// Practice working with structs
// Practice applying sorting algorithm

#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    // Selection Sort
    for (int i = 0; i < NUM_CITIES - 1; i++)
    {
        // Creating variable for storing the largest value index
        int index_largest = i;

        // Storring largest value
        for (int j = i+1; j < NUM_CITIES; j++)
        {
            if (temps[index_largest].temp < temps[j].temp)
            {
                index_largest = j;
            }
        }

        // sorting array according to largest value (Swapping)
        if (index_largest != i)
        {
            avg_temp tempo_var = temps[i];
            temps[i] = temps[index_largest];
            temps[index_largest] = tempo_var;
        }
    }
}
