#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main()
{
  int c=0;
  string articulo[10];
  float precio[10];
  float subTotal;
  float iva;
  float descuento;
  float total;  
       cout <<"\nPor favor ingrese la siguiente informacion de los Productos: \n\n";
    do{
        cout<<"=================";    	
        cout<<" Productos "<< c + 1 <<" ";
        cout<<"=================\n";    	
        cout<<"\n Articulo : ";cin>>articulo[c];        			        									
        cout<<"\n Precio : ";cin>>precio[c]; 
        c=c+1;  
        if(c<10){


        }
        cout<<"\n";         
    }
    while(c<10);
    system("pause");
    system("cls");   	
c=0;	
        cout<<"\n==============================\n";
        cout <<"         Facturacion ";
        cout<<"\n==============================\n\n"; 	 
    do{	
       
	    cout<<articulo[c]<<" -> "<<precio[c]<<" $ ";  
        c=c+1;  
        if(c<10){
           cout<<"\n";
        }             
        
    }while(c<10);
c=0;    
    do{	     
		subTotal += precio[c]; 
		iva = subTotal * 0.12;
		descuento = subTotal * 0.10;
		total = subTotal + iva - descuento; 
        c=c+1;                  
    }while(c<10);
    cout<<"\n=================\n";
    cout<<"SUBTOTAL:  "<<fixed<<setprecision(2)<<subTotal<<" $\n";   	    
    cout<<"IVA 12% + : "<<fixed<<setprecision(2)<<iva<<" $\n";
    cout<<"DESCUENTO 10% - : "<<fixed<<setprecision(2)<<descuento<<" $\n";
    cout<<"TOTAL : "<<fixed<<setprecision(2)<<total<<" $\n";
    
  return 0;
}
