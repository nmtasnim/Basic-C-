#include<bits/stdc++.h>
using namespace std;
int main(){
    //fixed--> value ja ase shob dibe
    //scientific--> scientific a value dibe
    //setprecision--> dhoshsomik er por joto shonkha bolbo toto shonkha nibe
    //const ---> const int variable declare korle keu eta pore change korte pare na ..... eta read only variable ...change kora jai na
    double value=23893.79834729875928;
    cout << "Direct value " << value << endl;
    cout << "Fixed value " << fixed << value << endl;
    cout << "setprecision value " << setprecision(3) << value << endl; 
    cout << "fixed scientific value " << fixed << scientific << value << endl;
    cout << "setprecision value " << fixed << setprecision(3) << value << endl;
    cout << "scientific with setprecision value " << scientific << setprecision(2) << value << endl; 
    const int bkash_number=131678805;
    cout << "My bkash number " << bkash_number << endl; // eta evabei thakbe ....keu pore change korte gele error dekhabe
    //bkash_number=131678802; / change korte gesi tai error dekhacche
}