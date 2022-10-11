#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int x,y;
int exits;
void menu();
struct date_now{
    int mm,dd,yy;

    };
struct {

    char client_name[60];
    int account_number,client_age;
    char client_address[60];
    char client_citizenship[15];
    double client_phone;
    char client_account_type[10];
    float client_amount;
    struct date_now client_dob;
    struct date_now client_deposit;
    struct date_now client_withdraw;

    }adding,updating,checking,remittance,trans;

float interest(float tt,float amnt,int rt)
{
    float sal_int;
    sal_int=(rt*tt*amnt)/100.0;
    return (sal_int);

}
void fordelay(int y)
{   int x,z;
    for(x=0;x<y;x++)
         z=x;
}

void new_accounts()

{
    int options;
    FILE *fileOpen;

    fileOpen=fopen("record.dat","a+");
    acct_no:
    system("cls");
    printf("\t\t\t\xB2\xB2\xB2\ ADD RECORD  \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date(mm/dd/yyyy):");
    scanf("%d/%d/%d",&adding.client_deposit.mm,&adding.client_deposit.dd,&adding.client_deposit.yy);
    printf("\nEnter the account number:");
    scanf("%d",&checking.account_number);
    while(fscanf(fileOpen,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&adding.account_number,adding.client_name,&adding.client_dob.mm,&adding.client_dob.dd,&adding.client_dob.yy,&adding.client_age,adding.client_address,adding.client_citizenship,&adding.client_phone,adding.client_account_type,&adding.client_amount,&adding.client_deposit.mm,&adding.client_deposit.dd,&adding.client_deposit.yy)!=EOF)
    {
        if (checking.account_number==adding.account_number)
            {printf("Account no. already in use!");
            fordelay(1000000000);
                goto acct_no;

            }
    }
    adding.account_number=checking.account_number;
        printf("\nEnter the name:");
    scanf("%s",adding.client_name);
    printf("\nEnter the date of birth(mm/dd/yyyy):");
    scanf("%d/%d/%d",&adding.client_dob.mm,&adding.client_dob.dd,&adding.client_dob.yy);
    printf("\nEnter the age:");
    scanf("%d",&adding.client_age);
    printf("\nEnter the address:");
    scanf("%s",adding.client_address);
    printf("\nEnter the citizenship number:");
    scanf("%s",adding.client_citizenship);
    printf("\nEnter the phone number: ");
    scanf("%lf",&adding.client_phone);
    printf("\nEnter the amount to deposit:P");
    scanf("%f",&adding.client_amount);
    printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice:");
    scanf("%s",adding.client_account_type);

        fprintf(fileOpen,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,adding.client_phone,adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);


    fclose(fileOpen);
    printf("\nAccount created successfully!");
    add_inv:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&exits);
    system("cls");
    if (exits==1)
        menu();
    else if(exits==0)
            close();
    else
        {
            printf("\nInvalid!\a");
            goto add_inv;
        }
}
void view_list()
{
    FILE *viewing;
    viewing=fopen("record.dat","r");
    int tst=0;
    system("cls");
    printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");

    while(fscanf(viewing,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&adding.account_number,adding.client_name,&adding.client_dob.mm,&adding.client_dob.dd,&adding.client_dob.yy,&adding.client_age,adding.client_address,adding.client_citizenship,&adding.client_phone,adding.client_account_type,&adding.client_amount,&adding.client_deposit.mm,&adding.client_deposit.dd,&adding.client_deposit.yy)!=EOF)
       {
           printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf",adding.account_number,adding.client_name,adding.client_address,adding.client_phone);
           tst++;
       }

    fclose(viewing);
    if (tst==0)
        {   system("cls");
            printf("\nNO RECORDS!!\n");}

    view_list_inv:
     printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&exits);
        system("cls");
        if (exits==1)
            menu();
        else if(exits==0)
            close();
        else
        {
            printf("\nInvalid!\a");
            goto view_list_inv;
        }
}
void update(void)
{
    int options,tst=0;
    FILE *oldrecord,*newrecord;
    oldrecord=fopen("record.dat","r");
    newrecord=fopen("new.dat","w");

    printf("\nEnter the account no. of the customer whose info you want to change:");
    scanf("%d",&updating.account_number);
    while(fscanf(oldrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&adding.account_number,adding.client_name,&adding.client_dob.mm,&adding.client_dob.dd,&adding.client_dob.yy,&adding.client_age,adding.client_address,adding.client_citizenship,&adding.client_phone,adding.client_account_type,&adding.client_amount,&adding.client_deposit.mm,&adding.client_deposit.dd,&adding.client_deposit.yy)!=EOF)
    {
        if (adding.account_number==updating.account_number)
        {   tst=1;
            printf("\nWhich information do you want to change?\n1.Address\n2.Phone\n\nEnter your choice(1 for address and 2 for phone):");
            scanf("%d",&options);
            system("cls");
            if(options==1)
                {printf("Enter the new address:");
                scanf("%s",updating.client_address);
                fprintf(newrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,updating.client_address,adding.client_citizenship,adding.client_phone,adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);
                system("cls");
                printf("Changes saved!");
                }
            else if(options==2)
                {
                    printf("Enter the new phone number:");
                scanf("%lf",&updating.client_phone);
                fprintf(newrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,updating.client_phone,adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);
                system("cls");
                printf("Changes saved!");
                }

        }
        else
            fprintf(newrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,adding.client_phone,adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);
    }
    fclose(oldrecord);
    fclose(newrecord);
    remove("record.dat");
    rename("new.dat","record.dat");

if(tst!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            edit_inv:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&exits);
              system("cls");
                 if (exits==1)

                    menu();
                else if (exits==2)
                    close();
                else if(exits==0)
                    update();
                else
                    {printf("\nInvalid!\a");
                    goto edit_inv;}
        }
    else
        {printf("\n\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&exits);
        system("cls");
        if (exits==1)
            menu();
        else
            close();
        }
}

