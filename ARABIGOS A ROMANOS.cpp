#include<iostream>
#include <wchar.h>
#include <locale.h>
#include <string.h>
using namespace std;

void ROMANOSARABIGOS()
{
			 	system("cls");
	int numero,unidades,decenas,centena,op;
	while(op!=1){		
    op=0;  

	cout<<"\n Digite un numero del 1 al 100 :\n";
    cin>>numero;

   unidades=numero%10; numero/=10;
   decenas=numero%10; numero/=10;
   centena=numero%10; numero/=10;
   
    switch (centena){
   	case 1: cout<<"C";break;
   }
   
    switch (decenas){
   	case 1: cout<<"X";break;
   	case 2: cout<<"XX";break;
   	case 3: cout<<"XXX";break;
   	case 4: cout<<"XL";break;
   	case 5: cout<<"L";break;
   	case 6: cout<<"LX";break;
   	case 7: cout<<"LXX";break;
   	case 8: cout<<"LXXX";break;
   	case 9: cout<<"XC";break;
   }
    
	switch (unidades){
   	case 1: cout<<"I";break;
   	case 2: cout<<"II";break;
   	case 3: cout<<"III";break;
   	case 4: cout<<"IV";break;
   	case 5: cout<<"V";break;
   	case 6: cout<<"VI";break;
   	case 7: cout<<"VII";break;
   	case 8: cout<<"VIII";break;
   	case 9: cout<<"IX";break;
   }
   		cout<<"\n ( 1 ) FINALIZAR o ( 2 ) para continuar:\n ";
	cin>>op;
	}

}


void ARABIGOSROMANOS()
{
char romano[100];
int valor[100];
int n=0,i,j,op,numero=0;
	while(op!=1){
cout<<"\n Escribe un numero Romano del I ( 1 ) al C ( 100 ):\n ";
cin>>romano;
n=strlen(romano);
for (i=0; i<n; i++)
	{
		if (romano[i]=='I' || romano[i]=='i')
		{
			valor[i]=1;
		}		
		if (romano[i]=='V' || romano[i]=='v')
		{
			valor[i]=5;
		}		
		if (romano[i]=='X' || romano[i]=='x')
		{
			valor[i]=10;
		}		
		if (romano[i]=='L' || romano[i]=='l')
		{
			valor[i]=50;
		}		
		if (romano[i]=='C' || romano[i]=='c')
		{
			valor[i]=100;
		}				
	}
for (j=0; j<n; j++)
	{
		if (j==n-1)
		{
			numero+=valor[j];
		}
		else
		{
			if (valor[j]>=valor[j+1])
			{
				numero+=valor[j];
			}
			else
			{
				numero-=valor[j];
			}
		}
	}
	cout<<numero<<endl;
	   		cout<<"\n ( 1 ) FINALIZAR o ( 2 ) para continuar:\n ";
	cin>>op;
	system("cls");
	}
}

int main(int argc, char *argv[]) {
	
    setlocale(LC_ALL,"");
	int opcion=0;
	while(opcion !=3)
	{	
		 	system("cls");

  cout<<"\n                                 INICIO";
  cout<<"\n-----------------------------------------------------------------------------------";
	     cout<<"\n    Convertir numeros Romanos a Arabigos o viceversa";
		 cout<<"\n    1. Romanos a Arabigos";
	     cout<<"\n    2. Arabigos a Romanos ";   
	     cout<<"\n    3. Finalizar programa.";
  cout<<"\n-----------------------------------------------------------------------------------";
		 cout<<"\nSeleccione opcion:\n";
		 cin>>opcion;
		system("cls");
		 switch(opcion)
		 {
		 case 1: ROMANOSARABIGOS();break;
		 case 2: ARABIGOSROMANOS();break;
		 case 3: break;	
		 }

	}
}
