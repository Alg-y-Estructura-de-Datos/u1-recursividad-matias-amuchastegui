#include<iostream>
using namespace std;

//funcion recursiva que dado un numero entero lo muestre de forma invertida. ej: 1234 -> 4321. 
void mostrarInvertido(int n){
    if(n<10){
        cout<<n;
    }else{
        cout<<n%10;
        mostrarInvertido(n/10);
    }
}

int main(){
    int n;
    cout<<"Introduce un numero: ";
    cin>>n;
    cout<<"El numero "<<n<<" invertido es: ";
    mostrarInvertido(n);
    cout<<endl;
    return 0;
}