void transact(void)
{   int options,tst=0;
    FILE *oldrecord,*newrecord;
    oldrecord=fopen("record.dat","r");
    newrecord=fopen("new.dat","w");

        printf("Enter the account no. of the Client:");
    scanf("%d",&trans.account_number);
    while (fscanf(oldrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&adding.account_number,adding.client_name,&adding.client_dob.mm,&adding.client_dob.dd,&adding.client_dob.yy,&adding.client_age,adding.client_address,adding.client_citizenship,&adding.client_phone,adding.client_account_type,&adding.client_amount,&adding.client_deposit.mm,&adding.client_deposit.dd,&adding.client_deposit.yy)!=EOF)
   {

            if(adding.account_number==trans.account_number)
            {   tst=1;
                if(strcmpi(adding.client_account_type,"fixed1")==0||strcmpi(adding.client_account_type,"fixed2")==0||strcmpi(adding.client_account_type,"fixed3")==0)
                {
                    printf("\a\a\a\n\nYOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
                    fordelay(1000000000);
                    system("cls");
                    menu();

                }
                printf("\n\nDo you want to\n1.Deposit\n2.Withdraw?\n\nEnter your choice(1 for deposit and 2 for withdraw):");
                scanf("%d",&options);
                if (options==1)
                {
                    printf("Enter the amount you want to deposit:P ");
                    scanf("%f",&trans.client_amount);
                    adding.client_amount+=trans.client_amount;
                    fprintf(newrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,adding.client_phone,adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);
                    printf("\n\nDeposited successfully!");
                }
                else
                {
                    printf("Enter the amount you want to withdraw:P ");
                    scanf("%f",&trans.client_amount);
                    adding.client_amount-=trans.client_amount;
                    fprintf(newrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,adding.client_phone,adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);
                    printf("\n\nWithdrawn successfully!");
                }

            }
            else
            {
               fprintf(newrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,adding.client_phone,adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);
            }
   }
   fclose(oldrecord);
   fclose(newrecord);
   remove("record.dat");
   rename("new.dat","record.dat");
   if(tst!=1)
   {
       printf("\n\nRecord not found!!");
       transact_invalid:
      printf("\n\n\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
      scanf("%d",&exits);
      system("cls");
      if (exits==0)
        transact();
    else if (exits==1)
        menu();
    else if (exits==2)
        close();
    else
    {
        printf("\nInvalid!");
        goto transact_invalid;
    }

   }
   else
   {
       printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&exits);
        system("cls");
        if (exits==1)
            menu();
        else
            close();
   }

}
void deleted(void)
{
    FILE *oldrecord,*newrecord;
    int test=0;
    oldrecord=fopen("record.dat","r");
    newrecord=fopen("new.dat","w");
    printf("Enter the account no. of the customer you want to delete:");
    scanf("%d",&remittance.account_number);
    while (fscanf(oldrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&adding.account_number,adding.client_name,&adding.client_dob.mm,&adding.client_dob.dd,&adding.client_dob.yy,&adding.client_age,adding.client_address,adding.client_citizenship,&adding.client_phone,adding.client_account_type,&adding.client_amount,&adding.client_deposit.mm,&adding.client_deposit.dd,&adding.client_deposit.yy)!=EOF)
   {
        if(adding.account_number!=remittance.account_number)
            fprintf(newrecord,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,adding.client_phone,adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);

        else
            {test++;
            printf("\nRecord deleted successfully!\n");
            }
   }
   fclose(oldrecord);
   fclose(newrecord);
   remove("record.dat");
   rename("new.dat","record.dat");
   if(test==0)
        {
            printf("\nRecord not found!!\a\a\a");
            deleted_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&exits);

                 if (exits==1)
                    menu();
                else if (exits==2)
                    close();
                else if(exits==0)
                    deleted();
                else
                    {printf("\nInvalid!\a");
                    goto deleted_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&exits);
        system("cls");
        if (exits==1)
            menu();
        else
            close();
        }

}

