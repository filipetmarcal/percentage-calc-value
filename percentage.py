#This function use the percentage value and convert to decimal number.
#How to use: Multiply the value to percent. Example: 50 * percent(30)
def percent(value):
  return value / 100

#This function convert any decimal number to percentage.
#How to use: With any decimal value, use dec2percentage(value).
def dec2percent(value):
  return value * 100

#This function convert any decimal number to percentage and print "{value}%".
#How to use: With any decimal value, use dectopercentage(value).
def dectopercent(value):
  print(f"{dec2percentage(value)}%")
}



