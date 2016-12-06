
// Vaidas Siupienius
// 07.10.2016
// c++ lab 1  question 1

/*Write a program called leapyear.cpp that will input a stream of numbers,
        each corresponding to some year (any value greater than 0 and up to implementation
        defined limits for an int) and outputs the message “this is a leap year” or “this is not a leap
        year” as appropriate. A year is a leap year if it is divisible by 4 and not 100, unless it is also divisible
        by 400. The program will terminate when a zero is input. Keep your code as short, efficient
        and readable as possible. The appropriate error checking must

*/



#include <iostream>
using namespace std;
int year =1;
// checking is the year is leep year
void leapYear(int year){
    if (year%4==0 && year%100!=0 || year%400==0){
        //return true;
        cout << "The year is leap!\n";
    }
    else{
        // return false;
        cout << "The year is NOT leap!\n";
    }
}
// puting input to one integer
int makeNumber(char input){
    while (input!=10){
        year=(year*10)+input-48;
        input= getchar();
    }
    return year;
}

 // main reads input from keyboard.
int main(){
    while (year !=0 ){
        cout << "Please enter the year:\n";
        char input= getchar();
        year = makeNumber(input);
        if (year!=0){
            leapYear(year);
        }
    }
    return 0;
}



