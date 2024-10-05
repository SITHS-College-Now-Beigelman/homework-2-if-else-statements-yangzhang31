//Yang Zhang
//Homework 2 Part 1
//10.1.2024

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Variables
    int month;
    int day;
    int confirmInt = 1;
    char confirm;

    //Prompting User
    while (confirmInt == 1)
    {
        cout << "Please input a month in number form: "; //Prompts user to input month
        cin >> month;
        cout << "Please input a day of a month: "; //Prompts user to input day of a month
        cin >> day;
        cout << endl;
        cout << "Confirm that you input: " << month << " / " << day << " (T/F): "; //Prompts user to confirm if they inputed the correct date
        cin >> confirm;

        if (confirm == 84) //If the user put T then do the following:
        {
            //Makes sure the day is between 1 and 30
            if (day > 30 || day < 1)
            {
                cout << endl;
                cout << "Invaild Day: " << endl;
                cout << "-------------- Please Reinput the infomation --------------" << endl;
                cout << endl;             
            }
            //Makes sure the month is between 1 and 12
            if (month > 12 || month < 1)
            {
                cout << endl;
                cout << "Invaild Month: " << endl;
                cout << "-------------- Please Reinput the infomation --------------" << endl;
                cout << endl;           
            }
            if (month <= 12 && month >= 1 && day <= 30 && day >= 1) //If the month and day are valid then break the while loop.
            {
                confirmInt = 0; 
            }
        }

        if (confirm == 70) //If the user puts F then do not break the loop.
        {
            cout << endl;
            cout << "-------------- Please Reinput the infomation --------------" << endl;
            cout << endl;
        }
    }
    
    //This is for decoration :<
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << endl;
    
    //If statements for spring
    if (month >= 3 && month <= 6)
    {
        if (month == 6) //If the month is June; check if the day is less then 20 otherwise print its in the summer
        {
            if (day <= 20) 
            {
                cout << "The date " << month << " / " << day << " is in the spring. " << endl;  
            }
            else
            {
                cout << "The date " << month << " / " << day << " is in the summer. " << endl; 
            }
        }
        if (month >= 2 && month <= 5)
        {
            cout << "The date " << month << " / " << day << " is in the summer. " << endl; 
        }
    }

    //If statements for summer
    if (month >= 6 && month <= 9)
    {
        if (month == 6) //If the month is June; check if the day is less then 21 otherwise print its in the spring
        {
            if (day <= 20)
            {
                cout << "The date " << month << " / " << day << " is in the summer. " << endl;  
            }
            else
            {
                cout << "The date " << month << " / " << day << " is in the spring. " << endl; 
            }
        }
        
        if (month >= 5 && month <= 8) //For months between january and march
        {
            cout << "The date " << month << " / " << day << " is in the summer. " << endl;  
        }
    }

    //If statements for FALL 
    if (month >= 9 && month <= 12)
    {
        if (month == 9) //If the month is september; check if the day is greater then 23 otherwise its in the summer
        {
            if (day >= 23)
            {
                cout << "The date " << month << " / " << day << " is in the fall. " << endl;  
            }
            else 
            {
                cout << "The date " << month << " / " << day << " is in the summer. " << endl;  
            }
        }

        if (month == 12) //If the month is december; check if the day is less then 21 otherwise print its in the winter
        {
            if (day <= 21) //This checks if the day in december would be considered fall or winter
            {
                cout << "The date " << month << " / " << day << " is in the fall. " << endl;  
            }
            else
            {
                cout << "The date " << month << " / " << day << " is in the winter. " << endl; 
            }
        }
        
        if (month >= 10 && month <= 11) //For months between september and december
        {
            cout << "The date " << month << " / " << day << " is in the fall. " << endl;  
        }
    }

    //If statements for WINTER
    if (month >= 1 && month <= 3)
    {
        /* The if statement doesn't check for december because if its december it will be in the FALL if statement. 
        Within the FALL if statement there is an if else statement which checks if the the day in december would be considered winter */

        if (month == 3) //If the month is March; check if the day is less then 20 otherwise print its in the spring
        {
            if (day <= 20)
            {
                cout << "The date " << month << " / " << day << " is in the fall. " << endl;  
            }
            else
            {
                cout << "The date " << month << " / " << day << " is in the summer. " << endl; 
            }
        }
        
        if (month >= 1 && month <= 2) //For months between december and march
        {
            cout << "The date " << month << " / " << day << " is in the fall. " << endl;  
        }
    }

    return 0;

}

/*
Please input a month in number form: 200
Please input a day of a month: 12

Confirm that you input: 200 / 12 (T/F): T

Invaild Month:
-------------- Please Reinput the infomation --------------

Please input a month in number form: 12
Please input a day of a month: 30

Confirm that you input: 12 / 30 (T/F): T

-----------------------------------------------------------

The date 12 / 30 is in the winter.
*/