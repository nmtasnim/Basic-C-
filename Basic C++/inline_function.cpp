#include<bits/stdc++.h>
using namespace std;
inline int area(int length, int width){
    int area=length*width;
    return area;
}

//inline er kaj: normal kono function er kaj jkn main function a onkbar run hoi tkn function k call kora matro o upore eshe function theke kaj kore niye jai..... kajj ta jkn onk beshi hoi tkn program head hoi  jai utha nama korte korte.... kintu inline kono function er age likhle hoi ki jei matro function ta call hoi oi matro inline pura function ti k main function er j jaigai call kora hoise oi jaigai likhe de... tai eta bar bar utha nama kora lage na

int main(){
    int length,width;
    cin >> length >> width;
    int myarea1=area(length,width);
    cout << myarea1 << endl;
    int myarea2=area(length,width);
    cout << myarea2 << endl;
    int myarea3=area(length,width);
    cout << myarea3 << endl;
    int myarea4=area(length,width);
    cout << myarea4 << endl;
}