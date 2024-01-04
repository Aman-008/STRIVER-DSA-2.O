#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        // for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout << "* " ;
        }
        cout <<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout << j ;
        }
        cout <<endl;
    }
}
void pattern7(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<i*2+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    // for(int i=0;i<n;i++)
    // {
    //     //space
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         cout<<" ";
    //     }
    //     //star
    //     for(int j=0;j<2*i+1;j++)
    //     {
    //         cout<<"*";
    //     }
    //      //space
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;

    // }
    
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<i;j++){
            cout << " ";
        }
        //star
        for(int j=0;j<2*n-2*i-1;j++){
            cout << "*";
        }
        

        //space
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<i*2+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<i;j++){
            cout << " ";
        }
        //star
        for(int j=0;j<2*n-2*i-1;j++){
            cout << "*";
        }
        

        //space
        for(int j=0;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n) {
    for(int i=1;i<=2*n-1;i++) {
    int stars = i;
    if(i>n) {
        stars=2*n-i;
    }
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        cout << endl;
    }
    
}
void pattern11(int n){
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        }
        else{
            start = 0;
        }
        for(int j=0;j<=i;j++){
            cout << start << " ";
            start=1-start;
        }
        cout << endl;
    }
}
void pattern12(int n){
    int space = 2* (n-1);
    //numbers
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j ;
        }
        //space
        for(int i=1;i<=space;i++){
            cout << " ";
        }
        //numbers
        for(int j=i;j>=1 ;j--){
            cout << j ;
        }
        cout << endl;
        space -= 2;
    }
}
void pattern13(int n){
    // int start = 1;
    // for(int i=1;i<=n;i++) {
    //     for(int j=1;j<=i;j++){
    //         cout << start  << " ";
    //         start += 1;
    //     }
    //     cout << endl;
    // }

    //step 2
    int c=1;
    for(int j=1;j<=n;j++)
      {
         for(int i=1;i<=j;i++)
      {
         cout<<c++<<" ";
      }
      cout<<endl;
      }
}
void pattern14(int n){
    // for(int i=0;i<n;i++) {
    //     char alpha = 'A';
    //     for(int j=0;j<=i;j++){
    //         cout <<  alpha;
    //         alpha += 1;   
    //     }
    //     cout << endl;
    // }

    // Step 2 less runtime ms
    for (int i=0;i<n;i++){
        for (char j='A';j<='A'+i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern15(int n){
    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<n-i;j++){
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }
}
void pattern16(int n){
    for(int i=0;i<n;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++){
            cout << ch ;
        }
        
        cout << endl;
    }
}
void pattern17(int n){
	for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<n-i-1;j++){
            cout <<" ";
        }
        //character
        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
        
        for(int j=1;j<=2*i+1;j++){
            cout << ch;
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        for(int j=0;j<n-i-1;j++){
            cout <<" ";
        }
        cout << endl;
    }
}
void pattern18(int n) {
    for(int i=0;i<n;i++){
    // for(char ch='E'-i;ch<='E';ch++){
    //     cout << ch << " ";
    // }
            for(char ch =('A'+n-1)-i;ch<=('A'+n-1);ch++){
              
              cout<<ch<<" ";
            }
        
        cout << endl;
    }
}
void pattern19(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("*");
		}
        	for(int j=0;j<2*i;j++){
			printf( " ");
		}
		for(int j=0;j<n-i;j++){
            printf("*");
        }
		printf ("\n");

        
	}
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        for(int j=1;j<2*n-2*i-1;j++){
            cout << " ";
        }
        for(int j=0;j<i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n){
    int spaces = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i > n){
            stars = 2*n-i;
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout << " ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout << "*";
        }
        if(i < n){
            spaces -= 2;
        }
        else {
            spaces +=2;
        }

        cout << endl;
    }
 
}
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout << "*";
        
            if(i==0 || i==n-1 || j==0 || j==n-1){

                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
}
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout << (n-min(min(top,down),min(left,right)));
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern22(n);
    }

    return 0;
}
