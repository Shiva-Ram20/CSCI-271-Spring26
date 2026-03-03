/* 
Name: Shiva Ramdath
Course: CSCI 271
Lesson: Lesson 4 - Iteration & Loop Paterns
Program: Sentinel-Controlled Iteration
Description: input grades and receive an average at the end
*/

#include <iostream>

using namespace std;

int main(){
    int total = 0, counter = 0, grade;
    
    cout << "Enter grade or -1 to quit: ";
    cin >> grade;
    
    while (grade != -1){
        total += grade;
        counter++;
        
        cout << "Enter next grade or -1 to quit: ";
        cin >> grade;
    }
    if (counter != 0){
        double average = static_cast<double>(total)/counter;
        cout << "Class average is " << average;
    } else {
        cout << "No grades were entered.";
    }

return 0;
}

/* Reflection:
1. This program allows us to input as many grades as necessary and receive an average at the end.
First, it declares 'grade', 'total' is 0 and 'counter' is 0 
It prints the prompt and receives 'grade' inputs
It then utilizes a while iteration statement with the condition that 'grade' does not equal to -1
After every input, it adds the 'grade' to the 'total' and prompts for another input
At the end, it utilizes an if else statement with the initial condition that if the counter does not equal to 0, to find the average
through converting 'total' to type 'double' and dividing it by 'counter'. If the initial condition isn't satisfied, it prints that no grades were entered.
2. I had no difficulty in understanding or reproducing the code
3. I reviewed examples utilized in class alongside with the lecture slides
4. No AI usage
5. I learnt that while iteration statements and if else statements can be utilized together
I also learnt that through setting the condition in the while interation statement to 'grade' instead of 'counter', it allows the user to input infinite grades and control when the program ends. 
*/