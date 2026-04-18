char *to_jaden_case (char *jaden_case, const char *string)
{
// write to jaden_case and return it
   int i =0;
    int j =0;
     while(string[i] != '\0')
       {
         if(i == 0 || string[i-1] == ' ')
            { 
                if(string[i] >= 'a' && string[i] <= 'z')
              {
                    jaden_case[j] = string[i] -32;
              }
           else
             {
                jaden_case[j] = string[i];
             }
            
            }
        else 
          {
            jaden_case[j] = string[i];
          }
       j++;
       i++;
      }
   jaden_case[j] = '\0';
	return jaden_case;
}