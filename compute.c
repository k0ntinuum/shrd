
int h_value(int X[S][S], int k) {
    int r = k / C;
    int c = 3 * ( k % C );
    return 9*X[r][c] + 3*X[r][c+1] + 1*X[r][c+2];;
}

int v_value(int X[S][S], int k) {
    int c = k / C;
    int r = 3 * ( k % C );
    return 9*X[r][c] + 3*X[r+1][c] + 1*X[r+2][c];
}

void v_store(int X[S][S], int k , int j )  {
    int c = k / C;
    int r = 3 * ( k % C );
	X[r][c] = j/9;
	j -= 9*X[r][c];
	X[r+1][c] = j/3;
	j -= 3*X[r+1][c];
	X[r+2][c] = j;
}
void h_store(int X[S][S], int k , int j )  {
    int r = k / C;
    int c = 3 * ( k % C );
	X[r][c] = j/9;
	j -= 9*X[r][c];
	X[r][c+1] = j/3;
	j -= 3*X[r][c+1];
	X[r][c+2] = j;
}

void permute(int X[S][S], int f[P]) {
    int r0, r1, c0, c1, N[S][S];
    for (int i = 0; i < S; i++) for (int j = 0; j < S; j++) N[i][j] = X[i][j];
    for (int i = 0; i < S*S ; i++) {
		r0 = i/S;
		c0 = i%S;
		r1 = f[i]/S;
		c1 = f[i]%S;
		X[r1][c1] = N[r0][c0]; 
	}
}



void h_forward(int X[S][S], int g[G]) {
    for (int k = 0 ; k < R*C ; k++) h_store(X,  k, g[h_value(X, k)]);
}
void v_forward(int X[S][S], int g[G]) {
    for (int k = 0 ; k < R*C ; k++) v_store(X,  k, g[v_value(X, k)]);
}



