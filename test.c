//5월 16일(월)
//1. 이름과 나이를 변수에 입력받고 출력하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	char name[10];
	int age;
	scanf("%s %d", &name, &age);
	printf("%s %d", name, age);
	return 0;
}

//2. 정수를 입력받고, 정수가 1이면 "a"를, 정수가 2이면 "b"를, 정수가 3이면 "c"를 출력하시오. (입력받은 정수가 1,2,3이 아닐시에는 "F"를 출력하시오.)

//3. 1~100까지를 출력하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	for (int i = 1; i < 101; i++) {
		printf("%d\n", i);
	}
	return 0;
}

//4. 사용자가 0을 입력할 때까지 계속 정수를 입력받고 출력하는 프로그램을 작성하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main()
{
	int number = 0;
	do {
		scanf("%d", &number);
	} while (number != 0); 
}

#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	int number = 0;
	scanf("%d", &number);
	if (number != 0) {
		scanf("%d", &number);
	}
	else if (number == 0) {
		printf("");
	}
}

//5. 구조체를 사용하면 좋을법한 실생활의 예를 생각해보고 이를 프로그램으로 구현하시오.
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

//5월 19일(목)


//5. 반복문을 활용하여 "hacker"를 5번 출력하시오.
#include <stdio.h>
int main() {
	int i;
		for (i = 0; i < 5; i++) {
			printf("hacker\n");
	}
}


