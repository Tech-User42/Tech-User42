#include "library.h"
int init_rand(){ // Init du random avec le timestamp, nécessaire de le faire au moins une fois avant d'utiliser gen_random().
    srand (time(NULL));
    return 0;
}

int gen_random(int input){ // Return un nombre entre 0 et limit-1 (0-->9).
    return (rand() % (input-1));
}

structure fonction(int var_1, string var_2)
{
    structure out;
    out.var_1 = var_1;
    out.var_2 = var_2;
    return out;
}