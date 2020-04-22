#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
void reportes(int , string id_n, string archivo_d);
void reportes_1(string id, string nombre, string programa, string cargos, string pagado, string saldo, string saldo_v, string ncv, string temporal);
void reportes_2(string id, string nombre, string programa, string cargos, string pagado, string saldo, string saldo_v, string ncv, string temporal);

int main(){

    string id_n;
    string prg;
    string ncv_n;
    string archivo_d;
    string nombreArchivo;

    int temp_choice;
    int choice;

    do{
        system("cls");
        cout << "Archivo del dia: ";
        getline(cin, archivo_d);
        cout << "\nReportes\n";
        cout << "\n1.- Reporte por ID\n";
        cout << "2.- Reporte por Programa\n";
        cout << "3.- Reporte por Pagos Vencidos\n";
        cin >> choice;
        cout << "\n\n" << endl;



        switch(choice){



            case 1:

                do{
                    system("cls");
                    cout << "Digite el ID: ";
                    cin >> id_n;
                    cout << endl;
                    reportes(choice, id_n, archivo_d);
                    cout << "\nArchivo de texto generado exitosamente\n" << endl;
                    cout << "\n\nDesea realizar una nueva busqueda ID? (1)" << endl;
                    cout << "Regresar al menu principal (2)" << endl;
                    cin >> temp_choice;
                }while(temp_choice == 1);
                break;

            case 2:

                do{
                    system("cls");
                    cout << "Digite el Programa: ";
                    cin >> id_n;
                    cout << endl;
                    reportes(choice, id_n, archivo_d);
                    cout << "\nSE HA GENERADO UN ARCHIVO DE TEXTO PARA ENVIO POR CORREO MASIVO\n" << endl;
                    cout << "\n\nDesea realizar una nueva busqueda por Programa? (1)" << endl;
                    cout << "Regresar al menu principal (2)" << endl;
                    cin >> temp_choice;
                }while(temp_choice == 1);
                break;


            case 3:

                do{
                    system("cls");
                    cout << "Digite el NCV: ";
                    cin >> id_n;
                    cout << endl;
                    reportes(choice, id_n, archivo_d);
                    cout << "\nSE HA GENERADO UN ARCHIVO DE TEXTO PARA ENVIO POR CORREO MASIVO\n" << endl;
                    cout << "\n\nDesea realizar una nueva busqueda NCV? (1)" << endl;
                    cout << "Regresar al menu principal (2)" << endl;
                    cin >> temp_choice;
                }while(temp_choice == 1);
                break;

        }

        cin.ignore();


    }while(temp_choice == 2);
}


void reportes(int choice, string id_n, string archivo_d){


    ofstream reporte_f;

    reporte_f.open("Reportedepagos.txt", ios::out);

    if(reporte_f.fail()){

        cout << "No se pudo crear el archivo";
        exit(1);
    }


    ifstream reportes(archivo_d.c_str());

    if(!reportes.is_open()) cout << "ERROR: El archivo no se pudo abrir" << endl;

    string id, nombre, programa, cargos, pagado, saldo, saldo_v, ncv, temporal;

    string linea;

    while(getline(reportes, linea)){

        stringstream ss(linea);
        getline(ss, id, ',');
        getline(ss, nombre, ',');
        getline(ss, temporal, ',');
        getline(ss, programa, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, cargos, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, pagado, ',');
        getline(ss, saldo, ',');
        getline(ss, saldo_v, ',');
        getline(ss, ncv, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');
        getline(ss, temporal, ',');





        if(choice == 1){

            if(id_n == id){

                reportes_1(id, nombre, programa, cargos, pagado, saldo, saldo_v, ncv, temporal);

                reporte_f << "ID: " << id << endl;
                reporte_f << "Nombre: " << nombre << endl;
                reporte_f << "Programa: " << programa << endl;
                reporte_f << "Cargos: " << cargos << endl;
                reporte_f << "Pagado: " << pagado << endl;
                reporte_f << "Saldo: " << saldo << endl;
                reporte_f << "Saldo Vencido: " << saldo_v << endl;
                reporte_f << "NCV: " << ncv << endl;
                reporte_f << "\n" << endl;
            }
        }


        else if(choice == 2){

            if(id_n == programa && ncv!="0"){

                reportes_2(id, nombre, programa, cargos, pagado, saldo, saldo_v, ncv, temporal);

                reporte_f << "ID: " << id << endl;
                reporte_f << "Nombre: " << nombre << endl;
                reporte_f << "Programa: " << programa << endl;
                reporte_f << "Cargos: " << cargos << endl;
                reporte_f << "Pagado: " << pagado << endl;
                reporte_f << "Saldo: " << saldo << endl;
                reporte_f << "Saldo Vencido: " << saldo_v << endl;
                reporte_f << "NCV: " << ncv << endl;
                reporte_f << "\n" << endl;

            }
        }


        else if(choice == 3){

            if(id_n == ncv){

                reportes_2(id, nombre, programa, cargos, pagado, saldo, saldo_v, ncv, temporal);

                reporte_f << "ID: " << id << endl;
                reporte_f << "Nombre: " << nombre << endl;
                reporte_f << "Programa: " << programa << endl;
                reporte_f << "Cargos: " << cargos << endl;
                reporte_f << "Pagado: " << pagado << endl;
                reporte_f << "Saldo: " << saldo << endl;
                reporte_f << "Saldo Vencido: " << saldo_v << endl;
                reporte_f << "NCV: " << ncv << endl;
                reporte_f << "\n" << endl;
            }

        }


    }

    reportes.close();

}

void reportes_1(string id, string nombre, string programa, string cargos, string pagado, string saldo, string saldo_v, string ncv, string temporal){

    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Programa: " << programa << endl;
    cout << "Cargos: " << cargos << endl;
    cout << "Pagado: " << pagado << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Saldo Vencido: " << saldo_v << endl;
    cout << "NCV: " << ncv << endl;
    cout << "\n" << endl;

}




void reportes_2(string id, string nombre, string programa, string cargos, string pagado, string saldo, string saldo_v, string ncv, string temporal){

    cout << "ID: " << id << " | ";
    cout << "Nombre: " << nombre << " | ";
    cout << "Programa: " << programa << " | ";
    cout << "Cargos: " << cargos << " | ";
    cout << "Pagado: " << pagado << " | ";
    cout << "Saldo: " << saldo << " | ";
    cout << "Saldo Vencido: " << saldo_v << " | ";
    cout << "NCV: " << ncv << endl;
    cout << "\n" << endl;


}