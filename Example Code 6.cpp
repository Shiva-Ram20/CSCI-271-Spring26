/* 
Name: Shiva Ramdath
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Paterns
Program: Summing Even Numbers
Description: sum even numbers from 2 to 20
*/

#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    
    for (int i = 2; i <= 20; i += 2){
        sum += i;
    }
    cout << "Sum is "<< sum;

return 0;
}

/* Reflection:
1. This program allows us to receive the sum of all even numbers between 2 and 20
It declares that 'sum' is equal to 0.
It utilizes a for iteration statement with an initialization of 'i' is equal to 2, a condition that 'i' is less than or equal to 20 and an increment of 2
It then takes the sum and adds 'i' or 2 to it. Lastly, it produces the sum for us.
2. I had no difficulty in understanding or reproducing the code
3. I reviewed examples utilized in class alongside with the lecture slides
4. No AI Usage
5. I learnt that for iteration statements can be utilized to find the sum of numbers
I also learnt that you can set the increments to be different amounts other than +1 or -1
*/