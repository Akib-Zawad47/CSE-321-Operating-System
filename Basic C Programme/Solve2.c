// Write a program that allows you to erase multiple spaces in a text file. Then rewrite the sentence without extra spaces in another text file.
// Input:
// I      love         Python          Programming.
// Output:
// I love Python Programming.

// =========================================================


#include <stdio.h>


int main(){

    FILE *fi, *fo;
    fi = fopen("input_text2.txt", "r");
    fo = fopen("output_text2.txt", "w");


    if(fi == NULL || fo == NULL){
        printf("File Not Found\n");
        return 0;
    }

    char ch;
    int spc_cnt = 0;

    ch = fgetc(fi);
    while(ch != EOF){
        if(ch == ' '){
            spc_cnt++;
            if(spc_cnt == 1){
                fputc(ch, fo);
            }
        }
        else{
            fputc(ch,fo);
            spc_cnt = 0;
        }
        ch = fgetc(fi);
    }

    fclose(fi);
    fclose(fo);

    printf("File was written removing the extra spaces successfully\n");

    return 0;
}
