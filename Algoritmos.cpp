/*
 * Algoritmos.cpp
 *
 *  Created on: May 1, 2018
 *      Author: Ivania Calderon Marin
 */
#include <iostream>
using namespace std;
#include "Algoritmos.h"
#include "ListaI.h"

/*Requiere: lista inicializada
Modifica: no modifica nada
Efecto: imprime la lista*/
void Algoritmos::listarIndexada(ListaI lista){
	
	
	for(int posicion=0; posicion<lista.numElem(); posicion++){
		
		cout<< lista.recuperar(posicion)<<endl;
	}
	
}

/*Requiere: lista inicializada
Modifica: no modifica nada
Efecto: dice si la lista es simetrica, una lista simetrica seria 151 y una no simetrica seria 324
*/
bool Algoritmos::simetricaIndexada(ListaI lista){
	bool simetria;
	int pos=0;


	while(lista.recuperar(pos)==lista.recuperar(lista.numElem()-1-pos) && pos<lista.numElem()/2){
		cout<<"me meti "<<pos<<" veces"<<endl;
		pos++;
		
		
	}
	
	if(pos==lista.numElem()/2){
		simetria=true;
		
		
	}else{
		
		simetria=false;
		
	}
	
	return simetria;
	
}

/*Efecto: busca si esta el elemento en la lista y devuelve verdadero si esta y falso si no esta
Requiere: lista incializada
Modifica: no modifica nada
*/
bool Algoritmos:: buscarIndexada(int elemento, ListaI lista){
	bool esta=false;
	int posicion=0;
	
	while(!esta && posicion<lista.numElem()){
		if(elemento==lista.recuperar(posicion)){
			esta=true;
			
		}
		else{
		posicion++;
		}
	}
	

	return esta;
	
	
}


/*Requiere: lista inicializada
Efecto: cambia el orden de la lista, lo que significa que una lista 1345 pasa a ser 5431
Modifica: la lista
*/
void Algoritmos::invertirIndexada(ListaI& lista){
	int contador=0;
	int contador2=lista.numElem()-1;
	
	
	
	while(contador<lista.numElem()/2){
		lista.intercambiar(contador, contador2);
		contador++;
		contador2--;
		
		
		
	}
	
}


/*Requiere: lista inicializada
Modifica: lista
Efecto: borra los elementos repetidos en la lista
*/
void Algoritmos::eliminarRepetidosIndexada(ListaI& lista){
	
	for(int pos=0; pos<lista.numElem(); pos++){
		
		for(int pos2=pos+1; pos2<lista.numElem(); pos2++){
			
			if(lista.recuperar(pos)==lista.recuperar(pos2)){
				lista.borrar(pos2);
				pos2=pos2-1;
			}
			
		}
		
	}
	
}

/*Requiere: lista inicializada y sublista inicializada y de menor tamano que la lista
Efecto: dice si una lista se encuentra contenida en otra, lo que significa que es sublista de la lista
Modifica: no modifica nada
*/
bool Algoritmos::subListaIndexada(ListaI lista, ListaI sublista){
	int pos=0;
	int pos2=0;
	bool sub=true;
	
	while(pos<sublista.numElem() && sub){
		while(pos2<lista.numElem() && lista.recuperar(pos2)!=sublista.recuperar(pos)){
			
			pos2++;
		}
		if(pos2==lista.numElem()){
			
			sub=false;
		}
		else{
			pos++;
			
		}
	}
	return sub;
}


/*Requiere: dos listas inicializadas y del mismo tamano
Efecto: dice si dos listas tienen los mismos elementos
Modifica: no modifica nada
*/
bool Algoritmos::igualesIndexada(ListaI lista, ListaI lista2){
	bool igual=true;
	int pos=0;
	
	while(igual && pos<lista.numElem()){
		if(lista.recuperar(pos)!=lista2.recuperar(pos)){
			igual=false;
			
		}
		pos++;
		
	}
	
	return igual;
	
}

/*Requiere: lista inicializada
Efecto: ordena los elementos de una lista de menor a mayor
Modifica: lista
*/
void Algoritmos::burbujaOriginalIndexada(ListaI& lista){
	
	for(int contador=0; contador<lista.numElem(); contador++){
		for(int pos=0; pos<lista.numElem()-1; pos++){
			
			if(lista.recuperar(pos)>lista.recuperar(pos+1)){
				
				lista.intercambiar(pos, pos+1);
			}
		}
		
	}
	
}


/*Efecto: ordena la lista de menor a mayor
Requiere: lista inicializada
Modifica: lista
*/
void Algoritmos::seleccionIterativaIndexada(ListaI& lista){
	int posTemporal;
	int menor;
	
	for(int contador=0; contador<lista.numElem(); contador++){
		
		menor=lista.recuperar(contador);
		
		for(int pos=contador+1; pos<lista.numElem(); pos++){
			if(lista.recuperar(pos)<menor){
				menor=lista.recuperar(pos);
				posTemporal=pos;

				
			}
			
			lista.intercambiar(contador, posTemporal);
		}
		
		
	}
	
}
