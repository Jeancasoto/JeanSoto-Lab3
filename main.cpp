#include<string>
#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

string tostring(string, string, string);

int main(){
	vector <string> vec;
	while(true){
	
	int opcion=0;

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
			
			string a="";
			string m="";
			string d="";

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

				//cout<<dia[i]<<endl
				//

				cout<<"AÑO "<<a<<endl;
					
				int mes=atoi(m.c_str());
				string mm;
					if(mes==1){
					      cout<<"MES "<<"Enero"<<endl;
					       }
					if(mes==2){
					       cout<<"MES "<<"Febrero"<<endl;
					       }
					if(mes==3){
					       cout<<"MES "<<"Marzo"<<endl;
					       }
					if(mes==4){
					       cout<<"MES "<<"Abril"<<endl;
					       }
					if(mes==5){
					       cout<<"MES "<<"Mayo"<<endl;
					       }
					if(mes==6){
					       cout<<"MES "<<"Junio"<<endl;
					       }
					if(mes==7){
					       cout<<"MES "<<"Julio"<<endl;
					       }
					if(mes==8){
					       cout<<"MES "<<"Agosto"<<endl;
					       }
					if(mes==9){
					       cout<<"MES "<<"Septiembre"<<endl;
					       }
					if(mes==10){
						cout<<"MES "<<"Octubre"<<endl;
						}
					if(mes==11){
						cout<<"MES "<<"Noviembre"<<endl;
						}
					if(mes==12){
						cout<<"MES "<<"Diciembre"<<endl;
						}

				
			
				
				//cout<<"MES"<<m<<endl;
				
					

				cout<<"DIA "<<d<<endl<<endl;

				//string fecha="Dia"+d+"Mes:"+m+"Year:"+a;
				string fechaVAR=tostring(a,m,d);

				cout<<fechaVAR<<endl<<endl;
	
				vec.push_back(fechaVAR);
				
				cout<<"Imprime fechas"<<endl;
				cout<<fechaVAR<<endl;

				//cout<<vec<<endl;
				for(int i=0; vec.size()-1; i++){
					cout<<vec[i];
				
				}
				
		
		       }//Fin switch
		
		}//Fin while

	}	
		



return 0;
}//Fin main

string tostring(string a, string m, string d){
	stringstream ss;
	ss<<" Year:";
	string aa=a;
	string mm=m;
	string dd=d;
	ss<<aa<<" Mes:";
	ss<<mm;
	ss<<" Dia "<<dd;
	return ss.str();
}

