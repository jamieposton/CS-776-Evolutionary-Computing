#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int correctvec[100] = { 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,
						1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0,
						1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 
						1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 
						1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};

// Basically use hamming distance, ezpz
double eval(int* entrystring){
	double distance = 0.0;
	for(int i = 0; i < 100; i++){
		if(entrystring[i] != correctvec[i]){
			distance++;
		}
	}

	distance = 100.0 - distance;

	// Adding a shoulder
	if(distance < 69.0 && distance > 40.0){
		distance = 69.0;
	}
	return distance;
}