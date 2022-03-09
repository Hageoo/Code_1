#include <stdio.h>
#include <string.h>

int main (){
     char string1[] = "Ajo";
     char string2[]= "Code";
     //up following we have some useful string functions 
    //strlwr(string1);                              // converts a string to lowercase //REMINDER I STILL HAVE TO INCLUDE THE CODE FOR THIS TO WORK
   //strupr(string1);                           // converts a string to uppercase       //REMINDER I STILL HAVE TO INCLUDE THE CODE FOR THIS TO WORK
   //strcat(string1, string2);             // appends string2 to end of string1 
   //strncat(string1, string2, 1);       // appends n characters from string2 to string1 (conecta una sola parte del segundo string = AjoC)
   //strcpy(string1, string2);             // copy string2 to string1 (directly assumes the value of the string 2 and copy/paste it to string (Ajo = Code))
   //strncpy(string1, string2, 2);      // copy n characters of string2 to string1 (replace characters of one or another string)

      //strset(string1, '?');        //sets all characters of a string to a given character (in this case replaces it with a question mark (Ajo=???))
   //strnset(string1, 'x', 1);  //sets first n characters of a string to a given character (Ajo=xjo)
   //strrev(string1);             //reverses a string (Ajo=ojA)

     //int result = strlen(string1);                          // returns string length as int (Ajo=3)
   //int result = strcmp(string1, string2);         // string compare all characters (To compare both strings and return a value if its true then we will get a 0, Ajo and Code are not the same so we will get a -1)
   //int result = strncmp(string1, string2, 1);   // string compare n characters (this one will compare only the first characters of the strings involved)
   //int result = strcmpi(string1, string1);        // string compare all (ignore case) (same as the upper ones)
   //int result = strnicmp(string1, string1, 1);  // string compare n characters (ignore case) (same as the upper ones)
   printf ("%s", string1);

   return 0;
}