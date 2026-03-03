/* 
Name: Shiva Ramdath
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Paterns
Program: Input Validation Pattern
Description: asks for an input from the user between the range provided
*/

#include <iostream>

using namespace std;

int main(){
    int age;
    cout << "Enter age (1-120): ";
    cin >> age;
    
    while (age < 1 || age > 120){
        cout << "Invalid. Please enter a realistic age: ";
        cin >> age;
    }

return 0;
}

/* Reflection:
1. This program allows us to receive an input from the user between the range provided. If an invalid input is provided, the program will re-ask for a realistic input.
It starts by declaring 'age'
It then prints and asks for an input between 1-120 
It utilizes a while statement with a condition that if 'age' is less than 1 or greater than 120, it would print and ask for a realisitc input from the user
2. I had no difficulty in understanding or reproducing the code
3. I reviewed examples utilized in class alongside with the lecture slides
4. No AI Usage
5. I learnt that while statements can be used to check the user's input and could be utilize to re-ask for a realistic input. 
*/