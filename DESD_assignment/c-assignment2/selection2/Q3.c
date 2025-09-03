#include <stdio.h>

int main() {
    int id, dept;
    char dsgn;

    printf("Enter Employee ID: ");
    scanf("%d", &id);

    printf("Enter Department No 10/20/30/40: ");
    scanf("%d", &dept);

    printf("Enter Designation Code (M/S/s/C): ");
    scanf(" %c", &dsgn);

    switch(dept) {
        case 10:
            printf("Employee with employee id %d is working in \"Marketing\" department as ", id);
            switch(dsgn)
			{
                case 'M': printf("\"Manager\".\n");
						  break;
                case 'S': printf("\"Supervisor\".\n"); 
						  break;
                case 's': printf("\"Security Officer\".\n");
						  break;
                case 'C': printf("\"Clerk\".\n");
						  break;
                default:  printf("\"Invalid Designation\".\n");
            }
            break;

        case 20:
            printf("Employee with employee id %d is working in \"Management\" department as ", id);
            switch(dsgn) 
			{
                case 'M': printf("\"Manager\".\n");
						  break;
                case 'S': printf("\"Supervisor\".\n");
						  break;
                case 's': printf("\"Security Officer\".\n");
						  break;
                case 'C': printf("\"Clerk\".\n");
						  break;
                default:  printf("\"Invalid Designation\".\n");
            }
            break;

        case 30:
            printf("Employee with employee id %d is working in \"Sales\" department as ", id);
            switch(dsgn) 
			{
                case 'M': printf("\"Manager\".\n");
						  break;
                case 'S': printf("\"Supervisor\".\n"); 
						  break;
                case 's': printf("\"Security Officer\".\n");
						  break;
                case 'C': printf("\"Clerk\".\n"); 
						  break;
                default:  printf("\"Invalid Designation\".\n");
            }
            break;

        case 40:
            printf("Employee with employee id %d is working in \"Designing\" department as ", id);
            switch(dsgn) {
                case 'M': printf("\"Manager\".\n");
						  break;
                case 'S': printf("\"Supervisor\".\n");
						  break;
                case 's': printf("\"Security Officer\".\n");
						  break;
                case 'C': printf("\"Clerk\".\n");
						  break;
                default:  printf("\"Invalid Designation\".\n");
            }
            break;

        default:
            printf("Invalid Department Number.\n");
    }

    return 0;
}
