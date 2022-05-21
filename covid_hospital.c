#include <stdio.h>
#include <string.h>

struct donor
{
    char name[20];
    int age;
    char dob[10];
    char bloodgp[10];
    char phoneno[50];
};

void matching_patient_with_doc();
void database_of_donor_details(char pat_bldgrp[20]);
int main()
{
    char first_name[20],last_name[20];
    char line[30], bldgrp[10],house_no[50],locality[50],city[50];
    int time, d, m, year, n, age;
    printf("Covid Plasma Treatment Centre\n");
    printf("Enter the details of the patient\n");
    printf("Enter the First Name of the patient: ");
    scanf("%s",first_name);
    printf("Enter the Last Name of the patient: ");
    scanf("%s",last_name);
    printf("\n");
    printf("Date of Birth(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d, &m, &year);
    printf("Age of the patient: ");
    scanf("%d", &age);
    printf("Mobile number: ");
    scanf("%d", &n);
    printf("Address Details: \n");
    printf("House No: ");
    scanf("%s",house_no);
    printf("Locality: ");
    scanf("%s",locality);
    printf("City: ");
    scanf("%s",city);
    printf("\n");
    printf("Blood Group of the patient(O+/-,A+/-,B+/-,AB+/-,): ");
    scanf("%s",bldgrp);
    printf("\n");
    printf("In-time of the patient: ");
    scanf("%d", &time);

    // MATCHING PATIENTS IN-TIME WITH THE DOCTOR CURRENTLY ON DUTY
    printf("\n \n MATCHING PATIENTS IN-TIME WITH THE DOCTOR CURRENTLY ON DUTY \n \n");

    matching_patient_with_doc(time);

    // PRINTING DONORS DATABASE AND MATCHING PATIENTS BLOOD GROUP WITH THE DONORS AND PRINTING LIST OF MATCHED DONORS

    database_of_donor_details(bldgrp);

    return 0;
}


void matching_patient_with_doc(int time)
{

    char doc1[50] = "Dr.Rahul";
    char doc2[50] = "Dr.Sushant";
    char doc3[50] = "Dr.Jayant";
    char doc4[50] = "Dr.Pankaj";
    char doc5[50] = "Dr.Riya";
    char doc6[50] = "Dr.Meera";
    char doc7[50] = "Dr.Abhishek";
    char doc8[50] = "Dr.Seema";
    char doc9[50] = "Dr.Shashi";
    char doc10[50] = "Dr.Ashwin";
    char doc11[50] = "Dr.Abhimanyu";
    char doc12[50] = "Dr.Parul";

    int patient_no;

    printf("\n The patient in time 'In hours format' is\n");
    int x=time;
    printf("%d \n",x);

    printf("\n The doctors currently on duty are : \n ");
    if (time<1200)
        {
            printf("%s \n %s \n %s \n %s \n %s \n %s \n",doc1,doc3,doc5,doc7,doc9,doc11);
            if ((time>=0000)&&(time<200))
                {
                    printf("The doctor allotted to patient is %s \n",doc1);
                }
            else  if ((time>=200)&&(time<400))
                {
                    printf("The doctor allotted to patient is %s \n",doc3);
                }
            else  if ((time>=400)&&(time<600))
                {
                    printf("The doctor allotted to patient is %s \n",doc5);
                }
            else  if ((time>=600)&&(time<800))
                {
                    printf("The doctor allotted to patient is %s \n",doc7);
                }
            else  if ((time>=800)&&(time<1000))
                {
                    printf("The doctor allotted to patient is %s \n",doc9);
                }
            else  if ((time>=1000)&&(time<1200))
                {
                    printf("The doctor allotted to patient is %s \n",doc11);
                }

        }

    else if ((time>=1200)&&(time<=2400))
        {
            printf("%s \n %s \n %s \n %s \n %s \n %s \n",doc2,doc4,doc6,doc8,doc10,doc12);
            if ((time>=1200)&&(time<1400))
                {
                    printf("The doctor allotted to patient is %s \n",doc2);
                }
            else  if ((time>=1400)&&(time<1600))
                {
                    printf("The doctor allotted to patient is %s \n",doc4);
                }
            else  if ((time>=1600)&&(time<1800))
                {
                    printf("The doctor allotted to patient is %s \n",doc6);
                }
            else  if ((time>=1800)&&(time<2000))
                {
                    printf("The doctor allotted to patient is %s \n",doc8);
                }
            else  if ((time>=2000)&&(time<2200))
                {
                    printf("The doctor allotted to patient is %s \n",doc10);
                }
            else  if ((time>=2200)&&(time<2400))
                {
                    printf("The doctor allotted to patient is %s \n",doc12);
                }
        }

}


void database_of_donor_details(char pat_bldgrp[20])
{
    printf(" \n \n**             ACCESSING PLASMA DONOR DATABASE                    *\n\n");

    struct donor d1 =  {.name = "Shubhash sharma", .age = 34, .dob = "12/11/1986", .bloodgp = "A+", .phoneno = "8745274936"};
    struct donor d2 =  {.name = "Rajni sharma",    .age = 33, .dob = "12/11/1987", .bloodgp = "A+", .phoneno = "8493672013"};
    struct donor d3 =  {.name = "Govinda goel",    .age = 23, .dob = "12/11/1997", .bloodgp = "A+", .phoneno = "9836723445"};
    struct donor d4 =  {.name = "Rohan Khanna",    .age = 14, .dob = "12/11/2006", .bloodgp = "A-", .phoneno = "9573325785"};
    struct donor d5 =  {.name = "Mayank Bhardawaj",.age = 54, .dob = "12/11/1966", .bloodgp = "A-", .phoneno = "9673576462"};
    struct donor d6 =  {.name = "Virat Singh",     .age = 64, .dob = "12/11/1956", .bloodgp = "B+", .phoneno = "9825745471"};
    struct donor d7 =  {.name = "Dia Mirza",       .age = 33, .dob = "12/11/1987", .bloodgp = "B+", .phoneno = "8923456723"};
    struct donor d8 =  {.name = "Ria Sharma",      .age = 44, .dob = "12/11/1976", .bloodgp = "B+", .phoneno = "9876543902"};
    struct donor d9 =  {.name = "Mia Gulati",      .age = 41, .dob = "12/11/1979", .bloodgp = "AB+", .phoneno = "7893564566"};
    struct donor d10 = {.name = "Harsh Arora",     .age = 25, .dob = "12/11/1995", .bloodgp = "AB+", .phoneno = "9642646466"};
    struct donor d11 = {.name = "Abhay Sharma",    .age = 27, .dob = "12/11/1993", .bloodgp = "B-", .phoneno = "9682483548"};
    struct donor d12 = {.name = "Karan Singh",     .age = 27, .dob = "12/11/1993", .bloodgp = "O-", .phoneno = "9674754468"};
    struct donor d13 = {.name = "Jhalak Mittal",   .age = 64, .dob = "12/11/1956", .bloodgp = "B-", .phoneno = "8327452746"};
    struct donor d14 = {.name = "Harshit Goel",    .age = 23, .dob = "12/11/1997", .bloodgp = "B-", .phoneno = "9763524686"};
    struct donor d15 = {.name = "Tushar Verma",    .age = 22, .dob = "12/11/1998", .bloodgp = "O+", .phoneno = "9547458324"};
    struct donor d16 = {.name = "Mukesh Dixit",    .age = 54, .dob = "12/11/1966", .bloodgp = "O+", .phoneno = "8452745725"};
    struct donor d17 = {.name = "Neha Agarwal",    .age = 33, .dob = "12/11/1987", .bloodgp = "O+", .phoneno = "8634387758"};
    struct donor d18 = {.name = "Anshul Sharma",   .age = 44, .dob = "12/11/1976", .bloodgp = "O-", .phoneno = "8654325400"};
    struct donor d19 = {.name = "Siddhant Vaid",   .age = 27, .dob = "12/11/1993", .bloodgp = "AB-", .phoneno = "6738477736"};
    struct donor d20 = {.name = "Falguni Pathak",  .age = 23, .dob = "12/11/1997", .bloodgp = "O-", .phoneno = "9876234561"};



    // TO ADD MORE DONORS RECORD,USE THE FOLLOWING SNIPPET
    // struct donor dNUMBER = {.name = "           ",  .age =   , .dob = "          ", .bloodgp = "  ", .phoneno = "          "};

     // TO PRINT ADDED DONOR IF ANY USE THE FOLLOWING SNIPPET
    // printf("\n\n Donor NUMBER\n");
    // printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", dNUMBER.name, dNUMBER.bloodgp, dNUMBER.phoneno);



    printf("\n MATCHING DONOR DATABASE WITH PATIENTS REQUIRMENTS \n");

    char A[10]="A+",a[10]="a+";
    char Aa[10]="A-",aA[10]="a-";
    char B[10]="B+",b[10]="b+";
    char Bb[10]="B-",bB[10]="b-";
    char O[10]="O-",o[10]="o-";
    char Oo[10]="O+",oO[10]="o+";
    char AB[10]="AB+",ab[10]="ab+";
    char Ab[10]="AB-",aB[10]="ab-";

    if(strcmp(pat_bldgrp,A)==0||strcmp(pat_bldgrp,a)==0)
    {
        printf("\n\n Donor 1\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d1.name, d1.bloodgp, d1.phoneno);
        printf("\n\n Donor 2\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d2.name, d2.bloodgp, d2.phoneno);
        printf("\n\n Donor 3\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d3.name, d3.bloodgp, d3.phoneno);
    }

    else if (strcmp(pat_bldgrp,Aa)==0||strcmp(pat_bldgrp,aA)==0)
    {
        printf("\n\n Donor 4\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d4.name, d4.bloodgp, d4.phoneno);
        printf("\n\n Donor 5\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d5.name, d5.bloodgp, d5.phoneno);
    }



    else if(strcmp(pat_bldgrp,B)==0||strcmp(pat_bldgrp,b)==0)
    {
        printf("\n\n Donor 6\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d6.name, d6.bloodgp, d6.phoneno);
        printf("\n\n Donor 7\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d7.name, d7.bloodgp, d7.phoneno);
        printf("\n\n Donor 8\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d8.name, d8.bloodgp, d8.phoneno);
    }


    else if(strcmp(pat_bldgrp,Bb)==0||strcmp(pat_bldgrp,bB)==0)
    {
        printf("\n\n Donor 11\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d11.name, d11.bloodgp, d11.phoneno);
        printf("\n\n Donor 13\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d13.name, d13.bloodgp, d13.phoneno);
        printf("\n\n Donor 14\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d14.name, d14.bloodgp, d14.phoneno);
    }


    else if(strcmp(pat_bldgrp,O)==0||strcmp(pat_bldgrp,o)==0)
    {
        printf("\n\n Donor 12\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d12.name, d12.bloodgp, d12.phoneno);
        printf("\n\n Donor 20\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d20.name, d20.bloodgp, d20.phoneno);
        printf("\n\n Donor 18\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d18.name, d18.bloodgp, d18.phoneno);
    }

    else if(strcmp(pat_bldgrp,Oo)==0||strcmp(pat_bldgrp,oO)==0)
    {
        printf("\n\n Donor 15\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d15.name, d15.bloodgp, d15.phoneno);
        printf("\n\n Donor 16\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d16.name, d16.bloodgp, d16.phoneno);
        printf("\n\n Donor 17\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d17.name, d17.bloodgp, d17.phoneno);
    }

    else if(strcmp(pat_bldgrp,AB)==0||strcmp(pat_bldgrp,ab)==0)
    {
        printf("\n\n Donor 9\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d9.name, d9.bloodgp, d9.phoneno);
        printf("\n\n Donor 10\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d10.name, d10.bloodgp, d10.phoneno);
    }

    else if(strcmp(pat_bldgrp,Ab)==0||strcmp(pat_bldgrp,aB)==0)
    {
        printf("\n\n Donor 19\n");
        printf("Name=%s \n Blood Group=%s \nPhone No=%s\n", d19.name, d19.bloodgp, d19.phoneno);
    }

}