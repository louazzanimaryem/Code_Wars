
const char* even_or_odd(int number)
{
  // return a statically allocated string,
  // for example a string literal
  
  if (number % 2 == 0)
    {
       return ("Even");
} 
else if (number % 2 != 0)
{
    return ("Odd");
}

if((number < 0) % 2 == 0)
  {
    return "Even";
}
else if((number < 0) % 2 != 0)
  {  
     return "Odd";
}
  }