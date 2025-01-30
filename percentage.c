#include "percentage.h"
#include <stdio.h>
/*
This function use the percentage value and convert to decimal number.
How to use: Multiply the value to percent. Example: 50 * percent(30)
*/
float percent(float value){
  return value / 100;
}

/*
This function convert any decimal number to percentage.
How to use: With any decimal value, use dec2percentage(value). Example: dec2percentage(0.4)
*/
float dec2percent(float value){
  return value * 100;
}

/*
This function convert any decimal number to percentage and print "{value}%".
How to use: With any decimal value, use dectopercentage(value). Example: dectopercentage(0.75)
*/
void dectopercent(float value){
  printf("%f %%",dec2percent(value));
}
