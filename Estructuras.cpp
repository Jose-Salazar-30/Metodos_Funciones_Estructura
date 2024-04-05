#include <iostream>
using namespace std;
// estructuras (una forma de agrupar varias variables relacionadas en un solo lugar.)
struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;
	
};

main(){
	Estudiante estudiante;
	
	int fila = 0,columna = 0;
	cout<<"Cuantos estudiantes desea Agregar:";
	cin>>fila;

	cout<<"Cuantas notas por Estudiante desea Agregar:";
	cin>>columna;
	
	estudiante.codigo = new int[fila];
	estudiante.nombre = new string[fila];
	estudiante.notas = new int *[fila];
	for(int i=0;i<fila;i++){
		estudiante.notas[i] = new int[columna];
	}
	
	cout<<"_____________________Ingreso de Notas_____________________"<<endl;
	for(int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Nombre Completo["<<i<<"]:";
		getline(cin,estudiante.nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"] : ";
			cin>>*(*(estudiante.notas+i)+ii);
		}	
		cout<<"____________________________"<<endl;
	}
	cout<<"_________Mostrar Datos_________"<<endl;	
	
	for(int i=0;i<fila;i++){
		cout<<"Codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese Nota["<<ii<<"] : "<<*(*(estudiante.notas+i)+ii)<<endl;
		}	
		cout<<"____________________________"<<endl;
	}
	
	for(int i=0;i<fila;i++){
		delete[] estudiante.notas[i];
	}
	
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;
	delete[] estudiante.notas;
	
	system("pause");
	
/*	for (int i=0;i<4;i++){
		cout<<"______________"<<endl;
		cout<<"Ingrese Codigo:";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Ingrese Nombre Completo:";
		getline(cin,estudiante.nombre[i]);
		cout<<"Ingrese Nota:";
		cin>>estudiante.nota[i];		
	}

	for (int i=0;i<4;i++){
		cout<<"______________"<<endl;
		cout<<"Codigo:"<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo:"<<estudiante.nombre[i]<<endl;
		cout<<"Nota:"<<estudiante.nota[i]<<endl;
	}
	*/
}  
