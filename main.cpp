#include<string>
#include<iostream>
#include<vector>

using namespace std;

int opcion=0;
string a;
string m;
string d;


int main(){
	cout<<"Acontinuacion dispone de 3 opciones"<<endl<<"Ingrese 1-Poda y busca "<<endl
		<<"Ingrese 2-El teorema de Ruffini"<<endl<<"Ingrese 3-Guardar fechas en formato"<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:{
		       cout<<"Ejercicio en construccion, pongase en contacto con el programador"<<endl;
		       
		       }
		       break;
		case 2:{
		       cout<<"Ejercicio en contruccion, pongase en contacto con el programador"<<endl;
		       }
		       break;
		case 3:{
		       cout<<"Ejercicio en contruccion, pongase en contacto con el programador"<<endl;
		       string dia;
		       cout<<"Ingrese una cadena para determinar dia"<<endl;
			cin>>dia;

			//cout<<dia<<endl;
			
			for(int i=0; i<dia.length();i++){
			

				if(i==0 ||i==1 ||i==2 ||i==3){
				a+=dia[i];
				}
			       	if(i==4||i==5){
				m+=dia[i];
				}
				if(i==6||i==7){
				d+=dia[i];
				}
			}

				//cout<<dia[i]<<endl;

				cout<<"AÑO"<<a<<endl;
				
				/*switch(stoi(m)){
					case 1:{
					       cout<<"MES "<<"Enero"<<endl;
					       }
					case 2:{
					       cout<<"MES "<<"Febrero"<<endl;
					       }
					case 3:{
					       cout<<"MES "<<"Marzo"<<endl;
					       }
					case 4:{
					       cout<<"MES "<<"Abril"<<endl;
					       }
					case 5:{
					       cout<<"MES "<<"Mayo"<<endl;
					       }
					case 6:{
					       cout<<"MES "<<"Junio"<<endl;
					       }
					case 7:{
					       cout<<"MES "<<"Julio"<<endl;
					       }
					case 8:{
					       cout<<"MES "<<"Agosto"<<endl;
					       }
					case 9:{
					       cout<<"MES "<<"Septiembre"<<endl;
					       }
					case 10:{
						cout<<"MES "<<"Octubre"<<endl;
						}
					case 11:{
						cout<<"MES "<<"Noviembre"<<endl;
						}
					case 12:{
						cout<<"MES "<<"Diciembre"<<endl;
						}

				}*/
			
				
				cout<<"MES"<<m<<endl;
				int mes=atoi(m.c_str());
				cout<<mes<<endl;	

				cout<<"DIA"<<d<<endl;
			
				
		

		       }
		       break;
	
	}	
		



return 0;
}
