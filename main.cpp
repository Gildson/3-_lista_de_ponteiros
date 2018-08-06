#include <iostream>

using namespace std;

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    //mostrando os valores das variaveis.
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << *p - *q << endl;
    cout << **&p << endl;
    cout << 3 - *p/(*q) + 7 << endl;

    return 0;
}
