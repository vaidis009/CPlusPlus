//Vaidas Siupienius
//08/11/16
//lab2
//1)Write a program that contains an array of 20 integer values. The program will
//        find and display the index of the first occurrence and the last occurrence of the number 12.
//Your program should print the value -1  if the number 12 is not found. The index is array offset for the item.
//For example if the 8th data item is the only 12,
//the index value 7 should be displayed for the first and last occurrence.
//The program must contain only one loop.
//


#include <iostream>

int main() {

    int arrOfNumber[20] ={5,3,12,24,565,7,89,12,34,23,4,5,7,7,0,75,12,23,87,65};

    int i, firstNumber=-1, lastNumber=-1;
    for (i=0;i<=20;i++){
        if (arrOfNumber[i]==12 && firstNumber==-1){
            firstNumber=i;
            lastNumber=i;
        }
        else if (arrOfNumber[i]==12 ){
            lastNumber=i;
        }
    }
    std::cout  << firstNumber<< std::endl;
    std::cout  << lastNumber<< std::endl;
    return 0;
}