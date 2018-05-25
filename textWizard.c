#include <stdio.h>
#include <string.h>

//“Honor Pledge: I pledge that I have neither given nor received any help on this assignment"

void reverseWord(char [], int);

//temporary placeholder variable
char a;
//variable to keep track of the position in the array
int place;
//global variable to keep track of the length of the array
int size;

// This function uses recursion to reverse a word in C.
void reversedWord (char input [], int size) {

    //for loop runs through the word swapping the charcters
    for (place = 0; place < size; place++) {

      //swapping the characters using temp variable
      a = input[place];
      input[place] = input[size-place];
      input[size-place] = a;

      //decrement the size of the word by 1
      size--;

      //recursive function, decrement size by one
      reversedWord(input + 1, size - 1);
  }

}

int main ()
{

//initialized the variable answer to 'y' so that the program runs the loop the
//first time
    char answer = 'y';

    printf("Welcome to my word inverter! \n");

//all of the code is then stored in this while loop and will keep running
//each time the user enters 'y'
while(answer == 'y' || answer == 'Y') {
//Create an array for input
    char word [100];

//Ask for a word to be reversed from the user, save it in the array 'word'
    printf("Please enter a word to be reversed: \n");
    scanf("%s", word);

//find the length of the string and save it in the variable length
    size = strlen(word);

//Call the function reverseWord and then pass word and size as parameters
//I also said size - 1, because it gives the length of the string WITHOUT the null character
    reversedWord(word, size - 1);

//Prints final reversed word
    printf("%s\n", word);

//Asks user if they would like to repeat the program
    printf("Would you like to reverse a word again? (y/n): ");
    scanf(" %c", &answer);

  }

}
