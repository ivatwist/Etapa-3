/*# Etapa-3
Algortimos para lista posicionada, indexada y ordenada*/
#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include "Lista.h"
#include "tipoPos.h"

#include "ListaO.h"
#include "CajaO.h"

#include "LisaI.h"
#include "Caja.h"

class Algoritmos{
  Algoritmos();
  
  public: 
  void listarIndexada(ListaI);
bool simetricaIndexada(ListaI);
bool buscarIndexada(int, ListaI);
void invertirIndexada(ListaI&);
void eliminarRepetidosIndexada(ListaI&);
bool subListaIndexada(ListaI, ListaI);
bool igualesIndexada(ListaI, ListaI);
void burbujaOriginalIndexada(ListaI);
void burbujaBidireccionalIndexada(ListaI);
void seleccionIterativaIndexada(ListaI);
void seleccionRecursivaIndexada(ListaI);
void seleccionRecursivaPilaIndexada(ListaI);
void insercionIndexada(ListaI);
void quickSortAhoIndexada(ListaI);
void quickSortIndexada(ListaI); //si la sublista tiene menos de 50 elementos se usa insercion
void mergeSortIndexada(ListaI);
void unionListasIndexadas(ListaI);
void unionListasDesordenadasIndexadas(ListaI);
  
};
#endif
