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

#include <iostream>
#include "animal.h"

using namespace std;

const string animal::kingdom = "Animalia";

animal::animal(const string &newSpecies) {
    setSpecies(newSpecies);
}

animal::animal(const string &newSpecies, Gender gender) : gender(gender) {
    setSpecies(newSpecies);
}

animal::animal(const string &newSpecies, float newWeight) {
    setSpecies(newSpecies);
    setWeight(newWeight);
}

animal::animal(const string &newSpecies, Gender gender, float newWeight) : gender(gender) {
    setSpecies(newSpecies);
    setWeight(newWeight);
}

const string &animal::getKingdom() {
    return kingdom;
}

const string &animal::getSpecies() const {
    return species;
}

Gender animal::getGender() const {
    return gender;
}

void animal::setGender(Gender newGender) {
    if (gender != UNKNOWN_GENDER && newGender != UNKNOWN_GENDER) {
        throw logic_error("Previous gender must be UNKNOWN_GENDER");
    }

    animal::gender = newGender;
}

float animal::getWeight() const {
    return weight;
}

void animal::setWeight(float newWeight) {
    if (!validateWeight(newWeight)) {
        throw invalid_argument("Weight must be > 0");
    }

    animal::weight = newWeight;
}

void animal::printInfo() {
    cout << "Animal Fields" << endl;
    cout << " Kingdom = [" << getKingdom() << "]" << endl;
    cout << " Species = [" << getSpecies() << "]" << endl;
    cout << " Weight  = [" << getWeight()  << "]" << endl;
    cout << " Gender  = [" << getGender()  << "]" << endl;
}

bool animal::isValid() {
    if (!validateWeight(weight)) {
        return false;
    }

    return true;
}

bool animal::validateWeight(const float newWeight) {
    if (newWeight == UNKNOWN_WEIGHT) {
        return true;
    }

    if (newWeight > 0) {
        return true;
    }

    return false;
}

bool animal::validateSpecies(const std::string newSpecies) {
    if (newSpecies.empty()) {
        return false;
    }

    return true;
}

void animal::setSpecies(const std::string newSpecies) {
    if (!validateSpecies(newSpecies)) {
        throw invalid_argument("A species can't be empty.");
    }

    species = newSpecies;
}
