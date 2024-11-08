
void print_perm(int* f, int l) {
	for (int i = 0; i < l; i++)  {
        if (i % 16 == 0 ) printf("\n");
        printf("%03d ", f[i]);
        
    }
    printf("\n");
}
void print_matrix(int X[S][S]) {
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++)
            switch (X[i][j]) {
                case 0 : rgb(0,255,0);printf("O ");break;
                case 1 : rgb(0,255,0);printf("| ");break;
                case 2 : rgb(0,255,0);printf("  ");break;
                default : printf("%2d", X[i][j]);break;
        }
        printf("\n");
    }
    printf("\n");
}
// void print_matrix(int X[S][S]) {
//     for (int i = 0; i < S; i++) {
//         for (int j = 0; j < S; j++)
//             switch (X[i][j]) {
//                 case 0 : rgb(255,255,255);printf("O ");break;
//                 case 1 : rgb(255,255,255);printf("| ");break;
//                 case 2 : rgb(255,255,255);printf("  ");break;
//                 default : printf("%2d", X[i][j]);break;
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

void print_h_values(int X[S][S]) {
    for (int i = 0; i < 27; i++) {
        if (i % 3 == 0 ) printf("\n");
        printf("%02d ", h_value(X,i));
    }
    printf("\n\n");
}

void print_v_values(int X[S][S]) {
    for (int i = 0; i < 27; i++) {
        if (i % 3 == 0 ) printf("\n");
        printf("%02d ", v_value(X,i));
    }
    printf("\n\n");
}
