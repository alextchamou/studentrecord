#include<stdio.h>
#include<stdlib.h>
typedef struct student student ;//allias a la structure student 
struct student{
    char ID[15];
    char name[20];
    char vorname[20];
    char add[20];//adresse 
    int Class;
    long unsigned int telefonnummer;
};
student stu;
void get_password(char* pass)
{
    char temp_passP[25];
    int i=0 ;
    while(1)
    {
        temp_passP[i]=getch();
        if(temp_passP[i]==13){break;}
        else if(temp_passP[i]==8)
        {
            if(i!=0)
        {
             printf("\b \b");
             i--;
        }
        else{printf("\a");}
        }
        else
        {
            printf("*");
            *(pass+i)=temp_passP[i];
            i++;
        }
        *(pass+i)='\0';
    }
}
void use_passs_field()
{
    int use
    char pass[10];
     printf("\n The Database is password protected.\n");
     printf("\nEnter valid username and password\n");
     printf("USERNAME:- \n");
     printf("PASSWORD:- \n");
     scanf("%d",use);
    get_password(pass);
     }
     void add_student(){
         //find a way to clean the window
         print("Add Record");
         FIle *fp;
         fp=fopen("record.txt","ab+");
         if(fp==NULL)
         {
             printf("\nEroor in Opening file\n Make sure your file is not write protected");
         }
         else{
             fflush(stdin);
             printf("\nID: ");fgets(stu.ID,sizeof(ID),stdin);
             printf("\nAdress: ");fgets(stu.add,sizeof(stu.name),stdin);
             printf("\nParent's name: ");fgets(stu.vorname,sizeof(stu.vorname),stdin);
             printf("\nClass : ");scanf("%d",&stu.class);
             printf("\nPhone Number: ");scanf("%ld",&stu.telefonnummer);
             printf("\nThe record is sucessfully added");
         }
         fclose(fp);//fermeture du fichier fp
         return ;
         }
         void_search_student(){
Printf("\nsearch Record");
char s_id[15];
int isFound=0;
printf("\nEnter the ID to search: ");fflush(stdin);
fgets(s_id,sizeof(s_id),stdin);
File *fp;
fp=fopen("record.txt","rb");
while()

         }
     }