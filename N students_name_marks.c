#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    FILE *file = fopen("student_records.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    struct Student student;

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", student.name);
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &student.marks);

        fprintf(file, "%s %d\n", student.name, student.marks);
    }

    fclose(file);
    printf("Data appended to students_records.txt successfully.\n");

    return 0;
}
