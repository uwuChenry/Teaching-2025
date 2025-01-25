#include <math.h>
#include <iostream>
#include <string>
int name = 1; //positive or negative whole numbers
float name2 = -0.5; //positive or negative decimal numbers
long name3 = 1; 
double name4 = 0.5;
bool name5 = 0; // 0 = false 1 = true

int addTwoIntegers(int num1, int num2){
    return num1+num2;
} 


double addTwoDecimals(double num1, double num2){
    return num1+num2;
}

void doStuff(int num){
    std::cout << num;
    //unlike other functions, u dont need to return anything
    //but see void used alot because it is used to tell ur other robot parts / subsystems to do stuff
}



// for (int i = 0; i < count; i++)
// {
//     /* code */
// }

// while (/* condition */)
// {
//     /* code */
// }


//== equal
//!= not equal
//< less than
//> greater than
//<= less than or equal to
//> greater than or equal to


bool isEvenNumber(int inputNum){
    if (inputNum % 2 == 0) return true;
    return false;
}

void printStuff(double num){
    std::cout << num;
}

//return-type name (param1, param2...){
//   ur code goes here
//   return something 
//}





void printLetterA(){
    std::cout << 'A';
}

int sum(int a, int b, int c){
    int total = a + b + c;
    return total;
}


int factorial(int num){
    int count = 1;
    int product = 1;
    while (count <= num){
        product = product * count;
        count++;
    } 
    return product;
}

void printDifference(int input1, int input2){
    int result1 = factorial(input1);
    int result2 = factorial(input2);
    std::cout << abs(result1 - result2);
}

int main(){
    printDifference(5, 4);
}