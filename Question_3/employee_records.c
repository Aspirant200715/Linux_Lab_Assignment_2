#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {

    int fd;

    struct Employee emp1 = {101, "Alice", 50000};
    struct Employee emp2 = {102, "Bob", 60000};
    struct Employee emp3 = {103, "Charlie", 55000};

    fd = open("employee_records.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);

    if(fd < 0){
        perror("File Open Error");
        return 1;
    }

    // Write employee records
    write(fd, &emp1, sizeof(emp1));
    write(fd, &emp2, sizeof(emp2));
    write(fd, &emp3, sizeof(emp3));

    printf("Employee records written successfully.\n");

    // Update Bob's salary
    struct Employee updated = {102, "Bob", 75000};

    lseek(fd, sizeof(struct Employee), SEEK_SET);

    write(fd, &updated, sizeof(updated));

    printf("Employee record updated successfully.\n");

    // Retrieve third record
    struct Employee temp;

    lseek(fd, 2 * sizeof(struct Employee), SEEK_SET);

    read(fd, &temp, sizeof(temp));

    printf("\nRetrieved Record:\n");

    printf("ID: %d\n", temp.id);
    printf("Name: %s\n", temp.name);
    printf("Salary: %.2f\n", temp.salary);

    close(fd);

    printf("\nFile closed successfully.\n");

    return 0;
}
