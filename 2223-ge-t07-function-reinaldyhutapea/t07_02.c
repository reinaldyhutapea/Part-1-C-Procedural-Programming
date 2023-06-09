// DO NOT EDIT
#include "academic.h"
#include <stdio.h>

int main(int _argc, char **_argv)
{
    struct course_t crs_pp =
        create_course("10S1002", "Procedural Programming", 2, GRADE_D);
    print_course(crs_pp);

    struct student_t std_wiro =
        create_student("12S22999", "Wiro Sableng", "2022", "Information Systems");

    print_student(std_wiro);

    // implement academic.create_enrollment(...)
    struct enrollment_t emt_wiro_pp =
        create_enrollment(crs_pp, std_wiro, "2022/2023", SEMESTER_EVEN);

    // implement academic.print_enrollment(...)
    // implement academic.calculate_performance(...)
    print_enrollment(emt_wiro_pp);

    emt_wiro_pp.grade = GRADE_AB;

    print_enrollment(emt_wiro_pp);

    return 0;
}
// DO NOT EDIT
