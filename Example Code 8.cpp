/* 
Name: Shiva Ramdath
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Paterns
Program: Logic Interrupters
Description: counts until 10 whilst utilizing breaks and continues
*/

#include <iostream>

using namespace std;

int main(){
    for (int i = 1; i <= 10; i++){
        if (i == 3){
            continue;
        }
        if (i == 6){
            break;
        }
        cout << i << " ";
    }

return 0;
}

/* Reflection:
1. This program allows us to receive outputs of 'i' whilst utilizing continues and breaks
It uses a for iteration statement with the initialization of 'i' is equal to 1, the condition of 'i' is less than or equal to 10 and the increment of 'i' in increased by 1 and then the value is reused.
It then utilizes an if statement where if 'i' is equal to 3, it continues without stating 3 
It then utilizes another if statement where if 'i' is equal to 6, it breaks the code
2. I had no difficulty in understanding or reproducing the code
3. I reviewed examples utilized in class alongside with the lecture slides
4. No AI Usage
5. I learnt that for iteration statements can be utilized along with if statements to skip numbers and even break counts
I learnt about using break and continue commands through if statements
*/
