#include <stdio.h>

#define MAX_STUDENTS 1000
#define MAX_COURSES 1000

int main()
{

    int m, n, i, j;
    scanf("%d %d", &m, &n);

    int student_count = 0;

    // Array to store if student failed any course
    int failed[MAX_STUDENTS] = {0};

    // Keep track of scores for each sid
    int scores[MAX_COURSES] = {0};
    int count[MAX_COURSES] = {0};

    // Read courses
    int sid, student_id, course_id;
    for (i = 0; i < m; i++)
    {
        scanf("%d %d %d", &sid, &student_id, &course_id);

        if (student_id >= MAX_STUDENTS)
            continue;

        student_count = (student_count > student_id) ? student_count : student_id;

        scores[sid] += course_id;
        count[sid]++;
    }

    // Read scores
    int s, score;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &s, &score);
        scores[s] += score;
    }

    // Check if any student failed
    for (i = 1; i <= student_count; i++)
    {
        for (j = 1; j < MAX_COURSES; j++)
        {
            if (count[j] > 0 && scores[j] / count[j] < 60)
            {
                failed[i] = 1;
                break;
            }
        }
    }

    // Count failed students
    int failed_count = 0;
    for (i = 1; i <= student_count; i++)
    {
        if (failed[i])
            failed_count++;
    }

    printf("%d %d", student_count, failed_count);

    return 0;
}