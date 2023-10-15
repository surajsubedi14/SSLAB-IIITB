#ifndef SERVER_CONSTANTS
#define SERVER_CONSTANTS

#define INITIAL_PROMPT "....................Welcome Back to Academia : : Course Registration.................... \nLogin Type\nEnter Your Choice { 1.Admin , 2.Professor, 3.Student }"

// ========== COMMON TEXT =============================

// LOGIN
#define LOGIN_ID "Enter your login ID"
#define PASSWORD "Enter your password \n# "
#define INVALID_LOGIN "The login ID specified doesn't exist!$"
#define INVALID_PASSWORD "The password specified doesn't match!$"
#define SALT_BAE "666"

#define CUSTOMER_LOGIN_WELCOME "Welcome dear Faculty! Enter your credentials to gain access to your account!"

#define CUSTOMER_LOGIN_SUCCESS "..........Welcome To Faculty Menu!"

#define CUSTOMER_LOGOUT "Logging you out now dear Faculty! Good bye!$"

#define CUSTOMER_MENU "1. View Offering courses\n2. Add New Course \n3. Remove Course From Catalog\n4. Update Course Details\n5. Change Password\n6. Logout and Exit\n Enter Your choice:"

// ====================================================

// ========== ADMIN SPECIFIC TEXT======================

// LOGIN WELCOME
#define INVALID_MENU_CHOICE "It seems you've made an invalid menu choice\nYou'll now be redirected to the main menu!^"
#define ADMIN_LOGIN_WELCOME "Enter your credentials!\n"
//#define ADMIN_LOGIN_SUCCESS "Welcome"
#define ADMIN_LOGOUT "Logging you out now! Good bye!$"
// ADMIN MENU
#define ADMIN_MENU "....... Welcome to Admin Menu .......\n1. Add Student\n2. View Student Details\n3. Add Faculty\n4. View Faculty Details\n5. Activate Student\n6. Block Student \n7. Modify Student Details\n8. Modify Faculty Details\n9.Logout and Exit\nEnter Your Choice:"

// ADD STUDENT
#define ADMIN_ADD_STUDENT_NAME "What is the Student's name?"
#define ADMIN_ADD_STUDENT_GENDER "What is the Student's gender?\nEnter M for male, F for female and O for others"
#define ADMIN_ADD_STUDENT_AGE "What is the Student's age?"
#define ADMIN_ADD_STUDENT_AUTOGEN_LOGIN "The autogenerated login ID for the Student is : "
#define AUTOGEN_PASSWORD "ssrocks" // append to end of next string macro
#define ADMIN_ADD_STUDENT_AUTOGEN_PASSWORD "The autogenerated password for the Student is : "
#define ADMIN_ADD_STUDENT_WRONG_GENDER "It seems you've enter a wrong gender choice!\nYou'll now be redirected to the main menu!^"
#define STUDENT_LOGIN_ID_DOESNT_EXIT "No Student could be found for the given login ID$"
#define GET_STUDENT_ID "Enter the Student ID of the student you're searching for"

#define STUDENT_ID_DOESNT_EXIT "No student could be found for the given ID"

#define ADMIN_MOD_STUDENT_ID "Enter the ID of the student who's information you want to edit"
#define ADMIN_MOD_STUDENT_MENU "Which information would you like to modify?\n1. Name 2. Age 3. Gender \nPress any other key to cancel"

#define ADMIN_MOD_STUDENT_NEW_NAME "What's the updated value for name?"
#define ADMIN_MOD_STUDENT_NEW_GENDER "What's the updated value for gender?"
#define ADMIN_MOD_STUDENT_NEW_AGE "What's the updated value for age?"

#define ADMIN_MOD_STUDENT_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"





#define ERRON_INPUT_FOR_NUMBER "It seems you have passed a sequence of alphabets when a number was expected or you have entered an invalid number!\nYou'll now be redirected to the main menu!^"

//FACULTY
#define ADMIN_MOD_FACULTY_ID "Enter the ID of the Faculty who's information you want to edit"
#define FACULTY_ID_DOESNT_EXIT "No Faculty could be found for the given ID"
#define ADMIN_MOD_FACULTY_MENU "Which information would you like to modify?\n1. Name 2. Age 3. Gender \nPress any other key to cancel"

#define ADMIN_MOD_FACULTY_NEW_NAME "What's the updated value for name?"
#define ADMIN_MOD_FACULTY_NEW_GENDER "What's the updated value for gender?"
#define ADMIN_MOD_FACULTY_NEW_AGE "What's the updated value for age?"

#define ADMIN_MOD_FACULTY_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"





#endif