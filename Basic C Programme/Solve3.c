// Take a string input from the user and find out whether it is a palindrome using pointers. 
// Sample Input:
// AAABBAAA
// AABBABA
// aabcbaa
// Sample Output:
// Palindrome
// Not Palindrome
// Palindrome

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char ch[100];

    printf("Enter the string: \n");
    scanf("%s", ch);

    int len = strlen(ch);

    int index1 = 0;
    int index2 = len-1;

    

    while(index1 < index2){
        if(ch[index1] != ch[index2]){
            printf("Not Palindrome\n");
            return 0;
        }
        index1++;
        index2--;
    }
    printf("Palindrome\n");

    return 0;
}


