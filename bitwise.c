#include <stdio.h>

int main() {
    int i = 150;
    int k = 160;
    printf(" %d\t%d\t", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("\n%d\t%d", i, k);

	return 0;
}
