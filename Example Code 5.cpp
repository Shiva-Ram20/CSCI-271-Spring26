/* 
Name: Shiva Ramdath
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Paterns
Program: Counting down from 10 to 1
Description: receive outputs from 10-1
*/

#include <iostream>

using namespace std;

int main(){
    for (int i = 10; i >= 1; --i)
    {
        cout << i << " ";
    }

return 0;
}

/* Reflection:
1. This program allows us to receive outputs of 10-1
It utilizes a for iteration statement with an initialization of 'i' is equal to 10, a condition of 'i' is less than or equal to 1 and a pre-increment where 'i' is decreased first by 1, then the value is reused.
It then outputs the 'i' values
2. I had no difficulty in understanding or reproducing the code
3. I reviewed examples utilized in class alongside with the lecture slides
4. No AI Usage
5. I learnt that for iteration statements can be used to produce a countdown from 'x' to 'y'
*/