void see(void)
{
    FILE *openFile;
    int tst=0,rte;
    int options;
    float timer;
    float interests;
    openFile=fopen("record.dat","r");
    printf("Do you want to check by\n1.Account no\n2.Name\nEnter your choice:");
    scanf("%d",&options);
    if (options==1)
    {   printf("Enter the account number:");
        scanf("%d",&checking.account_number);

        while (fscanf(openFile,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&adding.account_number,&adding.client_name,&adding.client_dob.mm,&adding.client_dob.dd,&adding.client_dob.yy,&adding.client_age,&adding.client_address,&adding.client_citizenship,&adding.client_phone,&adding.client_account_type,&adding.client_amount,&adding.client_deposit.mm,&adding.client_deposit.dd,&adding.client_deposit.yy)!=EOF)
        {
            if(adding.account_number==checking.account_number)
            {   system("cls");
                tst=1;

                printf("\nAccount NO.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:P %.2f \nDate Of Deposit:%d/%d/%d\n\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,adding.client_phone,
                adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);
                if(strcmpi(adding.client_account_type,"fixed1")==0)
                    {
                        timer=1.0;
                        rte=9;
                        interests=interest(timer,adding.client_amount,rte);
                        printf("\n\nYou will get P%.2f as interest on %d/%d/%d",interests,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy+1);
                    }
                else if(strcmpi(adding.client_account_type,"fixed2")==0)
                    {
                        timer=2.0;
                        rte=11;
                        interests=interest(timer,adding.client_amount,rte);
                        printf("\n\nYou will get P.%.2f as interest on %d/%d/%d",interests,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy+2);

                    }
                else if(strcmpi(adding.client_account_type,"fixed3")==0)
                    {
                        timer=3.0;
                        rte=13;
                        interests=interest(timer,adding.client_amount,rte);
                        printf("\n\nYou will get P.%.2f as interest on %d/%d/%d",interests,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy+3);

                    }
                 else if(strcmpi(adding.client_account_type,"saving")==0)
                    {
                        timer=(1.0/12.0);
                        rte=8;
                        interests=interest(timer,adding.client_amount,rte);
                        printf("\n\nYou will get P.%.2f as interest on %d of every month",interests,adding.client_deposit.dd);

                     }
                 else if(strcmpi(adding.client_account_type,"current")==0)
                    {

                        printf("\n\nYou will get no interest\a\a");

                     }

            }
        }
    }
    else if (options==2)
    {   printf("Enter the name:");
        scanf("%s",&checking.client_name);
        while (fscanf(openFile,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d",&adding.account_number,adding.client_name,&adding.client_dob.mm,&adding.client_dob.dd,&adding.client_dob.yy,&adding.client_age,adding.client_address,adding.client_citizenship,&adding.client_phone,adding.client_account_type,&adding.client_amount,&adding.client_deposit.mm,&adding.client_deposit.dd,&adding.client_deposit.yy)!=EOF)
        {
            if(strcmpi(adding.client_name,checking.client_name)==0)
            {   system("cls");
                tst=1;
                printf("\nAccount No.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$%.2f \nDate Of Deposit:%d/%d/%d\n\n",adding.account_number,adding.client_name,adding.client_dob.mm,adding.client_dob.dd,adding.client_dob.yy,adding.client_age,adding.client_address,adding.client_citizenship,adding.client_phone,
                adding.client_account_type,adding.client_amount,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy);
                if(strcmpi(adding.client_account_type,"fixed1")==0)
                    {
                        timer=1.0;
                        rte=9;
                        interests=interest(timer,adding.client_amount,rte);
                        printf("\n\nYou will get P.%.2f as interest on %d/%d/%d",interests,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy+1);
                    }
                else if(strcmpi(adding.client_account_type,"fixed2")==0)
                    {
                        timer=2.0;
                        rte=11;
                        interests=interest(timer,adding.client_amount,rte);
                        printf("\n\nYou will get P.%.2f as interest on %d/%d/%d",interests,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy+2);

                    }
                else if(strcmpi(adding.client_account_type,"fixed3")==0)
                    {
                        timer=3.0;
                        rte=13;
                        interests=interest(timer,adding.client_amount,rte);
                        printf("\n\nYou will get P.%.2f as interest on %d/%d/%d",interests,adding.client_deposit.mm,adding.client_deposit.dd,adding.client_deposit.yy+3);

                    }
                 else if(strcmpi(adding.client_account_type,"saving")==0)
                    {
                        timer=(1.0/12.0);
                        rte=8;
                        interests=interest(timer,adding.client_amount,rte);
                        printf("\n\nYou will get P.%.2f as interest on %d of every month",interests,adding.client_deposit.dd);

                     }
                 else if(strcmpi(adding.client_account_type,"current")==0)
                    {

                        printf("\n\nYou will get no interest\a\a");

                     }

            }
        }
    }


    fclose(openFile);
     if(tst!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            see_inv:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&exits);
              system("cls");
                 if (exits==1)
                    menu();
                else if (exits==2)
                    close();
                else if(exits==0)
                    see();
                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_inv;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&exits);}
        if (exits==1)
        {
            system("cls");
            menu();
        }

        else
           {

             system("cls");
            close();
            }

}


