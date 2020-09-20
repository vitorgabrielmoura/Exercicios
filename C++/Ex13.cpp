/*
Efetuar a leitura de três valores (variáveis A, B e C) e apresentá-los dispostos em ordem crescente. */

#include <cstdlib> 
#include <iostream>

using namespace std;

int main () {   
	setlocale(LC_ALL, "Portuguese");
	
	float A, B, C, num1, num2, num3, opcao;
	
	REPETIR:
		num1 = 0;
		num2 = 0;
		num3 = 0;
		
		system("cls");
		cout << "Digite 3 números: \n";
		cin >> A;
		cin >> B;
		cin >> C;
		
		if (B > A){
			if (B >C){
				num1 = B;
				if (A > C){
					num2 = A;
					num3 = C;
				}
				else{
					num3 = A;
					num2 = C;
				}
			}
			else{
				num1 = C;
				num2 = B;
				num3 = A;
			}
		}
		else{
			if (A > C){
				if (B > C){
					num1= A;
					num2 = B;
					num3 = C;
				}
				else{
					num1 = A;
					num2 = C;
					num3 = B;
				}
				
			}
			else{
				num1 = C;
				num2 = A;
				num3 = B;
				
			}
		}
		
		
		cout << "Os valores em ordem crescente são " << num3 << " - "<< num2 << " - "<< num1 << endl; 
		
		cout << "Deseja efetuar a equação com outros números? (1-sim ou 0-não) :";
		cin >> opcao;
		
		if (opcao){
			goto REPETIR;
		}
		else{
			exit(0);
		}
		
    return 0;
}
