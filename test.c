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
//1. 자신의 이름으로 배열을 초기화 한 뒤, 출력하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	char name[] = "iris";
	printf("%s", name);
}

//2. 사용자로부터 입력받은 문자열을 배열에 입력하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	char a[10];
	scanf("%s", &a);
}

//3. 사용자로부터 입력받은 문자열을 배열에 입력하고, 출력하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	char a[10];
	scanf("%s", &a);
	printf("%s", a);
}

//4. 사용자로부터 입력받은 숫자가 1이면 "yes"를 3이면 "no"를 출력하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	int number;
	scanf("%d", &number);
	if (number == 1) {
		printf("yes");
	}
	else if (number == 3) {
		printf("no");
	}
}

//5. 반복문을 활용하여 "hacker"를 5번 출력하시오.
#include <stdio.h>
int main() {
	int i;
		for (i = 0; i < 5; i++) {
			printf("hacker\n");
	}
}

//1. 18살인 철수와 14살인 민아, 25살인 진혁이 반에 있습니다. 이들의 이름과 나이를 저장할 수 있는 구조체를 선언하고, 구조체의 모든 원소를 출력해주세요.
#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
int main() {
	struct class {
		char name[10];
		int age;
	};
		struct class a;
		strcpy(a.name, "철수");
		a.age = 18;
	
		struct class b;
		strcpy(b.name, "민아");
		b.age = 14;
	
		struct class c;
		strcpy(c.name, "진혁");
		c.age = 25;
		printf("%s %s %s %d %d %d", a.name, b.name, c.name, a.age, b.age, c.age);
}

//2. 사용자로부터 0이 입력되기전까지 계속 정수의 입력을 받고, 입력받은 양수의 총합과 / 입력받은 음수의 총합을 각각 출력해주세요.


//3. 사용자로부터 입력받은 문자열의 원소(arr[0], arr[1]...)를 각각 xor 3을 모두 하여 암호화한뒤 이를 cipher라는 이름의 배열에 저장하고, 출력하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	char arr[] = {""};
	char cipher[] = {""};
	scanf("%s %s", &arr[0], &arr[1]);
	cipher = arr[0] ^ 3, arr[1] ^ 3;
	printf("%s", cipher);
}

//5월 23일(월)
//1. 반복문을 활용하여 10글자 입력받고 출력하기.


//2. 반복문을 활용하여 구구단 1~9단까지를 출력하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	for (int a = 1; a < 10; a++) {
		for (int b = 1; b < 10; b++) {
			printf("%d*%d=%d\n", a, b, a * b);
		}
	}
}

//1. 사용자의 입력값이 0이 될때까지 계속 입력받고, 짝수끼리의 합과 홀수끼리의 합을 각각 출력하시오.

//2. 사용자가 입력한 정수 값이 소수인지 판별하시오.
#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	int i;
	scanf("%d", &i);
	if (i % 2) {
		printf("소수");
	}
}

//3. 구조체를 활용하여 사용자로부터 두 점의 좌표를 입력받고, 두 점 사이의 거리를 출력하시오.

