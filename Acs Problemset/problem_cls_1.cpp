#include<bits/stdc++.h>
using namespace std;
// //Problem-1: Write a C++ program that reads n floating-point numbers and prints their average with 2 decimal places.
// int main(){
//     int n;
//     cout << "Enter how many intigers do you want to input ";
//     cin >> n;
//     float arr[n];
//     cout << "Enter n integer " << endl;
//     for( int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     float sum=0;
//     for( int i=0; i<n; i++){
//         sum=sum+arr[i];
//     }
//     float average=sum/n;
//     cout << "The average is " << fixed << setprecision(2) << average;   //setprecision(3), 3 ghor porjonto doshomik count hbe just
// }



// //Problem-2: Write a C++ program to take two characters and display the absolute difference of their ASCII values.
// int main(){
//     char a,b;
//     cout << "Enter 2 charecter a & b ";
//     cin >> a >> b;
//     int difference=a-b;
//     cout << "Difference between those charecter " << abs(difference) << endl;   // abs() diye absolute value ber kora jai
// }


//Problem-3: Write a C++ program to take two integers and swap them without using a third variable.
// int main(){
//     int a,b;
//     cout << "Enter 2 integer ";
//     cin >> a >> b;
//     //swap(a,b);
//     a=a-b;
//     b=b+a;
//     a=b-a;
//     cout << "Here the swapped value a=" << a << ", b=" << b << endl;  
// }

//Problem-4: Write a C++ program to read three integers. Check if the first is greater than the second AND the second is greater than the third. Print True or False.
// int main(){
//     int a,b,c;
//     cin >> a >> b >> c;
//     bool bigger(a>b && b>c);
//     if(bigger){
//         cout << "True" <<endl;
//     }    
//     else{
//         cout << "False" << endl;
//     }  
// }

//Problem-5: Write a C++ program to print the size (in bytes) of the following types: int, float, double, char, bool.
int main(){
    cout << "Size of integer " << sizeof(int) << endl;
    cout << "Size of float " << sizeof(float) << endl;
    cout << "Size of double " << sizeof(double) << endl;
    cout << "Size of char " << sizeof(char) << endl;
    cout << "Size of bool " << sizeof(bool) << endl;
}