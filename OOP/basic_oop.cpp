//private-public && setter-Getter && 
#include<bits/stdc++.h>
using namespace std;
class student{
    int classnumber; //public mention na kkorle eta private ... so eta access korte parbo na 
    public:
        int weight;
        
        //Accessing a private function
        void SetClassNumber(int a){ //Setter function--> private function er value set kore
            classnumber=a;
        }
        int GetClassNumber(){ //Getter function--> private function er value return kkore 
            return classnumber;
        }
};
int main(){
    student s1; //creating first student object
    student s2; //creating 2nd student object
    //s1.classnumber=10;
    //s1.weight=10;
    
    cout << "Old Class Number of s1= " << s1.GetClassNumber() << endl;

    s1.SetClassNumber(2); // set diye value patacchi 

    cout << "Changed Class Number of s1 = " << s1.GetClassNumber() << endl; //get diye value output nicchi
    //cout << s1.weight << endl;
}