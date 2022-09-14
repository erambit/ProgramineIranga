#include <iostream>
#include <cmath>
#include <list>
using namespace std;
// daugybos lentele
int main()
{
    int n;
    cout << "number input: ";
    cin >> n;

    for (int i=0; i < 10; i++){
        cout <<i<<" * "<< "i=" << i*2 << endl;
    }

return 0;
}

// 1..n n-input: 1+2+..+n=?
int main()
{
    int n;
    cout  << "give a number: ";
    cin >> n;
    int x = 0;
    
    
    for (int i=0; i<=n ; i++ ){
        x=i+x;
    }
    cout << x << endl;
    return 0;
}