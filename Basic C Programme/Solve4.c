// A company named Sheba.xyz has recently moved from their old domain to a new domain. 
// However, a lot of the company email addresses are still using the old one (employeeName@kaaj.com). 
// Write a function in C that takes the email id of an employee as input and checks whether that 
// email id is updated (I.E. using the new domain employeeName@sheba.xyz) or not. 							
// Sample Input:
// • fahmid@kaaj.com
// • zaki@sheba.xyz
// Sample Output:
// • Email address is outdated
// • Email address is okay

#include <stdio.h>
#include <string.h>

void emailCheck(char email[]){
    char *check = strstr(email, "@sheba.xyz");

    if(check == NULL){

        printf("Email address is outdated");
    }
    else{
        printf("Email address is okay");
    }
}

int main(){
    char email[100];
    printf("Enter E-mail address: \n");
    scanf("%s" , email); 

    emailCheck(email);

    return 0;
}