#include "main.h"

/**
 * _strspn - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

unsigned int _strspn(char *s, char *accept)                                                                                          
{                                                                                                                                    
        unsigned int bytes = 0;                                                                                                      
        int index;                                                                                                                   
                                                                                                                                     
        while (*s)                                                                                                                   
        {                                                                                                                            
                for (index = 0; accept[index]; index++)                                                                              
                {                                                                                                                    
                        if (*s == accept[index])                                                                                     
                        {                                                                                                            
                                bytes++;                                                                                             
                                break;                                                                                               
                        }                                                                                                            
                                                                                                                                     
                        else if (accept[index + 1] == '\0')                                                                          
                                return (bytes);                                                                                      
                }                                                                                                                    
                                                                                                                                     
                s++;                                                                                                                 
        }                                                                                                                            
                                                                                                                                     
        return (bytes);                                                                                                              
}

