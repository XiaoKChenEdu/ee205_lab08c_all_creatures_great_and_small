///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file animal.cpp
/// @version 1.0
///
/// @author Xiaokang Chen <xiaokang@hawaii.edu>
/// @date   08_Mar_2022
///////////////////////////////////////////////////////////////////////////////


#include "animal.h"

using namespace std;

const string animal::kingdom = "Animalia";

animal::animal(const string &newSpecies) : species(newSpecies) {
    animal::species = newSpecies;
}

animal::animal(const string &species, Gender gender) : species(species), gender(gender) {}

animal::animal(const string &species, float weight) : species(species), weight(weight) {}

animal::animal(const string &species, Gender gender, float weight) : species(species), gender(gender), weight(weight) {}

const string &animal::getKingdom() {
    return kingdom;
}

const string &animal::getSpecies() const {
    return species;
}

Gender animal::getGender() const {
    return gender;
}

void animal::setGender(Gender gender) {
    animal::gender = gender;
}

float animal::getWeight() const {
    return weight;
}

void animal::setWeight(float weight) {
    animal::weight = weight;
}

void animal::printInfo() {

}

bool animal::isValid() {
    return false;
}
