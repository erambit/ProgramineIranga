#include <iostream>
#include <cmath>
#include <list>
using namespace std;

// kvadratines lygties sprendimas
// ax^2+bx+c=0
double Disc(int a, int b, int c)
//ivardinam ka skaiciuosim: Disc(riminantas), nurodom jo narius
{
    int BigD;
    BigD = b*b-4*a*c;
    //formule
if (BigD > 0) {
    cout<<"BigD is: "<<BigD<<"pozityvus"<<endl;
    cout<<"du sprendimai"<<endl;
}
else if (BigD < 0){
    cout<<"BigD is: "<<BigD<<"negatyvus"<<endl;
    cout<<"vienas sprendimas"<<endl;

}
else if (BigD == 0){
    cout<<"BigD is: "<<BigD<<"nulinis"<<endl;
    cout<<"du sprendimai"<<endl;
// sprendimu variantai
}

    cout<<"a";cin>>a;
    cout<<"b";cin>>b;
    cout<<"c";cin>>c;
// nariu inputas terminale

    Disc(a,b,c);
    return 0;
// gale nurodom koki atsakyma norime matyti outpute
}