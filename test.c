#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
int main() {
	struct exam {
		int date;
		char title[10];
	};
	struct exam a;
	a.date = 16;
	strcpy(a.title, "math");

	struct exam b;
	b.date = 17;
	strcpy(b.title, "korea");

	printf("%d", a.date);
}
