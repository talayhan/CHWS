/*################################################################*/
/* HW01_Samet_Sait_Talayhan_101044044_part1.c                     */
/* ----------------------                                         */
/* Created on March 1, 2013, 9:49 PM by Samet Sait Talayhan.      */ 
/*                                                                */
/* Description                                                    */
/* ----------------------                                         */
/* This program calculates the salaries of 5 employees  according */
/* to particular formulation. Program read the parameters 
/* "workingYears",
/* "numberOfProjects",
/* "performancePoint",
/* "departmentMultiplier" from the text files prepared for each   *
/* employee specific name(employee1.txt, employee2.txt vs..).     */
/*                                                                */
/* And Program take "Overtime Working Hours" from the console.    */
/* The results print the file "salaries.txt".                     */
/* ----------------------                                         */
/*                                                                */
/*################################################################*/

/*################################################################*/
/*                           Includes                             */
/*################################################################*/
#include <stdio.h>
#include <math.h>

/*################################################################*/
/*                           Defines                              */
/*################################################################*/
#define WORKING_HOURS 184	
#define BHP 6	/* Base Hourly Payment */ 
#define ADDITIONAL_PAY_MULT 1.5
#define LOPM 0.8 /* Linear Overtime Payment Multiplier */
#define QOPM 0.15 /* Quadratic Overtime Payment Multiplier */
#define WDOM 2	/* Weekday Overtime Multiplier */
#define WEOM 3	/* Weekend Overtime Multiplier */

