#include <stdio.h>
#include <string.h>
#include "libus.h"

char lib[];
char chr;
char a[];
char y[];
char n[];
char word[255];
char *words[255];

int i = 0;
int k = 0;
int count_lines = 0;
int choice;

struct book {
    char *author;
    char *name;
    char *year;
};

int main(void)
{
    FILE *file;
    
    file = fopen("lib.txt", "r");
    
    fscanf(file,"%[^,]",lib);
    
    for(int i=0; lib[i]!='\0'; i++)
    {
      if(lib[i]=='\n')
      {
         count_lines++;
      }
    }
    char *lines[count_lines+1];
    struct book library[count_lines+1];
    
    lines[0] = strtok(lib,"\n");
    
    
    while (lines[i]!=NULL){
        i++;
        lines[i] = strtok(NULL,"\n");
    }
    i = 0;
    
    
    while (lines[i]!=NULL){
        library[i].author = strtok(lines[i],"_");
        library[i].name = strtok(NULL,"_");
        library[i].year = strtok(NULL,"_");
        
        i++;
    }
    while (1){
        k = 0;
        printf("Find book:\n1.by name\n2.by author\n3.by year\n4.by keyword\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("name: ");
                scanf(" %[^\n]", a);
                for (int i = 0; i < count_lines; i++){
                    if (!strcmp(a, library[i].name)){
                                    printf("%s by %s published in %s\n", library[i].name, library[i].author, library[i].year);
                                    k++;
                                    }
                                
                            }
                if (k==0){
                    printf("no books found\n");
                }
                else{
                    printf("%d books found!\n", k);
                }
               
                break;
                
                
            case 2:
                printf("author: ");
                scanf("%s", a);
                for (int i = 0; i < count_lines; i++){
                    if (!strcmp(a, library[i].author)){
                                    printf("%s by %s published in %s\n", library[i].name, library[i].author, library[i].year);
                                    k++;
                                    }
                                
                            }
                if (k==0){
                    printf("no books found\n");
                }
                else{
                    printf("%d books found!\n", k);
                }
                break;
            case 3:
                printf("year: ");
                scanf("%s", a);
                for (int i = 0; i < count_lines; i++){
                    if (!strcmp(a, library[i].year)){
                        printf("%s by %s published in %s\n", library[i].name, library[i].author, library[i].year);
                        k++;
                                    }
                                
                            }
                if (k==0){
                    printf("no books found\n");
                }
                else{
                    printf("%d books found!\n", k);
                }
                break;
            case 4:
                k = 0;
                printf("keyword: ");
                scanf("%s", a);
                printf("scanned!\n");
                for (int i = 0; i < count_lines; i++){
                    if (strstr(library[i].name,a)){
                        printf("%s by %s published in %s\n", library[i].name, library[i].author, library[i].year);
                    }
                                
                }


                break;
           
                
                
            default: printf("error: choose option 1-5");
                
            }
    }
    
        
        
        
        
    
            

      
}

