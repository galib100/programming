#include<stdio.h>
int main(){
FILE *file;
file = fopen("test.txt","r");
char readDoc [255];
if(file==NULL){
    printf("failed to opend\n");
}
else{
    printf("file is successfully opened\n");
}
//fgets(readDoc,250,file);
//printf(" this is read by fgets::: %s\n",readDoc);
fscanf(file,"%s",readDoc);
printf("this is read by fscanf::: %s\n",readDoc);
fclose(file);


}
