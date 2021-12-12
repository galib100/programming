//fileHandling
///write in the file
#include<stdio.h>
int main(){
 FILE *File;
 File = fopen("test.txt","w");
if(File==NULL){
    printf("file doesn't exit ");

}

else {
        printf("file is opened\n");
        fprintf(File,"hey this is the first write in this file\n");
        fputs("hey this is the first write in this file for fputs \n",File);
printf("write in the file is successfully\n");

}
fclose(File);
}


