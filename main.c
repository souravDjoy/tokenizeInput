/*Assignment 01
Csci3120- Operating Systems
Sourav Das, B00785668
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[200]; //declaring the maximum size of the sentence the user can input
    int i=0; //a counter

    printf("Please Enter Your Sentence:"); //this asks the users to input the sentence
    fgets(sentence,200,stdin); //to read the whole user input sentence


    FILE *fp; //creating the file pointer
    fp= fopen("Output.txt", "w");  //creating the file to write on

    while(sentence[i]!='\0'){  //to check the end of the input sentence

        if(sentence[i]==' '){ //to check if there is a space at this point
            printf("\n"); //if there is a space we prepare to print in the next line
            fprintf(fp, "\n"); //we go to next line on the file as well
        }

        else{ //if there is no space at this point
            printf("%c", sentence[i]); //we keep printing the letters of the word
            fprintf(fp, "%c", sentence[i]); //we print the letters of the word on the file
        }
            i++; //incrementing our counter
    }


    fclose(fp); //closing the file after writing

    return 0;

}

