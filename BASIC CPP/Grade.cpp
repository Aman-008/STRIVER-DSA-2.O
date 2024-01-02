#include <bits/stdc++.h>
using namespace std;

int main()
{
    // question 1

    // STEP 1

    // int marks;
    // cin >> marks;
    // if (marks >= 80)
    // {
    //     cout << 'A' << endl;
    // }
    // else if (marks >= 60)
    // {
    //     cout << 'B' << endl;
    // }
    // else if (marks >= 50)
    // {
    //     cout << 'C' << endl;
    // }
    // else if (marks >= 45)
    // {
    //     cout << 'D' << endl;
    // }
    // else if (marks >= 25)
    // {
    //     cout << 'E' << endl;
    // }
    // else
    // {
    //     cout << 'F' << endl;
    // }

    // STEP 2

    // int marks;
    // cin >> marks;
    // if (marks < 25)
    // {
    //     cout << "F" << endl;
    // }
    // else if (marks >= 25 && marks <= 44)
    // {
    //     cout << "E" << endl;
    // }
    // else if (marks >= 45 && marks <= 49)
    // {
    //     cout << "D" << endl;
    // }
    // else if (marks >= 50 && marks <= 59)
    // {
    //     cout << "C" << endl;
    // }
    // else if (marks >= 60 && marks <= 79)
    // {
    //     cout << "B" << endl;
    // }
    // else if (marks >= 80 && marks <= 100)
    // {
    //     cout << "A" << endl;
    // }

    // STEP 3

    // int marks;
    // cin >> marks;
    // if (marks < 25)
    // {
    //     cout << "F" << endl;
    // }
    // else if (marks <= 44)
    // {
    //     cout << "E" << endl;
    // }
    // else if (marks <= 49)
    // {
    //     cout << "D" << endl;
    // }
    // else if (marks <= 59)
    // {
    //     cout << "C" << endl;
    // }
    // else if (marks <= 79)
    // {
    //     cout << "B" << endl;
    // }
    // else if (marks <= 100)
    // {
    //     cout << "A" << endl;
    // }

    // question 2
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "not eligible for job";
    }
    else if (age <= 57)
    {
        cout << "eligible for job";
        if (age >= 55)
        {
            cout << ", but retirement soon.";
        }
    }
    // else if (age <= 57)
    // {
    //     cout << "eligible for job, but retirement soon" << endl;
    // }
    else
    {
        cout << "retirement time";
    }

    return 0;
}