#include <stdio.h>

int main() {
	int tab = 0;
	int x;
	printf("Digite a tabuada que deseja realizar \n");
	scanf("%i", &tab);
	printf("Tabuada: \n");
	for(x = 0; x <= 10; x++){
		printf("%ix%i = %i\n", tab, x, x * tab);
	}
	return 0;
}