/*################################################################*/
/* int main()                                                     */
/* ----------                                                     */
/* Return                                                         */
/* ----------                                                     */
/*0 on success                                                    */
/*################################################################*/
int
main(void) 
{
    double salary = 0,      /* The total salary of the employee. */
           normalPayment = 0, overtimePayment = 0,
           salaryPerHour = 0,
           experiencePoint = 0,
           opb = 0; /* Overtime Payment Base */
    int    workingYears = 0,   /* Below variables get from the text file. */
           performancePoint = 0,    
           departmentMultiplier = 0,
           numberOfFinishedProjects = 0,
           weo = 0, /* gets Weekend Overtime from the user via console */
           wdo = 0; /* gets Weekday Overtime from the user via console */
    FILE *inFileForEmployee1,       /* Pointer to input file */
         *inFileForEmployee2,
         *inFileForEmployee3,
         *inFileForEmployee4,
         *inFileForEmployee5,
         *outFile;                  /* Pointer to output file */
    
    /* Open the input and output files. */
    inFileForEmployee1 = fopen("employee1.txt","r");
    inFileForEmployee2 = fopen("employee2.txt","r");
    inFileForEmployee3 = fopen("employee3.txt","r");
    inFileForEmployee4 = fopen("employee4.txt","r");
    inFileForEmployee5 = fopen("employee5.txt","r");
    outFile = fopen("salaries.txt","w");
    
    /* Get the variables value from the .txt file for
     * EMPLOYEE1
     */
    fscanf(inFileForEmployee1,"%d",&workingYears);
    fscanf(inFileForEmployee1,"%d",&numberOfFinishedProjects);
    fscanf(inFileForEmployee1,"%d",&performancePoint);
    fscanf(inFileForEmployee1,"%d",&departmentMultiplier);
    
    /* Gets from the user Overtime Working Hours */
    printf("Enter the Overtime Working Hour of Weekday for Employee1:");
    scanf("%d",&wdo);
    printf("Enter the Overtime Working Hour of Weekend for Employee1:");
    scanf("%d",&weo);
    
    /* Calculate Salary according to the below formulations 
     * for Employee1  */
    experiencePoint = log2(workingYears * numberOfFinishedProjects);
    opb = WEOM * weo + WDOM * wdo;
    salaryPerHour = BHP + ADDITIONAL_PAY_MULT * departmentMultiplier *
            (experiencePoint + performancePoint);
    overtimePayment = (QOPM * (opb * opb) + LOPM * opb) * salaryPerHour;
    normalPayment = salaryPerHour * WORKING_HOURS;
    salary = normalPayment + overtimePayment;

    /* Print the salary of Employee1 "to salaries.txt" */
    fprintf(outFile,"|---------------------------------------|\n");
    fprintf(outFile,"| Salary of the Employee1 :$%.2f    |\n",salary);
    fprintf(outFile,"|---------------------------------------|\n");
    
    /* Get the variables value from the .txt file for
     * EMPLOYEE2
     */
    fscanf(inFileForEmployee2,"%d",&workingYears);
    fscanf(inFileForEmployee2,"%d",&numberOfFinishedProjects);
    fscanf(inFileForEmployee2,"%d",&performancePoint);
    fscanf(inFileForEmployee2,"%d",&departmentMultiplier);
    
    /* Gets from the user Overtime Working Hours */
    printf("Enter the Overtime Working Hour of Weekday for Employee2:");
    scanf("%d",&wdo);
    printf("Enter the Overtime Working Hour of Weekend for Employee2:");
    scanf("%d",&weo);
    
    /* Calculate Salary according to the below formulations 
     * for Employee2  */
    experiencePoint = log2(workingYears * numberOfFinishedProjects);
    opb = WEOM * weo + WDOM * wdo;
    salaryPerHour = BHP + ADDITIONAL_PAY_MULT * departmentMultiplier *
            (experiencePoint + performancePoint);
    overtimePayment = (QOPM * (opb * opb) + LOPM * opb) * salaryPerHour; 
    normalPayment = salaryPerHour * WORKING_HOURS; 
    salary = normalPayment + overtimePayment;

    /* Print the salary of Employee2 "to salaries.txt" */
    fprintf(outFile,"|---------------------------------------|\n");
    fprintf(outFile,"| Salary of the Employee2 :$%.2f    |\n",salary);
    fprintf(outFile,"|---------------------------------------|\n"); 
    
    /* Get the variables value from the .txt file for
     * EMPLOYEE3
     */
    fscanf(inFileForEmployee3,"%d",&workingYears);
    fscanf(inFileForEmployee3,"%d",&numberOfFinishedProjects);
    fscanf(inFileForEmployee3,"%d",&performancePoint);
    fscanf(inFileForEmployee3,"%d",&departmentMultiplier);
    
    /* Gets from the user Overtime Working Hours */
    printf("Enter the Overtime Working Hour of Weekday for Employee3:");
    scanf("%d",&wdo);
    printf("Enter the Overtime Working Hour of Weekend for Employee3:");
    scanf("%d",&weo);
    
    /* Calculate Salary according to the below formulations 
     * for Employee3  */
    experiencePoint = log2(workingYears * numberOfFinishedProjects); 
    opb = WEOM * weo + WDOM * wdo;  
    salaryPerHour = BHP + ADDITIONAL_PAY_MULT * departmentMultiplier *
            (experiencePoint + performancePoint);
    overtimePayment = (QOPM * (opb * opb) + LOPM * opb) * salaryPerHour;
    normalPayment = salaryPerHour * WORKING_HOURS;
    salary = normalPayment + overtimePayment;

    /* Print the salary of Employee3 "to salaries.txt" */
    fprintf(outFile,"|---------------------------------------|\n");
    fprintf(outFile,"| Salary of the Employee3 :$%.2f     |\n",salary);
    fprintf(outFile,"|---------------------------------------|\n"); 
    
    /* Get the variables value from the .txt file for
     * EMPLOYEE4
     */
    fscanf(inFileForEmployee4,"%d",&workingYears);
    fscanf(inFileForEmployee4,"%d",&numberOfFinishedProjects);
    fscanf(inFileForEmployee4,"%d",&performancePoint);
    fscanf(inFileForEmployee4,"%d",&departmentMultiplier);
    
    /* Gets from the user Overtime Working Hours */
    printf("Enter the Overtime Working Hour of Weekday for Employee4:");
    scanf("%d",&wdo);
    printf("Enter the Overtime Working Hour of Weekend for Employee4:");
    scanf("%d",&weo);
    
    /* Calculate Salary according to the below formulations 
     * for Employee4  */
    experiencePoint = log2(workingYears * numberOfFinishedProjects);
    opb = WEOM * weo + WDOM * wdo; 
    salaryPerHour = BHP + ADDITIONAL_PAY_MULT * departmentMultiplier *
            (experiencePoint + performancePoint); 
    overtimePayment = (QOPM * (opb * opb) + LOPM * opb) * salaryPerHour;
    normalPayment = salaryPerHour * WORKING_HOURS; 
    salary = normalPayment + overtimePayment;

    /* Print the salary of Employee4 "to salaries.txt" */
    fprintf(outFile,"|---------------------------------------|\n");
    fprintf(outFile,"| Salary of the Employee4 :$%.2f    |\n",salary);
    fprintf(outFile,"|---------------------------------------|\n");

    
    /* Get the variables value from the .txt file for
     * EMPLOYEE5
     */
    fscanf(inFileForEmployee5,"%d",&workingYears);
    fscanf(inFileForEmployee5,"%d",&numberOfFinishedProjects);
    fscanf(inFileForEmployee5,"%d",&performancePoint);
    fscanf(inFileForEmployee5,"%d",&departmentMultiplier);
    
    /* Gets from the user Overtime Working Hours */
    printf("Enter the Overtime Working Hour of Weekday for Employee5:");
    scanf("%d",&wdo);
    printf("Enter the Overtime Working Hour of Weekend for Employee5:");
    scanf("%d",&weo);
    
    /* Calculate Salary according to the below formulations 
     * for Employee5  */
    experiencePoint = log2(workingYears * numberOfFinishedProjects); 
    opb = WEOM * weo + WDOM * wdo; 
    salaryPerHour = BHP + ADDITIONAL_PAY_MULT * departmentMultiplier *
            (experiencePoint + performancePoint);
    overtimePayment = (QOPM * (opb * opb) + LOPM * opb) * salaryPerHour; 
    normalPayment = salaryPerHour * WORKING_HOURS;  
    salary = normalPayment + overtimePayment;

    /* Print the salary of Employee5 "to salaries.txt" */
    fprintf(outFile,"|---------------------------------------|\n");
    fprintf(outFile,"| Salary of the Employee5 :$%.2f    |\n",salary);
    fprintf(outFile,"|---------------------------------------|\n");  

      
    fclose(inFileForEmployee1);
    fclose(inFileForEmployee2);
    fclose(inFileForEmployee3);
    fclose(inFileForEmployee4);
    fclose(inFileForEmployee5);
    fclose(outFile);
    
    return 0;
}
/*################################################################*/
/*       End of HW01_Samet_Sait_Talayhan_101044044_part1.c        */
/*################################################################*/
