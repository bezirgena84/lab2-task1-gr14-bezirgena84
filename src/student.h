/* student.h */
#ifndef STUDENT_H
#define STUDENT_H

/* Structure for student address */
struct StudentAddress {
    char *street;
    char *state;
    char *city;
    char *country;
};

/* Structure for student data */
struct StudentData {
    char *stu_name;
    int stu_id;
    int stu_age;
    struct StudentAddress stuAddress;
};

/* Function declaration */
void sstudent(void);

#endif /* STUDENT_H */