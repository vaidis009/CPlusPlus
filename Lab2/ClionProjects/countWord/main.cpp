//Vaidas Siupiunius
// 17.11.16
//4)Write a program which will input a string from the keyboard,
//and output the number of separate words, where a word is one or more characters separated by spaces.
//Your program should only count as words groups of characters in the ranges A..Z and a..z.
//For example the characters “      dd  3  f4  fff  ff2 dd      ” would return a word count of 2.
//
using namespace std;

#include <iostream>
#include  <array>
// checking is it letters in the word and return true if all is letters and return false if not all is letters
bool CheckIsItWord(char word[]){
   int  i=0 , isLetter=0;
    while (word[i])
    {
        if (isalpha(word[i])){
            isLetter++;
        }
        i++;
    }
    if(isLetter==i){
        return true;
    }
    else return false;
}
int main() {
//char  name[]={};
   char name[] = "he ismn s ";

    //std::cout <<"Please enter text"<< std::endl;
    //std::cin.getline(name[i],100);
    int sizeofArray= sizeof(name);
    char wordArr[]={};
    bool isItWord = false;
    int i = 0,  j = 0, wordCount = 0, x;
// removing extra spaces in the string
    std::cout << sizeofArray<< "\n";
    for(i=0;i<sizeofArray; i++){
        if (name[i]== ' ' && name[i+1]==' '){
            while(name[i]!=name[50]){
                    name[i]=name[i+1];
                i++;
                }
            sizeofArray--;
           i=0;

        }
    }

    cout << name<< "\n";

    for(i=0;i<sizeofArray; i++){
        if(name[i]!= ' ' && name[i]!= EOF){
            wordArr[j]=name[i];
            j++;
        }
        else {
            isItWord = CheckIsItWord(wordArr);
            std::cout <<wordArr<< "   ";
           // std::cout <<j<< "   ";
//            for (x=0;x<=j;x++){
//                wordArr[j]=' ';
//                j--;
//            }
            j = 0;
            //std::fill_n(wordArr, 30, 20);

            if (isItWord) {
                wordCount++;
                std::cout << wordCount << "\n";
               // int sz= sizeof(wordArr);

            }
//            for (x=0;x<=j;x++){
//                wordArr[x]=NULL;
//            }
//            j = 0;


        }

    }
    return 0;
}