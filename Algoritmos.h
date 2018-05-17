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
  void listarIndexada(ListaI); //completada
bool simetricaIndexada(ListaI); //completada
bool buscarIndexada(int, ListaI); //completada
void invertirIndexada(ListaI&); //completada
void eliminarRepetidosIndexada(ListaI&); //completada
bool subListaIndexada(ListaI, ListaI); //completada
bool igualesIndexada(ListaI, ListaI); //completada
void burbujaOriginalIndexada(ListaI&); //completada
void burbujaBidireccionalIndexada(ListaI&);
void seleccionIterativaIndexada(ListaI&); //completada
void seleccionRecursivaIndexada(ListaI&, int);
void seleccionRecursivaPilaIndexada(ListaI&);
void insercionIndexada(ListaI);
void quickSortAhoIndexada(ListaI);
void quickSortIndexada(ListaI); //si la sublista tiene menos de 50 elementos se usa insercion
void mergeSortIndexada(ListaI);
void unionListasIndexadas(ListaI);
void unionListasDesordenadasIndexadas(ListaI);
  
};
#endif
