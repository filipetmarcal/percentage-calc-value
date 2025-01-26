/*
This function reply the math.percentage(), function available in JavaScript.
How to use: Multiply the value to percent. Example: 50 * percentage(30)
*/
float percentage(float value){
  return value / 100;
}

/*
This function convert decimal number to percentage.
How to use: With any decimal value, use dec2percentage(value).
*/
float dec2percentage(float value){
  return value * 100;
}

/*
This function convert decimal number to percentage and print "{value}%".
How to use: With any decimal value, use dectopercentage(value).
*/
void dectopercentage(float value){
  printf("%f %%",dec2percentage(value));
}
