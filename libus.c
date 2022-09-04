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


int choice;





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
                name(a, &library);
               
                break;
                
                
            case 2:
                printf("author: ");
                scanf("%s", a);
                author(a, &library);
                break;
            case 3:
                printf("year: ");
                scanf("%s", a);
                year(a, &library);
                break;
            case 4:
                printf("keyword: ");
                scanf("%s", a);
                key_word(a,&library);


                break;
           
                
                
            default: printf("error: choose option 1-4\n");
                
            }
    }
    
        
        
        
        
    
            

      
}

