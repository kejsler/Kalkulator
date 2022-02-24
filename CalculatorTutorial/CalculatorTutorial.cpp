// CalculatorTutorial.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Kalkulator" << endl << endl;
    cout << "Vlozte prosim operaci k provedeni. Format: a+b | a-b | a*b | a/b"
         << endl;
    
    Calculator c;
    while (true)
{
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Nulou nelze delit" << endl;
            
        }
        else;
        {  
            result = c.calculate(x, oper, y);
        }
        cout << "Vysledek je: " << result << endl << endl;
        cout << "Zadejte prosim dalsi hodnotu pro vypocet" << endl;
        
    }

    return 0;
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
