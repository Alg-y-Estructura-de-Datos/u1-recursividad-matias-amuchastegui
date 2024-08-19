#include <iostream>
using namespace std;

// funcion recursiva que emplee recursividad para calcular el mayor de los elementos de un vector de n tamnio dado por el el usuario
int mayorElemento(int v[], int n, int max)
{
    if (n == 0)
    {
        return max;
    }
    if (v[n - 1] > max)
    {
        max = v[n - 1];
    }
    else
    {
        max = max;
    }
    return mayorElemento(v, n - 1, max);
}

int main()
{
    int n;
    cout << "Introduce el tamnio del vector: ";
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Introduce el elemento " << i + 1 << ": ";
        cin >> v[i];
    }
    int max = 0;
    cout << "El mayor elemento del vector es: " << mayorElemento(v, n, max) << endl;
    return 0;
}