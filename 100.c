#include <stdio.h>
int main() {
	char a[100];
	char b[20];
	scanf("%s",a);
	scanf("%s",b);
	if(a==b)
	printf("%s",&a);
	else
	printf("%s",&b);
	return 0;
}
