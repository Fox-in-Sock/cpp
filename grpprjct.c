/*
    Go through this code thoroughly
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

typedef struct {
    char name[50];
    int age;
    char blood_group[4];
    int factors_present;
} Patient;

int main() {
    Patient patients[MAX_PATIENTS];
    int count = 0;

    printf("Enter patient details (name, age, blood group): \n");
    printf("Enter 'quit' to stop.\n");

    while (1) {
        char name[50];
        int age;
        printf("Patient %d:\n", count + 1);
        printf("Name: ");
        scanf("%s", name);
        if (strcmp(name, "quit") == 0) break;
        printf("Age: ");
        scanf("%d", &age);
        printf("Blood Group: ");
        scanf("%s", patients[count].blood_group);
        strcpy(patients[count].name, name);
        patients[count].age = age;

        // Ask about factors
        printf("Do you have any of the following factors at the moment?\n");
        printf("1. Acquired immunodeficiency syndrome (AIDS)\n");
        printf("2. Activities that increase risk of HIV infection\n");
        printf("3. Anemia (a low level of hemoglobin in the blood)\n");
        printf("4. Asthma, severe\n");
        printf("5. Bleeding disorders, congenital\n");
        printf("6. Cancers involving blood cells\n");
        printf("7. Certain medications\n");
        printf("8. Heart disease, severe\n");
        printf("9. Hepatitis B or C infection\n");
        printf("10. High blood pressure\n");
        printf("11. Malaria or exposure to malaria\n");
        printf("12. Pregnancy\n");
        printf("13. Recent major surgery\n");
        printf("Enter '1' if yes, '0' if no (separated by spaces): ");
        scanf("%d", &patients[count].factors_present);
        
        count++;
        if (count >= MAX_PATIENTS) {
            printf("Maximum number of patients reached.\n");
            break;
        }
    }

    char desired_blood_group[4];
    printf("\nEnter the desired blood group (e.g., O+): ");
    scanf("%s", desired_blood_group);

    FILE *desired_blood_file = fopen("desiredblood.txt", "w");
    if (desired_blood_file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(desired_blood_file, "Qualified Blood Donors for Blood Group %s:\n", desired_blood_group);
    for (int i = 0; i < count; i++) {
        if (patients[i].age >= 18 && patients[i].age <= 60 && 
            strcmp(patients[i].blood_group, desired_blood_group) == 0 &&
            !patients[i].factors_present) {
            fprintf(desired_blood_file, "Name: %s, Age: %d, Blood Group: %s\n", 
                   patients[i].name, patients[i].age, patients[i].blood_group);
        }
    }

    fclose(desired_blood_file);

    return 0;
}
