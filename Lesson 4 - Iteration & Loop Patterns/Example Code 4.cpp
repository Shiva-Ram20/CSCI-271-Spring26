/* 
Name: Shiva Ramdath
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Paterns
Program: Counting from 1 to 10
Description: receive outputs from 1-10
*/

#include <iostream>

using namespace std;

int main(){
    for (unsigned int i = 1; i <= 10; ++i)
    {
        cout << i << " ";
    }

return 0;
}

/* Reflection:
1. This program allows us to receive outputs of 1-10
It utilizes a for iteration statement with an initialization of 'i' is equal to 1 and not negative, a condition of 'i' is less than or equal to 10 and a pre-increment where 'i' is increased first by 1, then the value is reused.
It then outputs the 'i' values
2. I had a bit difficulty in understanding the usage of ++i
3. I reviewed examples utilized in class alongside with the lecture slides
4. Used ChatGPT to explain the different cases to use ++i and i++
5. I learnt that for iteration statements can be used to produce a count from 'x' to 'y'
I also learnt the format for for iteration statements (for (intialization, condition, increment))
I also learnt about unsigned int and the difference between ++i and i++
*/