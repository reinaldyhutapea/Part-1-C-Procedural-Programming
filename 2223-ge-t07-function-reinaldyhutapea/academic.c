// 12SS22010 - Reinaldy Hutapea
// 12SS22048 - Ira Wianda Sari Silalahi

#include "academic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *grade_to_text(enum grade_t _grade) { switch(_grade) {
        case GRADE_A: return "A";
        case GRADE_AB: return "AB";
        case GRADE_B: return "B";
        case GRADE_BC: return "BC";
        case GRADE_C: return "C";
        case GRADE_D: return "D";
        case GRADE_E: return "E";
        case GRADE_T: return "T";
        default: return "None";
    }
}

float calculate_performance(enum grade_t _grade, unsigned short _credit)
{
    if (_grade == GRADE_A) {
        return 4.0 * _credit;
    } else if (_grade == GRADE_AB) {
        return 3.5 * _credit;
    } else if (_grade == GRADE_B) {
        return 3.0 * _credit;
    } else if (_grade == GRADE_BC) {
        return 2.5 * _credit;
    } else if (_grade == GRADE_C) {
        return 2.0 * _credit;
    } else if (_grade == GRADE_D) {
        return 1.0 * _credit;
    } else if (_grade == GRADE_E) {
        return 0.5 * _credit;
    } else {
        return 0.0;
    }
}

void print_course(struct course_t _course)
{
    printf("%s|", _course.code);
    printf("%s|", _course.name);
    printf("%d|", _course.credit);
    printf("%s\n", grade_to_text(_course.passing_grade));
}

void print_student(struct student_t _student)
{
    printf("%s|", _student.id);
    printf("%s|", _student.name);
    printf("%s|", _student.year);
    printf("%s\n", _student.study_program);
}

void print_enrollment(struct enrollment_t _enrollment)
{
    printf("%s|", _enrollment.course.code);
    printf("%s|", _enrollment.student.id);
    printf("%s|", grade_to_text(_enrollment.grade));
    printf("%.2f\n", calculate_performance(_enrollment.grade, _enrollment.course.credit));
}

struct course_t create_course(char *_code, char *_name, unsigned short _credit, enum grade_t _passing_grade)
{
    struct course_t crs;

    strcpy(crs.code, _code);
    strcpy(crs.name, _name);
    crs.credit = _credit;
    crs.passing_grade = _passing_grade;
    return crs;
}

struct student_t create_student(char *_id, char *_name, char *_year, char *_study_program)
{
    struct student_t std;

    strcpy(std.id, _id);
    strcpy(std.name, _name);
    strcpy(std.year, _year);
    strcpy(std.study_program, _study_program);

    return std;
}

struct enrollment_t create_enrollment(struct course_t _course, struct student_t _student, char *_year, enum semester_t _semester)
{
    struct enrollment_t emt;

    emt.course = _course;
    emt.student = _student;
    strcpy(emt.year, _year);
    emt.semester = _semester;

    return emt;
}
