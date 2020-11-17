#include <stdio.h>
/**/

int main()
{
	char id;
	while (1) {
		int first = 0;
		int secondThird = 0;
		int exit = 0;
		printf("Enter an id.\n");
		for (int i = 0; i < 3; i++) {
			scanf("%c", &id);
			if (i == 0 && (id == '1')) {
				exit++;
			}
			if (i == 1 && id == '\n') {
				if (exit == 1) {
					system("pause");
					return 0;
				}
			}
			if (i == 0 && (id >= 97 && id <= 122)) {
				first++;
			}
			if ((i == 1 || i == 2) && (id >= 48 && id <= 57)) {
				secondThird++;
			}

		}
		getchar();

		if (first == 1 && secondThird >= 1) {
			printf("It's legal.\n");
		}
		else {
			printf("It's illegal.\n");
		}
	}
	system("pause");

	return 0;
}