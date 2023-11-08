// Trabajo de Liam Di Cerbo y Matias De Pressa
//TA-TE-TI

#include <iostream>
using namespace std;
int main(){

    //asignacion de variables

    int jugador=2;
    int option=0;
    int col=0;
    int fil=0;
    int cont=0;

    //creamos la matriz
    int filas = 3;
    int columnas = 3;
    int matriz[filas][columnas];

    // Llenamos la matriz
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            matriz[f][c] = 0;
        }
    }


    //inico del bucle del juego
    do{

        //switch que cambia de jugador
        if (jugador==2){
            jugador=1;
        }
        else{
            jugador=2;
        }

        //menu
        
        do{
            //seleccionar si quiere jugar o terminar la partida
            cout<<"1: Jugar \n";
            cout<<"2: Finalizar Partida \n";
            cout<<"Seleccione una de las 2 opciones: \n";
            cin>>option;

            //analiza que opcion se tomo y si la opcion esta habilitada entonces va a romper el bucle
            //en caso contrario va a preguntar indefinidamente
            if (option==1 or option==2){
                break;
            }
            else{
                system("cls");
                cout<<"Por favor, seleccionar una de las dos opciones \n";
                system("pause");
            }
            system("cls");
        }while(true);
        //si la opcion es dos sale directamente del juego
        if (option==2){
            break;
        }

        do{

            //imprimo la matriz
            for (int f = 0; f < filas; f++) {
                for (int c = 0; c < columnas; c++) {
                    cout << matriz[f][c] << " ";
                }
                cout << "\n";
            }
            //ingreso de dato en la matriz
            cout<<"Jugador Numero:"<<jugador<<"\n";
            cout<<"ADVERTENCIA!!!!! \nlas posiciones inician en 1 y terminan en 3 \n";
            cout<<"seleccione la columna en la que colocar el dato \n";
            cin>>col;
            cout<<"seleccione la fila en la que colocar el dato \n";
            cin>>fil;

            //analiza que la posicion y si esta habilitada entonces va a romper el bucle
            //en caso contrario va a preguntar indefinidamente
            if (col >= 1 && col <= 3) {
                if (fil >= 1 && fil <= 3) {
                    if (matriz[fil - 1][col - 1] == 0) {
                        break;
                    }
                }
            }
            else{
                cout<<"Por favor, seleccionar una posicion valida \n";
                system("pause");
                system("cls");
            }

            system("cls");

        }while(true);

        //guarda el dato en la posicion que elegio el jugador dependiendo de este

        if (jugador==1){
            matriz[fil-1][col-1]=1;
        }
        else{
            matriz[fil-1][col-1]=2;
        }
        system("cls");

        //vuelve a imprimir la matriz con el dato ingresado

        


//________________________________________________verificacion de victoria___________________________________________________________
//-----------------------------------------------------------filas-------------------------------------------------------------------
        //primera fila

        if (matriz[0][0]==1 && matriz[0][1]==1 && matriz[0][2]==1 || matriz[0][0]==2 && matriz[0][1]==2 && matriz[0][2]==2){
            system("cls");
            cout<<"Felicidades Jugador"<<jugador<<"\nHas Ganado";
            break;
        }

        //segunda fila

        if (matriz[1][0]==1 && matriz[1][1]==1 && matriz[1][2]==1 || matriz[1][0]==2 && matriz[1][1]==2 && matriz[1][2]==2){
            system("cls");
            cout<<"Felicidades Jugador"<<jugador<<"\nHas Ganado";
            break;
        }

        //tercera fila

        if (matriz[2][0]==1 && matriz[2][1]==1 && matriz[2][2]==1 || matriz[2][0]==2 && matriz[2][1]==2 && matriz[2][2]==2){
            system("cls");
            cout<<"Felicidades Jugador"<<jugador<<"\nHas Ganado";
            break;
        }

//---------------------------------------------------------columnas--------------------------------------------------------------
        //primera columna

        if (matriz[0][0]==1 && matriz[1][0]==1 && matriz[2][0]==1 || matriz[0][0]==2 && matriz[1][0]==2 && matriz[2][0]==2){
            system("cls");
            cout<<"Felicidades Jugador"<<jugador<<"\nHas Ganado";
            break;
        }

        //segunda columna

        if (matriz[0][1]==1 && matriz[1][1]==1 && matriz[2][1]==1 || matriz[0][1]==2 && matriz[1][1]==2 && matriz[2][1]==2){
            system("cls");
            cout<<"Felicidades Jugador"<<jugador<<"\nHas Ganado";
            break;
        }

        //tercera columna

        if (matriz[0][2]==1 && matriz[1][2]==1 && matriz[2][2]==1 || matriz[0][2]==2 && matriz[1][2]==2 && matriz[2][2]==2){
            system("cls");
            cout<<"Felicidades Jugador"<<jugador<<"\nHas Ganado";
            break;
        }

//---------------------------------------------------diagonales------------------------------------------------------------
        
        //primera diagonal

        if (matriz[0][0]==1 && matriz[1][1]==1 && matriz[2][2]==1 || matriz[0][0]==2 && matriz[1][1]==2 && matriz[2][2]==2){
            system("cls");
            cout<<"Felicidades Jugador"<<jugador<<"\nHas Ganado";
            break;
        }

        //segunda diagonal

        if (matriz[0][2]==1 && matriz[1][1]==1 && matriz[2][0]==1 || matriz[0][2]==2 && matriz[1][1]==2 && matriz[2][0]==2){
            system("cls");
            cout<<"Felicidades Jugador"<<jugador<<"\nHas Ganado";
            break;
        }

        cont++;
        if (cont==9){
            system("cls");
            cout<<"Es Un Empate";
            break;
        }
    }while (true);
}