#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
};

int main() {
    int n;
    printf("enter the no of Student You Want to Enter");
    scanf("%d",&n);
    struct student s[n];
    int i,choice;
    char ch;
    printf("Enter information of students:\n");
      FILE *fp;
      fp=fopen("student.txt","w");
    // storing information
    fprintf(fp,"roll no\tfirst name\tmarks\n");
    for (i = 0; i < n; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s",s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
          //fprintf(fp,"%d\n%s\n%s\n%f",s.rno,s.name,s.add,s.per);
          fprintf(fp,"%d\t%s\t   %f\n",s[i].roll,s[i].firstName,s[i].marks);
    }
    fclose(fp);
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


    
       return 0;
}
