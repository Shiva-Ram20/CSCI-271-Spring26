/* 
Name: Shiva Ramdath
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Paterns
Program: Infinite Loop Example
Description: receive outputs until the loop is completed
*/

#include <iostream>

using namespace std;

int main(){
    int x = 1;
    
    while (x <= 5){
        cout << x << " ";
        
        x++;
    }

return 0;
}

/* Reflection:
1. This program allows us to receive outputs of 'x' until the condition is satisfied
First, it declares that 'x' is equal to 1 
It then utilizes a while iteration statement with the condition that 'x' is less than or equal to 5
Lastly, it outputs 'x' values whilst updating the value of 'x' after each output
2. I had a bit of difficulty understand the updating statement
3. I reviewed examples utilized in class alongside with the lecture slides
4. No AI usage
5. I learnt that loops can be utilized to receive multiple outputs 
*/