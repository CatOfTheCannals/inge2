int test_me(int x) {
	int [] A = {5, 7, 9};
	int i = 0;
	while(i < 3){
		if(A[i] == x) break;
		i++;
	}
	return i;
}

// loop unroll
// NOTA: en vez de usar break mando el resto del codigo al else del if
int test_me(int x) {
	int [] A = {5, 7, 9};
	int i = 0;
	if(i < 3){
		if(A[i] == x){}
		else {
			i++;
			if(i < 3){
				if(A[i] == x){}
				else {
					i++;
					if(i < 3){
						if(A[i] == x){}
						else{
							i++;
						}
					}
				}
			}
		}
	}
	return i;
}

