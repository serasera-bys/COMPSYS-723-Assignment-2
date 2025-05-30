//The type 'string' is defined as 'char*' in Esterel, hence passing a string by referenc  is 'char**'
//Aviod naming a function 'recv'
#include <stdbool.h>
#define boolean bool

float saturateThrottle(float throttleIn, bool* saturate);
float regulateThrottle(bool isGoingOn, float cruiseSpeed, float vehicleSpeed);
