#include <iostream>
using namespace std;
int main(){
    const int n=5, m=4; float nota,sumaG=0;
    for(int i = 1;i<=n;i++){
        float sumaE=0;
        cout << "Estudiante" << i << ":\n";
        for (int j = 1; j <= m; j++){
            cout << " Examen " << j << ": ";
            cin >> nota;
            sumaE+=nota;
        }
        float prom = sumaE/m;
        cout << "Promedio: "<<prom << endl;
        cout << " Estado: " << (prom >= 70? "Aprobado\n\n":"Reprobado\n\n");
        sumaG += prom;
    }
    cout << "Promedio general: " << sumaG/n << endl;
    return 0;
}
// This code calculates the average score of students based on their exam scores.
// It prompts for the number of students and their exam scores, calculates individual averages,