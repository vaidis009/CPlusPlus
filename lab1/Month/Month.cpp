/*
 * Vaidas Siupienius
 * c00197220
 * 19/10/16
 *
 *3)  Write a program that takes as input the number of a month and outputs the name of that month.
 * (Write two versions:  * one  with an if statement and one with a switch statement).
 *
 */
#include <iostream>
using namespace std;
int month;

// function months using switch statement**************************
void monthFunction(int month) {

    switch(month) {
        case 1 :
            cout << "January";
            break;
        case 2 :
            cout << "February";
            break;
        case 3 :
            cout << "March";
            break;
        case 4 :
            cout << "April";
            break;
        case 5 :
            cout << "May";
            break;
        case 6 :
            cout << "June";
            break;
        case 7 :
            cout << "July";
            break;
        case 8 :
            cout << "August";
            break;
        case 9 :
            cout << "September";
            break;
        case 10 :
            cout << "October";
            break;
        case 11 :
            cout << "November";
            break;
        case 12 :
            cout << "December";
            break;
        default:
            cout <<"Please enter valid month!!!";
    }
}
// month function using if statement*************************
void otherMonthFfunction(int month){

    if (month==1){
        cout << "January";
    }
    else if(month==2){
        cout << "February";
    }
    else if(month == 3){
        cout << "March";

    }
    else if(month == 4){
        cout << "April";

    }
    else if(month == 5){
        cout << "May";

    }
    else if(month == 6){
        cout << "June";

    } else if(month == 7){
        cout << "July";

    } else if(month == 8){
        cout << "August";

    }
    else if(month == 9){
        cout << "September";

    }
    else if(month ==10){
        cout << "October";

    }
    else if(month == 11){
        cout << "November";

    }
    else if(month == 12){
        cout << "December";

    }
    else{
        cout << "Please enter valid Month";
  }
}
// main******************************************************
// puting input to one integer
int makeNumber(char input){
    while (input!=10){
        if (input>47&&input<58){
            month=(month*10)+input-48;
        }
        input= getchar();
    }
    return month;
}
// main reads input from keyboard.
int main(){
    //user input
    cout << "Please enter the number of month:";
    char input= getchar();
    month = makeNumber(input);

    //output
    cout << "\n Using switch statement:\n ";
    monthFunction(month);

    cout << "\n Using IF statement: \n";
    otherMonthFfunction(month);
    return 0;
}