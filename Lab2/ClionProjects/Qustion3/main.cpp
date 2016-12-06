// Vaidas Siupienius
//16.11.16

//3) Write a function to print out all occurrences of pairs of any 2 number
// in an array of integers whose product (numbers multiplied together)  is equal to a given Number
//
//printPairs(int product,int arr[],int arrSize)
//
//write the appropriate code that fully tests the function you write.


#include <iostream>
#include <array>

void printPairs(int product, int arr[], int arrSize){
int num,divider,i=0,j=0, position=0;
char numList[20];
    while(i<arrSize){
        num=arr[i];
        // getting numbers which is dividing product number
        if (product%num==0){
            divider=product/num;
            // checking is the divider is in the array
            for (j=0;j<arrSize;j++){
                if(divider==arr[j]){
                    // return only one pair: if 4and 5 and 5 and 4 returns only 4and 5 pair
                    while(num<=divider){
                        std::cout << product << "is vivisible by"<< num <<" and "<< divider << std::endl;
                        break;
                    }
                }
            }
        }
        i++;
    }
}
int main() {
    const int MAX=10;
    int numbers[MAX]={25,2,3,4,5,6,7,8,9,1};
    int productNumber=25;

printPairs(productNumber,numbers,MAX);
    return 0;
}

