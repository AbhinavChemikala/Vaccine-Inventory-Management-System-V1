struct dist
{
    char Name_Vaccine[5][15];
    char Vaccine_Code[5][10];
    char Producing_Country[5][15];
    int Dosage_Required[5];
    float Population_Covered[5];
    float Total_Vaccines[5];
    char distcode[100][100];
    float distvalue[100];
};
void Bubblesort()
{
    struct dist sort[20];
    int i, j, n=5,m;
    //int o=DISTSIZE;
    int idxArray[5];
    float a,b;
    FILE *f = fopen("Vaccine.txt", "r");
    FILE *fp = fopen("dist.txt","r");

    //For Vaccine.txt
    for (int i = 0; i < 5; i++) {
        fscanf(f,"%s",sort->Name_Vaccine[i]);
        fscanf(f,"%s",sort->Vaccine_Code[i]);
        fscanf(f,"%s",sort->Producing_Country[i]);
        fscanf(f,"%d",&sort->Dosage_Required[i]);
        fscanf(f,"%f",&sort->Population_Covered[i]);
        fscanf(f,"%f",&sort->Total_Vaccines[i]);
        idxArray[i] = i; // piggyback initialization of the index array
    }
    fclose(f);

    //Original Order
    printf("The numbers arranged in Original order for Vaccine.txt are given below\n");
    for (i = 0; i < n; ++i) {
        printf("%s %.4f\n",sort->Vaccine_Code[i], sort->Total_Vaccines[i]);
    }

    //  sorting begins ... //
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (sort->Total_Vaccines[idxArray[i]] < sort->Total_Vaccines[idxArray[j]]) {
                a = idxArray[i];
                idxArray[i] = idxArray[j];
                idxArray[j] = a;
            }
        }
    }
    printf("The numbers arranged in Descending order for Vaccine are given below\n");

    for (i = 0; i < n; ++i) {
        printf("%s %9.4f\n",sort->Vaccine_Code[idxArray[i]], sort->Total_Vaccines[idxArray[i]]);
    }
        //Getting how many lines are there in the dist.txt 
    FILE *fp2;
    int count = 0;  // Line counter (result)
    char filename[] = "dist.txt";
    char c;  // To store a character read from file
    
    // Open the file
    fp2 = fopen("dist.txt", "r");
    
    // Check if file exists
    if (fp2 == NULL)
        {
            printf("Could not open file %s", filename);
        }
    
    // Extract characters from file and store in character c
    for (c = getc(fp2); c != EOF; c = getc(fp2))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
    
    // Close the file
    fclose(fp2);
    int iddArray[count];
    //For Dist.txt
    for (int i = 0; i < count; i++) {
        fscanf(fp,"%s",sort->distcode[i]);
        fscanf(fp,"%f",&sort->distvalue[i]);
        iddArray[i] = i; // piggyback initialization of the index array
    }
    fclose(f);

    //Original Order
    printf("The numbers arranged in Original order for dist.txt are given below\n");
    for (i = 0; i < count; ++i) {
        printf("%s %.4f\n",sort->distcode[i], sort->distvalue[i]);
    }

    //  sorting begins ... //
    for (i = 0; i < count; ++i) {
        for (j = i + 1; j < count; ++j) {
            if (sort->distvalue[iddArray[i]] < sort->distvalue[iddArray[j]]) {
                a = iddArray[i];
                iddArray[i] = iddArray[j];
                iddArray[j] = a;
            }
        }
    }
    printf("The numbers arranged in Descending order for dist.txt are given below\n");
    
    for (i = 0; i < count; ++i) {
        printf("%s %9.4f\n",sort->distcode[iddArray[i]], sort->distvalue[iddArray[i]]);
    }
}
