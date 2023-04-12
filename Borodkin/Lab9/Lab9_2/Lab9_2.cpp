#include <stdio.h>
#include <conio.h>

struct note {
	char lastname[20];
	char phone_number[20];
	int date[3];
	int salary;
};

int main() {
	note workers;
	FILE* f1;
	int option = 2;
	puts("Choose option: ");
	puts("1. Edit file");
	puts("2. View file");
	puts("Any other. Exit program");
	//scanf("%s", &option);
	if (option == 1) {
		f1 = fopen("data.bin", "wb");
		while (true) {
			puts(("Input last name or 0 (input ends): "));
			scanf("%s", &workers.lastname);
			if (workers.lastname[0] == '0') break;
			puts(("Input salary: "));
			scanf("%d", &workers.salary);
			fwrite(&workers, sizeof(workers), 1, f1);
		}
		fclose(f1);
		puts(("File data.bin edited.\n"));
		f1 = fopen("data.bin", "r+b");
		while (true) {
			fread(&workers, sizeof(workers), 1, f1);
			if (!feof(f1)) {
				break;
			};
			printf("last name = %s, salary = %d", workers.lastname, workers.salary);
		}
		fclose(f1);
	}
	else if (option == 2) {
		f1 = fopen("data.bin", "rb");
		fread(&workers, sizeof(note), 1, f1);
		printf("%d %f", workers.lastname, workers.salary);
	};
}