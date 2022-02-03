
void InventorySearch()
{
    char VaccineCode[500];
    int found = 0;
    char line[300];
    printf("\n******* Vaccine Codes *******\n\n");
    printf("       CanSinoBio - CS\n       Sputnik V - SP\n       AstraZeneca - AZ\n       Sinovac - SV\n       Pfizer - PF\n  \nPlease Enter the number to access the Vaccine: ");
    scanf("%s",VaccineCode);
    printf("\nYou have entered Vaccine Code - %s\n",VaccineCode);

    FILE *fp = fopen("Vaccine.txt","r");

    if(fp == NULL)
    {
        printf("\nERROR: File cannot open");
        return;
    }

    while (!feof(fp))
    {
        fgets(line,300,fp);
        if (strstr(line,VaccineCode)!=NULL)
        {
            printf("\n%s",line);
            found = 1;
        }
    }
    printf("\n");
    if (found == 0)
    {
        printf("Please Enter Correct Vaccine Code");
    }

	fclose(fp); 
}