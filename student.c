#include <stdio.h>
#include<stdlib.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
};
   int n;
void create(struct student s[n]){
    int i;
printf("Enter information of students:\n");
      FILE *fp;
      fp=fopen("student.txt","w");
    // storing information
    fprintf(fp,"roll no\t name\tmarks\n");
    for (i = 0; i < n; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s",s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
          //fprintf(fp,"%d\n%s\n%s\n%f",s.rno,s.name,s.add,s.per);
          fprintf(fp,"%d\t%s\t%f\n",s[i].roll,s[i].firstName,s[i].marks);
    }
    fclose(fp);
}
void display(){
int choice;
    int ch;
    printf("Displaying Information:\n\n");
    FILE *fp1;
    fp1=fopen("student.txt","r");
    do 
    {
        /* Read single character from file */
        ch = fgetc(fp1);

        /* Print character read on console */
        putchar(ch);

    } while(ch != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fp1);

}
int main() {
 
    printf("enter the no of Student You Want to Enter");
    scanf("%d",&n);
    struct student s[n];
    create(s);
    display();
    int i,rollno,choice;
      FILE *fptr;
    
    printf("press1 for add\npress2 for delete\npress 3 for exit");
    scanf("%d",&choice);
    while(1){
    switch (choice)
    {
        case 1:
       printf("enter the no of Student You Want to Enter");
    scanf("%d",&n);
      fptr=fopen("student.txt","a");
        printf("enter the details of the student");
        for (i = 0; i < n; ++i) {
        s[i].roll = n + i+1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s",s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
          fprintf(fptr,"%d\t%s\t%f\n",s[i].roll,s[i].firstName,s[i].marks);
          display();
        }
        break;
        case 2:
        
        break;
        case 3:
        exit(0);
        break;
      
    
    default:
    printf("invalid input");
        break;
    }
    }
    return 0;
}
