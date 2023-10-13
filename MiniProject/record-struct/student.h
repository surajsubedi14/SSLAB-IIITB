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
    //int status;
};


struct Course
{   int id;
    char name[100];
    //char code[20];
    int status;
};

#endif