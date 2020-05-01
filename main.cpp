#include <iostream>
using std::cout;
using std::cin;
using std::endl;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool primo(int num){
	bool verificacion = false;
	int cont_general = 1;
	int cont = 0;
	while(cont_general <= num){
		if(num % cont_general == 00){
			cont_general++;
			cont++;
		}else{
			cont_general++;
		}//fin del if
	}//fin del while
	if(cont == 2){
		verificacion = true;
	}
	return verificacion;
}

int main() {
	int num;
	
	cout<<"Ingrese un Numero menor que 100: ";
	cin>>num;
	if(num < 100){
		for(int i = 0;i<num;i++){
			
			for(int j = 0; j<num;j++){
				if(primo(i) && primo(j)){
					if((i + j) < num && (i + j)%2 == 0){
						int suma = j+i;
						
						cout<<i <<" + "<<j<<" = "<<suma<<endl;
						
						break;
					
					}
				}	
			}//fin del for interior
			
		}//fin del for exterior
	}else{
		cout<<"El Numero Debe ser Menor que 100";
	}
	
	
	return 0;
}




