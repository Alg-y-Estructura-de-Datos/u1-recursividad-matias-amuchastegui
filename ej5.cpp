#include <iostream>
using namespace std;

void esta(int n, int d, bool &encontrado)
{
    if (n == 0)
    {
        return;
    }

    if (n % 10 == d)
    {
        encontrado = true;
        return;
        
    }
    else
    {
        esta(n / 10, d, encontrado);
    }
}
int main()
{
int n, d;
    cout << "Ingrese un numero" << endl;
    cin >> n;
    cout << "Ingrese el digito a buscar" << endl;
    cin >> d;
    bool encontrado=false;
    esta(n, d, encontrado);
    if (encontrado==true)
    {
        cout << "El digito " << d << " esta en el numero " << n << endl;
    }
    if (encontrado==false)
    {
        cout << "El digito " << d << " no esta en el numero " << n << endl;
    }
}