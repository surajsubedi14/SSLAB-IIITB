#ifndef STUDENT_RECORD
#define STUDENT_RECORD

struct Student
{
    int id; // 0, 1, 2 ....
    char name[25];
    char gender; // M -> Male, F -> Female, O -> Other
    int age;
    // Login Credentials
    char login[30]; // Format : name-id (name will the first word in the structure member `name`)
    char password[30];
    int status;
    // Bank data
   // int account; // Account number of the account the customer owns
};

struct Faculty
{
    int id; // 0, 1, 2 ....
    char name[25];
    char gender; // M -> Male, F -> Female, O -> Other
    int age;
    // Login Credentials
    char login[30]; // Format : name-id (name will the first word in the structure member `name`)
    char password[30];
    char department[50];
    //int status;
};


struct Course{
    char name[50];
    char department[50];
    int credits;
    int seats;
    int isActive;
    int id;
    //int seats;
    char courseid[10];
};

struct Enrollment {
    int studentID;
    int courseID;
    int studentname;
    //int profID;
    //int enrollmentID;
    //int isEnrolled;
};
#endif