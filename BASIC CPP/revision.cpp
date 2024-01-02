// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[5];
//     for(int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     for(int i = 0; i < 5; i++) {
//         cout  << arr[i] << " ";
//     }
//     return 0;
// }

// pass by reference
#include<bits/stdc++.h>
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