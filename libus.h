int i = 0;
int k = 0;
int count_lines = 0;

struct book {
    char *author;
    char *name;
    char *year;
};


int name(char *a, struct book *library){
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
}


int author(char *a, struct book *library){
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
}

int year(char *a, struct book *library){
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
}

int key_word(char *a, struct book *library){
    for (int i = 0; i < count_lines; i++){
                    if (strstr(library[i].name,a)){
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
}