void InventoryUpdate()
{
    int num,num2,num3,num4;
    float add,subtract;
    char readline[150];
    char Name_Vaccine[5][15];
    char Vaccine_Code[5][10];
    char Producing_Country[5][15];
    int Dosage_Required[5];
    float Population_Covered[5];
    float Total_Vaccines[10];
    char hospitalname[100];

    FILE *f = fopen("Vaccine.txt", "r");
    FILE *fp1 = fopen("dist.txt","a+");
    FILE *fp2 = fopen("dist.txt","r");

    for (int i = 0; i < 5; i++)
    {
        fscanf(f,"%s",Name_Vaccine[i]);
        fscanf(f,"%s",Vaccine_Code[i]);
        fscanf(f,"%s",Producing_Country[i]);
        fscanf(f,"%d",&Dosage_Required[i]);
        fscanf(f,"%f",&Population_Covered[i]);
        fscanf(f,"%f",&Total_Vaccines[i]);
    }

    printf("\n Name Of The Vaccine      Vaccine Code      Producing Country      Dosage Required      Population Covered      Total Vaccines Available(In Mil)\n");
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
            printf("\n%11s%21s%25s%19d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        if (i == 4)
        {
            printf("\n%13s%19s%24s%20d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
        }
    }
    printf("\n");

    printf("\nPlease Enter pfizer(1),Sinovac(2),AstraZeneca(3),SputnikV(4),CanSinoBio(5): ");
    scanf("%d",&num);
    while (num <6)
    {
        if (num == 1)
        {
            printf("\nDo you want to Add or Subtract the Distributed quantity to its present stock? Enter 1 for Add or Enter 2 for Distribute: ");
            scanf("%d",&num2);
            if (num2 ==1)
            {
                printf("\nEnter the amount to be add: ");
                scanf("%f",&add);
                Total_Vaccines[0] += add;
                printf("\nUpdated Quantity of Pfizer is: %.4f\n",Total_Vaccines[0]);
                printf("\n");
            }
            else if(num2 == 2)
            {
                printf("\nEnter the amount to be that is Distributed: ");
                scanf("%f",&subtract);
                Total_Vaccines[0] -= subtract;
                fprintf(fp1,"%s\t%.4f\n",Vaccine_Code[0],subtract);
                printf("\nUpdated Quantity of Pfizer is: %.4f\n",Total_Vaccines[0]);
                printf("\n");
            }
            else
            {
                printf("Only Enter 1 or 2");
            }
        }
        else if (num == 2)
        {
            printf("\nDo you want to Add or Subtract the Distributed quantity to its present stock? Enter 1 for Add or Enter 2 for Distribute: ");
            scanf("%d",&num2);
            if (num2 ==1)
            {
                printf("\nEnter the amount to be add: ");
                scanf("%f",&add);
                Total_Vaccines[1] += add;
                printf("\nUpdated Quantity of Sinovac is: %.4f\n",Total_Vaccines[1]);
                printf("\n");
            }
            else if(num2 == 2)
            {
                printf("\nEnter the amount to be Distributed: ");
                scanf("%f",&subtract);
                Total_Vaccines[1] -= subtract;
                fprintf(fp1,"%s\t%.4f\n",Vaccine_Code[1],subtract);
                printf("\nUpdated Quantity of Sinovac is: %.4f\n",Total_Vaccines[1]);
                printf("\n");
            }
            else
            {
                printf("Only Enter 1 or 2");
            }
        }
        else if (num == 3)
        {
            printf("\nDo you want to Add or Subtract the Distributed quantity to its present stock? Enter 1 for Add or Enter 2 for Distribute: ");
            scanf("%d",&num2);
            if (num2 ==1)
            {
                printf("\nEnter the amount to be add: ");
                scanf("%f",&add);
                Total_Vaccines[2] += add;
                printf("\nUpdated Quantity of AstraZeneca is: %.4f\n",Total_Vaccines[2]);
                printf("\n");
            }
            else if(num2 == 2)
            {
                printf("\nEnter the amount to be Distributed: ");
                scanf("%f",&subtract);
                Total_Vaccines[2] -= subtract;
                fprintf(fp1,"%s\t%.4f\n",Vaccine_Code[2],subtract);
                printf("\nUpdated Quantity of AstraZeneca is: %.4f\n",Total_Vaccines[2]);
                printf("\n");
            }
            else
            {
                printf("Only Enter 1 or 2");
            }
        }
        else if (num == 4)
        {
            printf("\nDo you want to Add or Subtract the Distributed quantity to its present stock? Enter 1 for Add or Enter 2 for Distribute: ");
            scanf("%d",&num2);
            if (num2 ==1)
            {
                printf("\nEnter the amount to be add: ");
                scanf("%f",&add);
                Total_Vaccines[3] += add;
                printf("\nUpdated Quantity of SputnikV is: %.4f\n",Total_Vaccines[3]);
                printf("\n");
            }
            else if(num2 == 2)
            {
                printf("\nEnter the amount to be Distributed: ");
                scanf("%f",&subtract);
                Total_Vaccines[3] -= subtract;
                fprintf(fp1,"%s\t%.4f\n",Vaccine_Code[3],subtract);
                printf("\nUpdated Quantity of SputnikV is: %.4f\n",Total_Vaccines[3]);
                printf("\n");
            }
            else
            {
                printf("Only Enter 1 or 2");
            }
        }
        else if (num == 5)
        {
            printf("\nDo you want to Add or Subtract the Distributed quantity to its present stock? Enter 1 for Add or Enter 2 for Distribute: ");
            scanf("%d",&num2);
            if (num2 ==1)
            {
                printf("\nEnter the amount to be add: ");
                scanf("%f",&add);
                Total_Vaccines[4] += add;
                printf("\nUpdated Quantity of CanSinoBio is: %.4f\n",Total_Vaccines[4]);
                printf("\n");
            }
            else if(num2 == 2)
            {
                printf("\nEnter the amount to be Distributed: ");
                scanf("%f",&subtract);
                Total_Vaccines[4] -= subtract;
                fprintf(fp1,"%s\t%.4f\n",Vaccine_Code[4],subtract);
                printf("\nUpdated Quantity of CanSinoBio is: %.4f\n",Total_Vaccines[4]);
                printf("\n");
            }
            else
            {
                printf("Only Enter 1 or 2");
            }
        }
        else
        {
            printf("\nOnly Enter Numbers From 1 to 5");
        }
        printf("Do you want to exit? Enter 1 for YES or Enter 2 for NO: ");
        scanf("%d",&num3);
        if (num3 == 1)
        {
            printf("Have a nice day!\n");
            break;
        }
        else if(num3 ==2)
        {
            printf("\nPlease Enter pfizer(1),Sinovac(2),AstraZeneca(3),SputnikV(4),CanSinoBio(5): ");
            scanf("%d",&num);
        }
        else
        {
            printf("\nPlease Enter only 1 or 2");
        }
    }
    fclose(f);

    FILE *fp = fopen("Vaccine.txt", "w");
    //Printing Updated Data to the Files
    for (int i = 0; i <= 4; i++)
    {
        while (i == 0)
        {
            fprintf(fp, "%9s%23s%22s%22d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 1)
        {
            fprintf(fp, "%10s%22s%24s%20d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 2)
        {
            fprintf(fp, "%14s%18s%21s%23d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        while (i == 3)
        {
            fprintf(fp, "%11s%21s%25s%19d%24.2f%29.4lf\n", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
            i++;
        }
        if (i == 4)
        {
            fprintf(fp, "%13s%19s%24s%20d%24.2f%29.4lf", Name_Vaccine[i], Vaccine_Code[i], Producing_Country[i], Dosage_Required[i], Population_Covered[i], Total_Vaccines[i]);
        }
    }
    fclose(fp);
    fclose(fp1);
    
    printf("\nDo you want to check distributed quantities? Enter 1 For YES or Enter 2 For NO: ");
    scanf("%d",&num4);
    if (num4 ==1)
    {
        printf("\n");
        while (fgets(readline, sizeof(readline), fp2))
        {
            printf("%s", readline); 
        }
        printf("\n");
    }
    else if (num4 ==2)
    {
        printf("\nOkay\n");
    }
    else
    {
        printf("Enter only 1 or 2");
    }
    fclose(fp2);
}