void close(void)
{
    printf("\n\n\n\nThis C Programming Mini Project is developed by ITSOURCECODE TEAM!");
    }


void menu(void)
{   int options;
    system("cls");
    system("color 4e");
    printf("\n\n\t\t\tCLIENT ACCOUNT BANKING MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Create new account\n\t\t2.Update information of existing account\n\t\t3.For transactions\n\t\t4.Check the details of existing account\n\t\t5.Removing existing account\n\t\t6.View customer's list\n\t\t7.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&options);

    system("cls");
    switch(options)
    {
        case 1:new_accounts();
        break;
        case 2:update();
        break;
        case 3:transact();
        break;
        case 4:see();
        break;
        case 5:deleted();
        break;
        case 6:view_list();
        break;
        case 7:close();
        break;

    }



}
int main()
{
    char pass[15],password[15]="itsourcecode";
    int x=0;
    printf("\n\n\t\tEnter the password to login:");
    scanf("%s",pass);
    /*do
    {
    //if (pass[i]!=13&&pass[i]!=8)
        {
            printf("*");
            pass[i]=getch();
            i++;
        }
    }while (pass[i]!=13);
    pass[10]='\0';*/
    if (strcmp(pass,password)==0)
        {printf("\n\nPassword Match!\nLOADING");
        for(x=0;x<=6;x++)
        {
            fordelay(100000000);
            printf(".");
        }
                system("cls");
            menu();
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&exits);
            if (exits==1)
                    {

                        system("cls");
                        main();
                    }

            else if (exits==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;}

        }
        return 0;
}
