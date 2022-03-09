///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   08_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include <iostream>

#include "animal.h"


int main() {
    animal myFirstAnimal = animal( "Felis catus" );
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeight( 19 ); // @todo Refactor to include Unit of Measure
    myFirstAnimal.printInfo();

    return 0;
}
