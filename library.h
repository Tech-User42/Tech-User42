#include <stdlib.h>     /* srand, rand */
#include <time.h> // Pour le time(null).
#include <string>
using namespace std;
int init_rand(); // Init du timestamp
int gen_random(int input); // Renvoie un nombre aléatoire

struct structure{
    int var_1;
    string var_2;
};

structure fonction(int var_1, string var_2);