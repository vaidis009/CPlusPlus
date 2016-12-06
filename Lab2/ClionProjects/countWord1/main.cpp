//Vaidas Siupienius
// 17.11.16
//4)Write a program which will input a string from the keyboard,
//and output the number of separate words, where a word is one or more characters separated by spaces.
//Your program should only count as words groups of characters in the ranges A..Z and a..z.
//For example the characters “      dd  3  f4  fff  ff2 dd      ” would return a word count of 2.

#include <iostream>
#include  <array>
// checking is it letters in the word and return true if all is letters and return false if not all is letters
bool CheckIsItWord(char letter){
    if (isalpha(letter)){
          return true;
    }
    else {
        return false;
    }
}
int main() {
   // char text[100];
   char text[] = "h ismn s2 345 bfdr       vfd  ";
    int i = 0, wordCount = 0, letters=0, starts=0;
    std::cout <<"Please enter text"<< std::endl;
//    while(text[i]!=EOF){
//        text[i] =getchar();
//        //std::cout<< text[i];
//        i++;
//    }
    int sizeofArray= sizeof(text);
    bool isItLetter = false;
// removing extra spaces
    for(i=0;i<sizeofArray; i++){
        if (text[i]== ' ' && text[i+1]==' '){
            while(text[i]!=EOF){
                text[i]=text[i+1];
                i++;
                }
            sizeofArray--;
            i=0;
        }
    }
    std::cout << text<< "\n";
    for(i=0;i<sizeofArray; i++){
        if(text[i]!= ' ' && text[i]!= EOF){
             isItLetter = CheckIsItWord(text[i]);
             if (isItLetter){
               letters++;
               starts++;
             }
                 // if not letter increse only begining
            else{
                 starts++;
             }
        }
        else {
            // if equals thats mean all letters
              if (letters==starts){
                  wordCount++;

              }
            // reset to 0 after space and starting again
            letters=0;
            starts=0;
        }
    }
    std:: cout << " Total words: "<< wordCount;
    return 0;
}