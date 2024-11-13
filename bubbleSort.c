#include <stdio.h>
#include <string.h>

// implementing bubble sort in c
void sort(int list[], int size_of_list)
{
    for (int i = 0; i < size_of_list - 1; i++)
    {
        for (int j = 0; j < size_of_list - 1; j++)
        {
            if (list[j] > list[j++])
            {
                int temp = list[j];
                list[j] = list[j++];
                list[j++] = temp;
            }
        }
    }
}

void printList(int list[], int size_of_list)
{
    for (int i = 0; i < size_of_list; i++)
    {
        printf("%d  ", list[i]);
    }
}
int main()
{
    int list[] = {12, 3, 15, 17, 1, 83, 8};
    int size_of_list = sizeof(list) / sizeof(list[0]);

    sort(list, size_of_list);
    printList(list, size_of_list);

    return 0;
}
