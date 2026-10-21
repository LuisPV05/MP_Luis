/*
 * Metodología de la Programación: Kmer2
 * Curso 2023/2024
 */

/**
 * @file main.cpp
 * @author Luis Pérez Velasco<luispv05@correo.ugr.es>
 * 
 * 
 */


#include "KmerFreq.h"

using namespace std;

// Constructor por defecto de KmerFreq
KmerFreq::KmerFreq() : _kmer(), _frequency(0){}

// Obtener el kmer asociado
Kmer KmerFreq::getKmer(){
    return _kmer;
}

// Obtener la frecuencia del kmer
int KmerFreq::getFrequency(){
    return _frequency;
}

// Establecer el kmer asociado
void KmerFreq::setKmer(Kmer kmer){
    _kmer = kmer;
}

// Establecer la frecuencia del kmer
void KmerFreq::setFrequency(int frequency){
    // Verificar si la frecuencia es negativa
    if(frequency<0){
        throw std::out_of_range("Frecuencia no puede ser negativa");
    }
    _frequency = frequency;
}

// Obtener una representación en cadena del KmerFreq
string KmerFreq::toString(){
    return _kmer.toString() + " " + to_string(_frequency);
}
