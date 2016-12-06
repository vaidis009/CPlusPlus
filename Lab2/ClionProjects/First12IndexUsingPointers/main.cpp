//Vaidas Siupienius
//08/11/16
//lab2
//Write a program that contains an array of 20 integer values. The program will
//        find and display the index of the first occurrence and the last occurrence of the number 12.
//Your program should print the value -1  if the number 12 is not found. The index is array offset for the item.
//For example if the 8th data item is the only 12,
//the index value 7 should be displayed for the first and last occurrence.
//The program must contain only one loop.
//
//) Amend program 1 to only use pointer arithmetic to access the values in
// the the array and to loop through the array .
//

#include <iostream>

int main() {
    int firstNum=-1,lastNum=-1;
    int arrOfNumber[20] ={1,3,24,565,7,89,12,34,23,4,5,7,7,0,75,12,23,87,65};

    int *ptr;
    ptr=&(arrOfNumber[0]);
    int i;
for(i=0;i<20;i++){
   if (*ptr==12 && firstNum==-1){
       firstNum=i;
       lastNum=i;
    }
    if (*ptr==12){
        lastNum=i;
   }
    *ptr++;
}
    std::cout <<"first number 12 in index: "<<firstNum<<"\n";
    std:: cout<<"last number 12 in index: " <<lastNum<< "\n";
    return 0;
}