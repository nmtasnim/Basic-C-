//#include<iostream> //etate alada kore kisu function er library just
#include<bits/stdc++.h> //eta shob function er library k hold kore
using namespace std;
int main(){
    cout <<"Hello World" <<endl; //cout for output and line break er jonno 'endl'
    //integer input 
    int age;
    cin >> age;
    cout << "Hello, my age is " << age <<" years old"<<endl;

    //float input
    float salary;
    cin >> salary;
    cout << "Hello, my salary is " << salary << "TK" << endl;

    //charecter input
    char alphabet;
    cin >> alphabet;
    cout << "Hello , the alphabet is " << alphabet << endl;

    //string input
    string name;
    cin >> name;
    cout << "Hello, My name is " << name << endl;

    //full name input
    string full_name;   //etate ekta problem ase eta input na niye output diye dite chai  tai kisui output pawa jai na...tai eta flush kora lage
    getline(cin,full_name);  //getline diye space shoho input newa jai
    cout << "My full name is " << full_name << endl;

    //ek line a onk gula variable input and output
    int a;
    float b;
    double c;
    char d;
    cout << "Enter all variables" << endl;
    cin >> a >> b >> c >> d;
    cout << "my variables are here " << a << " " << b << " " << c << " " << d << endl;

    //array input
    int arr[10];
    cout << "Enter 10 integers " << endl;
    for( int i=0; i<10; i++){
        cin >> arr[i];
    }
    for( int i=0; i<10; i++){
        cout << i << "." << arr[i] << " th element" << endl;
    }
    int number;
    cout << "Enter a number ";
    cin >> number;
    cout << "Double of this " << 2*number << endl;


    // String input nibo kivabe char data type diye
    char str[100];
    cout << "Enter a string ";
    cin.get(str,100);
    cout << "Here the string " << str << endl;

    // String input nibo kivabe string data type diye
    string name;
    cout << "Enter your name ";
    getline(cin,name);
    cout << "Here your name " << name << endl;

    //string length ber korte hbe-------input--> Noor Mahmud Tasnim, output--> 18
    string name;
    cout << "Enter your name ";
    getline(cin,name);
    cout << "Length of your given string " << name.length() << endl;

    //ekta integer input newar por shate full name er string input newar tricks
    int age;
    cin >> age;
    string name;
    getchar();  //getchar() diye C & C++ a buffer file clear hoi
    cin.ignore();   //cin.ignore() diye C++ a buffer file clear hoi
    getline(cin,name);
    cout << "Aga= " << age << endl;
    cout << "Name= " << name << endl;
     
    
    
}