#include "hash_tables.h"
/**
  * hash_djb2: This hashes a string using the DJB2 algorithm. 
  * @str: This is the string to be hashed.
  */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c -- This actually gives a different answer*/
    }
    return (hash);
}
