// Vaidas Siupienius
// 07.10.16
// first lab second question

/*
 *The C standard library header file <ctype.h> prototypes a number of functions that test and operate upon
 * character type data. Write a program called swopcase.cpp that will input a line of text from the user and
 * return that line with all uppercase letters converted to lowercase, all lowercase letters converted
 * to uppercase and all other characters left unchanged. You may not #include <ctype.h> in your program or use
 * Strings or arrays, you must instead implement any of the functions from it that you need to complete this task.
 * In particular, you’ll probably require:

		int  isupper(int  somechar)	tests if somechar is an upper case character – returns non-zero
						(true) if it is and returns zero (false) if it isn’t
		int  islower(int  somechar)	tests if somechar is a lower case character – returns non-zero
						(true) if it is and returns zero (false) if it isn’t
		int  toupper(int  somechar)	returns uppercase equivalent of somechar if it’s lowercase,
						otherwise it returns somechar
		int  tolower(int  somechar)	returns lowercase equivalent of somechar if it’s uppercase,
						otherwise it returns somechar

 *
 *
 *
 */

#include <iostream>
using namespace std;

string text;
int i;
char letter;

//checking is it uppercase****************************************
bool isUpper(char letter) {

    if (letter >= 65 && letter <= 90)
        return true;
    else{
        return false;
    }
}
//checking is it lowecase*****************************************
bool isLower(char letter){
    if (letter >= 97 && letter <= 122){
        return true;
    }
    else{
        return false;
    }
}
// converting to lowercase******************************************

char toLower(char letter){
    return letter+32;
}
// Changing to uupercase********************************************
char toUpper(char letter){
    return letter-32;
}
// main function**************************************************
int main() {

    // takes user input
    cout << "Please enter text with lowercase and uppercase:\n";
    letter=getchar();

    while (letter!=EOF){
        if (isUpper(letter)==true){
            letter=toLower(letter);

        }
        else if(isLower(letter)==true){
            letter=toUpper(letter);
        }
        cout << letter;
        letter=getchar();
    }
    return 0;
}



