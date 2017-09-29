#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

char **matrizA,**matrizB;
int nFilasA,nColA,nFilasB,nColB;
void definir()
{
    matrizA = new char*[nFilasA];
    for(int i=0;i<nFilasA;i++)
    {
        matrizA[i]=new char[nColA];
    }
    //************************************************************************************
    matrizB = new char*[nFilasB];
    for(int i=0;i<nFilasB;i++)
    {
        matrizB[i]=new char[nColB];

    }
    //************************************************************************************
}
void pedir()
{
    cout << "Datos de tu primera matriz\n\n";
    //************************************************************************************
    cout << "Dame el numero de FilasA -> ";
    cin >> nFilasA;
    cout << "Dame el numero de ColumnasA -> ";
    cin >> nColA;
    //************************************************************************************
    cout << "\nDatos de tu segunda matriz\n\n";
    //************************************************************************************
    cout << "Dame el numero de FilasB -> ";
    cin >> nFilasB;
    cout << "Dame el numero de columnasB -> ";
    cin >> nColB;
    //************************************************************************************
    definir();
    for(int i=0;i<nFilasA;i++)
    {
        for(int j=0;j<nColA;j++)
        {
            *(*(matrizA+i)+j)='@';

        }
    }
    cout << "\n";
    //************************************************************************************

    for(int i=0;i<nFilasB;i++)
    {
        for(int j=0;j<nColB;j++)
        {
            *(*(matrizB+i)+j)='#';

        }
    }
}

void imprimir(char **matrizA,int nFilasA,int nColA,char **matrizB,int nFilasB,int nColB)
{
    //************************************************************************************
    for (int k=0;k<100;k++)
    {
        int j;
        cout << "\nTu primera Matriz\n";
        for(int i=0;i<nFilasA;i++)
        {
            for(j=0;j<nColA;j++)
            {
                cout << *(*(matrizA+i)+j)<<" ";
            }
            cout << "\n";
        }
        cout << "\n";
        Sleep(200);
    //************************************************************************************
        cout << "\nTu segunda Matriz\n";
        for(int i=0;i<nFilasB;i++)
        {
            for(int j=0;j<nColB;j++)
            {
                cout << *(*(matrizB+i)+j)<<" ";
            }
            cout << "\n";
        }
        cout << "\a";
    }
    //************************************************************************************
}

/*-----------------------------------------------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------------------------------------------*/

int main()
{

    pedir();
    imprimir(matrizA,nFilasA,nColA,matrizB,nFilasB,nColB);

    for(int i=0;i<nFilasA;i++)
    {
        delete[] matrizA[i];
    }
    delete[] matrizA;

    for(int i=0;i<nFilasB;i++)
    {
        delete[] matrizB[i];
    }
    delete[] matrizB;

    return 0;
}
