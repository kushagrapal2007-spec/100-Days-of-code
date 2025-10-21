//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} Role;

Role string_to_role(const char *role_str) {
    if (strcmp(role_str, "ADMIN") == 0) {
        return ADMIN;
    } else if (strcmp(role_str, "USER") == 0) {
        return USER;
    } else {
        return GUEST;
    }
}

void display_message(Role role) {
    switch (role) {
        case ADMIN:
            printf("Welcome Administrator! Full access granted.\n");
            break;
        case USER:
            printf("Welcome User! Standard access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown Role.\n");
            break;
    }
}

int main() {
    char input_role_str[10];
    if (scanf("%9s", input_role_str) != 1) {
        return 1;
    }
    
    Role user_role = string_to_role(input_role_str);
    display_message(user_role);
    
    return 0;
}
