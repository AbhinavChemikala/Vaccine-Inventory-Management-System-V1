#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> 
#include<string.h>
#include"InventorySearch.h"
#include"InventoryReadFile.h"
#include"InventoryCreation.h"
#include"InventoryUpdate.h"
#include"Bubblesort.h"

int main()
{
    printf("\n\n************** VACCINE INVENTORY MANAGEMENT SYSTEM **************\n\n\n");
    int choice;

    while(1)
    {
        printf("\n1. Open Inventory \n");
        printf("2. Read From Last Data From a File\n");
        printf("3. Search Inventory\n");
        printf("4. Update The Inventory\n");
        printf("5. Sort The Inventorty\n");
        printf("6. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                {
                    InventoryCreation();
                    break;
                }
            case 2:
                {
                    InventoryReadFile();
                    break;
                }
            case 3:
                {
                    InventorySearch();
                    break;
                }
            case 4:
                {
                    InventoryUpdate();
                    break;
                }
            case 5:
                {
                    Bubblesort();
                    break;
                }
            case 6:
                printf("\n\n\t\t\tHave A Nice Day !\n\n\n");
                exit(0);    // terminates the complete program execution
            default:
                printf("\n*******Enter Correct Input*******\n");
        }
    }
    printf("\n\n\t\t\tHave A Nice Day !\n\n\n");
    return 0;
}