#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
    cout << "Number of command line argument=" << argc << endl;
    cout << "Printing command line argument \n";
    for(int i=0; i<argc; i++){
        cout << argv[i] <<endl;
    }

        //evabe command line a compile order dite hoi--> g++ (cpp file name- comandline_argmnt.cpp) -o (run file name=demo)
        //terminale jevabe run er command dibo--> ./demo
        //muloto argv[] te terminal er input ashe evabe--> command= ./demo 4 78 Tasnim 
        //argv[0]=./demo
        //argv[1]=4
        //argv[2]=78
        //argv[3]=Tasnim

        //duita int multipication korbo
        //int product=argv[1]*argv[2]; // eta vul karon argv[] ekta string
        int a=atoi(argv[1]);
        int b=atoi(argv[2]);
        int product=a*b;
        cout << "Product=" << product <<endl;
}