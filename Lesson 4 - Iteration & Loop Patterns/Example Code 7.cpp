/* 
Name: Shiva Ramdath
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Paterns
Program: Do...while statements
Description: prints 'x' until the condition is satisfied
*/

#include <iostream>

using namespace std;

int main(){
    int x = 10;
    
    do{
        cout << x;
        x++;
    } while (x <= 5);

return 0;
}

/* Reflection:
1. This program allows us to receive outputs of 'x' until the condition is satisfied
It declares 'x' as equal to 10
It then utilizes a do while statement where it prints the value of 'x', then updates 'x' until 'x' is less than or equal to 5
2. I had no difficulty in understanding or reproducing the code
3. I reviewed examples utilized in class alongside with the lecture slides
4. No AI Usage
5. I learnt that do while statements can be utilized to produce multiple outputs until the final condition is satisfied
I also learnt the format of do while statements
*/