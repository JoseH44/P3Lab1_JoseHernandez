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
	
	int referencia;
	int num_primo;
	cout<<"Ingrese un Numero menor que 100: ";
	cin>>num;
	if(num < 100){
		for(int i = 0;i<num;i++){
			referencia = i;
			
			if(primo(referencia)){
				num_primo = referencia;
				if((num_primo + i) < num && (num_primo + i)%2 == 0){
						int suma = num_primo+i;
						cout<<num_primo <<" + "<<i<<" = "<<suma<<endl;
				}
				
			}//fin del if exterior
			
		}//fin del for
	}else{
		cout<<"El Numero Debe ser Menor que 100";
	}
	
	
	return 0;
}



/*if(primo(i)){
					if((num_primo + i) < num && (num_primo + i)%2 == 0){
						int suma = num_primo+i;
						cout<<num_primo <<" + "<<i<<" = "<<suma<<endl;
					}//fin del if interior
				}//fin del if de enmedio*/
