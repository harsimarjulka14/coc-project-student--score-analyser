#include<stdio.h>
float average(int marks[], int n);// function declaration
int highest(int marks[], int n);// function declaration
int lowest(int marks[], int n);// function declaration
int main()
{
    int n;
    printf("enter the number of students whose marks are to between entered: ");
    scanf("%d",&n);
    int marks[n];// array for n students defined
    printf("enter marks of  %d students:\n",n);
    for(int i=0; i<n; i++)// loop to store marks in array
    {
        scanf("%d",&marks[i]);
    }
        printf("average marks in class are %f\n",average(marks,n));// to print average marks
        printf("highest marks in class are %d\n",highest(marks,n));// to print highest marks
        printf("lowest marks in class are %d\n",lowest(marks,n));// to print lowest marks
        return 0;
}
float average(int marks[], int n)// function to calculate average
{
    float sum = 0;
    float mean;
    for(int i=0; i<n; i++)//loop to sum  the marks  in array of marks
    {
     sum = sum + marks[i];
    }
     mean = sum/n;
    return mean;
}
int highest(int marks[], int n)// function to calculate highest marks
{
     int highest= marks[0];
    for(int i=1; i<n; i++)// loop to find highest marks  in array of marks
    {
        if(marks[i]>highest)
        {
            highest = marks[i];
        }
    }
    return highest ;
}
int lowest(int marks[], int n)// function to calculate lowest marks
{
    int lowest= marks[0];
    for(int i=1; i<n; i++)//loop to find highest marks  in array of marks
    {
            if(marks[i]<lowest)
            {
                lowest = marks[i];
            }  
    }
    return lowest;
}