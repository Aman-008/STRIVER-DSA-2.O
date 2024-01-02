// #include <bits/stdc++.h>
// using namespace std;

// VOID Function or Parameterised

// void printName(string name) {
//     cout << "Hey Aman! " << name << endl;
// }
// int main()
// {
//     string name;
//     // cin >> name;
//     getline(cin, name);
//     printName(name);
//     // cout << name << endl;
//     return 0;
// }

// RETURN FUNCTION

// Sum of tum number by using function
// my code
// #include <bits/stdc++.h>
// using namespace std;
// int numSum(int a,  int b) {
//     cout << a + b << endl;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     numSum(a, b);
//     return 0;
// }

// Original
//  #include <bits/stdc++.h>
//  using namespace std;

// int sum(int num1, int num2) {
//     int num3 = num1 + num2; // 5 + 43 = 48
//     return num3;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     // int num3 = num1 + num2;
//     // cout << num3 << endl;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }

// Minimum and Maximum
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     // int minimum = min(num1, num2);
//     int maximum = max(num1, num2);
//     cout << maximum << endl;
//     return 0;
// }



// maximum and minimum

// #include <bits/stdc++.h>
// using namespace std;
// int maxx(int num1, int num2)
// {
//     // 2 > 43
//     if (num1 >= num2)
//     {
//         return num1;
//     }
//     // looking for return line
//     // else{
//     //     return num2;
//     // }
//     return num2;
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum << endl;
//     return 0;
// }


// pass by value
// #include <bits/stdc++.h>
// using namespace std;

// void doSomething(int num) {
//     // 10
//     cout << num << endl;
//     num += 5;
//     // 10 + 5 = 15
//     cout << num << endl;
//     num += 5;
//     // 15 + 5 = 20
//     cout << num << endl; // 20
// }
// int main()
// {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }


// pass by reference
// #include <bits/stdc++.h>
// using namespace std;
// // & = address of 
// // this datatype is user for change the output in original
// void doSomething(string & s) {
//     s[0] = 't';
//     cout << s << endl;
// }
// int main()
// {
//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }

// pass by reference
#include <bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n)
{
    for(int i = 0; i < n; i++) {
        cout <<"The value of arr[i] is : " <<  arr[i] << endl;
        arr[i] += 100;
        cout << "value inside function is " << arr[i] << endl;
    }
}
int main()
{
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    doSomething(arr, n);
    cout << "value inside int main is " << arr[0];
    return 0;
}