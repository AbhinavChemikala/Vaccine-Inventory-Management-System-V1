void InventoryReadFile()
{
    int ExistingRecordOption;
    printf("Do You Want To Open an Existing Record (If yes please Enter 1): ");
    scanf("%d",&ExistingRecordOption);
    if (ExistingRecordOption == 1)
    {
        FILE *fexisting;


        fexisting = fopen("vaccine.txt","r");

        if(fexisting == NULL)
        {
            printf("\nERROR: File cannot open");
            return;
        }

        char SingleLine[150];
        //Declaring Headings
        printf("\n Name Of The Vaccine      Vaccine Code      Producing Country      Dosage Required      Population Covered      Total Vaccines Available(In Mil)\n\n");
        while(!feof(fexisting))
        {
            fgets(SingleLine,150,fexisting);
            puts(SingleLine);
        }
        fclose(fexisting);
    }

}