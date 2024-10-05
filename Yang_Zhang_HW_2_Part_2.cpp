//Yang Zhang
//Homework 2 Part 2
//10.1.2024

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Creating Variables
    float judgeOne; //These float variables are to store the score that any of the six judges give
    float judgeTwo;
    float judgeThree;
    float judgeFour;
    float judgeFive;
    float judgeSix;

    string judgeOneName; //These string variables are for the names of each judge
    string judgeTwoName; 
    string judgeThreeName;
    string judgeFourName;
    string judgeFiveName;
    string judgeSixName;

    double finalScore; //This is the final score after all the math is done.

    //User Input
    cout << "Please input the names of each judge" << endl; //This section is for the judge names
    cout << "Judge One: "; //Prompts the user for the names of each judge
    cin >> judgeOneName; //Stores the name which the user puts in the corresponding variable
    cout << "Judge Two: ";
    cin >> judgeTwoName;
    cout << "Judge Three: ";
    cin >> judgeThreeName;
    cout << "Judge Four: ";
    cin >> judgeFourName;
    cout << "Judge Five: ";
    cin >> judgeFiveName;
    cout << "Judge Six: ";
    cin >> judgeSixName;

    cout << endl; //Seperation Line to make the terminal look better
    cout << "________________________________________" << endl;
    cout << endl;

    cout << "Please insert a number between 0 and 10; Each number should be unique" << endl; //This section is for the scores which each judge gives
    cout << "What score does " << judgeOneName << " give? "; //Prompts user for the score that this each judge gives
    cin >> judgeOne; //Stores the score which the user puts in the corresponding variable
    cout << "What score does " << judgeTwoName << " give? ";
    cin >> judgeTwo;
    cout << "What score does " << judgeThreeName << " give? ";
    cin >> judgeThree;
    cout << "What score does " << judgeFourName << " give? ";
    cin >> judgeFour;
    cout << "What score does " << judgeFiveName << " give? ";
    cin >> judgeFive;
    cout << "What score does " << judgeSixName << " give? ";
    cin >> judgeSix;

    cout << endl; //Seperation Line to make the terminal look better
    cout << "________________________________________" << endl;
    cout << endl;

    //Computations

    //This section checks which variable has the least value and sets that variable to 0
    //Judge One
    if (judgeTwo > judgeOne && judgeThree > judgeOne && judgeFour > judgeOne && judgeFive > judgeOne && judgeSix > judgeOne)
    {
        judgeOne = 0;
        cout << judgeOneName << " gave the lowest score!" << endl;
    }
    //Judge Two
    if (judgeOne > judgeTwo && judgeThree > judgeTwo && judgeFour > judgeTwo && judgeFive > judgeTwo && judgeSix > judgeTwo)
    {
        judgeTwo = 0;
        cout << judgeTwoName << " gave the lowest score!" << endl;
    }
    //Judge Three
    if (judgeOne > judgeThree && judgeTwo > judgeThree && judgeFour > judgeThree && judgeFive > judgeThree && judgeSix > judgeThree)
    {
        judgeThree = 0;
        cout << judgeThreeName << " gave the lowest score!" << endl;
    }
    //Judge Four
    if (judgeOne > judgeFour && judgeTwo > judgeFour && judgeThree > judgeFour && judgeFive > judgeFour && judgeSix > judgeFour)
    {
        judgeFour = 0;
        cout << judgeFourName << " gave the lowest score!" << endl;
    }
    //Judge Five
    if (judgeOne > judgeFour && judgeTwo > judgeFour && judgeThree > judgeFour && judgeFive > judgeFour && judgeSix > judgeFour)
    {
        judgeFive = 0;
        cout << judgeFiveName << " gave the lowest score!" << endl;
    }
    //Judge Six
    if (judgeOne > judgeSix && judgeTwo > judgeSix && judgeThree > judgeSix && judgeFive > judgeSix && judgeFour > judgeSix)
    {
        judgeSix = 0;
        cout << judgeSixName << " gave the lowest score!" << endl;
    }
    
    //This section checks which variable has the greatest value and sets that variable to 0
    //Judge One
    if (judgeOne > judgeTwo && judgeOne > judgeThree && judgeOne > judgeFour && judgeOne > judgeFive && judgeOne > judgeSix)
    {
        judgeOne = 0;
        cout << judgeOneName << " gave the highest score!" << endl;
    }
    //Judge Two
    if (judgeTwo > judgeOne && judgeTwo > judgeThree && judgeTwo > judgeFour && judgeTwo > judgeFive && judgeTwo > judgeSix)
    {
        judgeTwo = 0;
        cout << judgeTwoName << " gave the highest score!" << endl;
    }
    //Judge Three
    if (judgeThree > judgeOne && judgeThree > judgeTwo && judgeThree > judgeFour && judgeThree > judgeFive && judgeThree > judgeSix)
    {
        judgeThree = 0;
        cout << judgeThreeName << " gave the highest score!" << endl;
    }
    //Judge Four
    if (judgeFour > judgeOne && judgeFour > judgeTwo && judgeFour > judgeThree && judgeFour > judgeFive && judgeFour > judgeSix)
    {
        judgeFour = 0;
        cout << judgeFourName << " gave the highest score!" << endl;
    }
    //Judge Five
    if (judgeFive > judgeOne && judgeFive > judgeTwo && judgeFive > judgeThree && judgeFive > judgeFour && judgeFive > judgeSix)
    {
        judgeFive = 0;
        cout << judgeFiveName << " gave the highest score!" << endl;
    }
    //Judge Six
    if (judgeSix > judgeOne && judgeSix > judgeTwo && judgeSix > judgeThree && judgeSix > judgeFour && judgeSix > judgeFive)
    {
        judgeSix = 0;
        cout << judgeSixName << " gave the highest score!" << endl;
    }

    cout << endl; //Seperation Line to make the terminal look better
    cout << "________________________________________" << endl;
    cout << endl;

    //Calculating the Grade
    finalScore = (judgeOne + judgeTwo + judgeThree + judgeFour + judgeFive + judgeSix) / 4; //Adds all the numbers up and divides by 4; since two of the numbers will be 0, in total only 4 of the numbers are counted.

    //Printing the grade
    cout << "The final score for this hackathon project is " << finalScore << " points out of 10.";

    return 0;
}

/*
Please input the names of each judge
Judge One: Tim
Judge Two: Jim
Judge Three: Mason
Judge Four: Hudson
Judge Five: Alex
Judge Six: Reznov

________________________________________

Please insert a number between 0 and 10; Each number should be unique
What score does Tim give? 1
What score does Jim give? 2
What score does Mason give? 3
What score does Hudson give? 4
What score does Alex give? 5
What score does Reznov give? 6

________________________________________

Tim gave the lowest score!
Reznov gave the highest score!

________________________________________

The final score for this hackathon project is 3.5 points out of 10.
*/