void InventoryCreation()
{

    //Declaring The 2D Arrays to store the Data
    char Name_Vaccine[5][15] = {"Pfizer\0", "Sinovac\0", "AstraZeneca\0", "SputnikV\0", "CanSinoBio\0"};
    char Vaccine_Code[5][10] = {"PF\0", "SV\0", "AZ\0", "SP\0", "CS\0"};
    char Producing_Country[5][15] = {"USA\0", "CHINA\0", "UK\0", "RUSSIA\0", "CHINA\0"};
    int Dosage_Required[5] = {2, 2, 2, 2, 1};
    float Population_Covered[5] = {50.0, 18.8, 10.0, 10.0, 10.9};
    float Total_Vaccines[5]={0.0,0.0,0.0,0.0,0.0};

        //Updating Records
    int recordsQ;
    printf("\nDo You Want to Update the Records?\n 1. Update Records\n 2. Open By Default Values\nEnter The Number You Want To Open: ");
    scanf("%d", &recordsQ);

    //Updating Records
    int pos=6;
    double element;
    if (recordsQ == 1)
    {
        printf("\nWhich Vaccine Details You need to update?\n 0. Pfizer\n 1. Sinovac\n 2. AstraZeneca\n 3. Sputnik V\n 4. CanSinoBio\n Enter The Number You Want to Update: ");
        scanf("%d", &pos);

        printf("\nEnter The Updated Value: ");
        scanf("%lf", &element);

        Total_Vaccines[pos] = element;

        printf("\nThe updated Value For %s is : %.4lf\n", Name_Vaccine[pos], Total_Vaccines[pos]);
    }
    //Updating The details Of the Files
    int i = 0;
    while (i <5)
    {
        if (pos == i)
        {
            Total_Vaccines[i] = element;
        }
        else if (i == 0 && pos !=i)
        {
            Total_Vaccines[i] = 1.9;
        }
        else if (pos !=i && i == 1)
        {
            Total_Vaccines[1] = 1.2;
        }
        else if (pos !=i && i == 2)
        {
            Total_Vaccines[2] = 1.1;
        }
        else if (pos != i && i == 3)
        {
            Total_Vaccines[3] = 0.9;
        }
        else if (pos != i && i == 4)
        {
            Total_Vaccines[4] = 1.5;
        }
        else
        {
            printf("Something Went Wrong Please try again");
        }
        i++;
    }

    //Declaring Headings
    printf("\n Name Of The Vaccine      Vaccine Code      Producing Country      Dosage Required      Population Covered      Total Vaccines Available(In Mil)\n");
    //Looping To Print The Data
    for (int i = 0; i <= 4; i++)
    {
        while (i == 0)
        {
            printf("\n%9s%23s%22s%22d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 1)
        {
            printf("\n%10s%22s%24s%20d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 2)
        {
            printf("\n%14s%18s%21s%23d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 3)
        {
            printf("\n%12s%20s%25s%19d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        if (i == 4)
        {
            printf("\n%13s%19s%24s%20d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
        }
    }

    //This is the Process For Creating Files
    //Declare Name of the pointer using *
    FILE *fpointer;

    //Creating a new file and write data to it
    fpointer = fopen("Vaccine.txt", "w");

    //Loop For Writing The Data To the File
    for (int i = 0; i <= 4; i++)
    {
        while (i == 0)
        {
            fprintf(fpointer, "%9s%23s%22s%22d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 1)
        {
            fprintf(fpointer, "%10s%22s%24s%20d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 2)
        {
            fprintf(fpointer, "%14s%18s%21s%23d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 3)
        {
            fprintf(fpointer, "%11s%21s%25s%19d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        if (i == 4)
        {
            fprintf(fpointer, "%13s%19s%24s%20d%24.2f%29.4lf", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
        }
    }

    //Close the .txt File After Writing Data
    fclose(fpointer);
    return;
}