#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "constant.c"
#include "shuffle.c"
#include "compute.c"
#include "text.c"
#include "print.c"

// #include <stdbool.h>
// #include <inttypes.h>
int main() {
    int f[P], f_inv[P], h[G], h_inv[G], v[G], v_inv[G], a[G], M[S][S];
    randomize(M);permutize(f,P);permutize(h,G);permutize(v,G);
    invert(h,h_inv,G);invert(v,v_inv,G);invert(f,f_inv,P);
    print_perm(f,P);
    print_perm(f_inv,P);
    hide_cursor();
    int delay = 150000;
    int T = 200000;
    
    //print_matrix(M);
    cls();
    for (int i = 0; i < T ; i++) { 
        h_forward(M, h);
        v_forward(M, v);
        permute(M, f);
        cursor_to(0,0);
        print_matrix(M);
        usleep(delay);
    }
    for (int i = 0; i < T ; i++) { 
        permute(M, f_inv);
        v_forward(M, v_inv);
        h_forward(M, h_inv);
        cursor_to(0,0);
        print_matrix(M);
        usleep(delay);
    }
}
      