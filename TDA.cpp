#include<stdio.h>
#include<conio.h>
#include<string.h>

struct persona{
	int clave;
	char nombre [55];
};
persona obj1;
persona obj2;

int main (){
	obj1.clave=2304;
	strcpy(obj1.nombre,"Edwin De Jesus Rodriguez Perez");
	
		obj2.clave=2305;
	strcpy(obj2.nombre,"Angles De la luz");
	
	printf("Clave: %d  -  Nombre : %s/n" ,obj1.clave,obj1.nombre); 
	printf("Clave: %d  -  Nombre : %s/n" ,obj2.clave,obj2.nombre);
	
	getch();
	return 0;
}
