
void randomize_key(i64 k[N]) {
    for (i64 i = 0; i < N; i++) 
            k[i] = arc4random_uniform(B);
}
void randomize_text(i64* t) {
	for (i64 i = 0; i < T; i++) t[i] = arc4random_uniform(B);
}