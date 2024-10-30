#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Student {
    char name[50];
    int reg_no;
    float marks;
};

int main() {
    struct Student students[MAX_SIZE];
    int num_students, i;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Input student details
    for (i = 0; i < num_students; i++) {
        printf("Enter name, reg_no and marks for student %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].reg_no, &students[i].marks);
    }

    // Write the array of structures to a file
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), num_students, file);
    fclose(file);

    // Read the array of structures from the file and display on the screen
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Student read_students[MAX_SIZE];
    fread(read_students, sizeof(struct Student), num_students, file);
    fclose(file);

    printf("\nStudents read from file:\n");
    for (i = 0; i < num_students; i++) {
        printf("Name: %s, reg_no: %d, Marks: %.2f\n", read_students[i].name, read_students[i].reg_no, read_students[i].marks);
    }

    return 0;
}
