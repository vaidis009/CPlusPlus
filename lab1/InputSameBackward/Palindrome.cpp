
/*
 * vaidas Siupienius
 * C00197220
 * 19/10/16
 *
 * Write a program that determines if an integer input by the user is
 * the same backwards as forwards. For example 34877843.
 * */



#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
char input;
int inputInteger, integerBackward=0, lastNumber;

void checkingPalindrom(int inputInteger, int integerBackward){
    if (inputInteger==integerBackward){
        cout << "\nThis is palindrome number!!!";
        integerBackward=0;
    }
    else{
        cout  <<"\nThis is NOT palindrome number!!!\n";
        integerBackward=0;
    }
}
// reversing the number
int reverseNumber(int inputInteger){
    while(inputInteger>0){
        lastNumber= inputInteger %10; // getting last number
        integerBackward= (integerBackward*10)+lastNumber; // adding them together
        inputInteger= inputInteger/10;
    }
    cout  << integerBackward;
    return integerBackward;
}

// puting input to one integer
int makeNumber(char input){
    // 10 is the ascii value for enter
    while (input!=10){
        inputInteger=(inputInteger*10)+input-48;
        input= getchar();
   }
    cout << inputInteger<< "\n";
    return inputInteger;
}
// main reads input from keyboard.
int main(){
   // while (inputInteger !=10 ){
        cout << "Please enter the number:\n";
        input= getchar();
        inputInteger = makeNumber(input);
        if (inputInteger!=0){
            integerBackward=reverseNumber(inputInteger);
            checkingPalindrom(inputInteger, integerBackward);
        }
    return 0;
}