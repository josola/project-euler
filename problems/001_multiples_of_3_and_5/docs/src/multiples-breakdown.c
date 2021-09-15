/* problems/001_multiples_of_3_and_5/docs/src/multiples-breakdown.c
 * Provides a breakdown of the multiples of 3 or 5,
 * just 3, just 5, and multiples totals.
 * (c) Jordan Sola 2020-2021
 * Written by Jordan Sola
 */

#include "stdio.h"
#include "locale.h"
#include "wchar.h"
#include "stdbool.h"

int main()
{
    // Needed for unicode character printing.
    setlocale(LC_CTYPE, "");

    // Unicode symbols.
    wchar_t check_mark = 0x2713;
    wchar_t cancel = 0x2718;

    // Totals.
    int multiple_count_three = 0;
    int multiple_count_five = 0;
    int multiple_count_both = 0;

    // Table header.
    printf(
        "| # | Multiple of 3 | Multiple of 5 | Multiple of Both |\n"
        "| :---: | :---: | :---: | :---: |\n"
    );

    // Table contents.

    int limit = 999;

    for (int i = 1; i < limit + 1; i++)
    {
         // Number column.
        printf("| %d ", i);

        // Multiples columns.
        if (i % 3 == 0)
        {
            printf("| %lc ", check_mark);
            multiple_count_three++;
        }
        else
        {
            printf("| %lc ", cancel);
        }
        if (i % 5 == 0)
        {
            printf("| %lc ", check_mark);
            multiple_count_five++;
        }
        else
        {
            printf("| %lc ", cancel);
        }
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("| %lc |\n", check_mark);
            multiple_count_both++;
        }
        else
        {
            printf("| %lc |\n", cancel);
        }
    }

    // Totals row.
    printf("| Totals >> | %d | %d | %d |\n", multiple_count_three, multiple_count_five, multiple_count_both);

    return 0;
}