// Program.cs
// Project Euler - Problem 1

using System;

namespace problem_001
{
    class Program
    {
        static void Main(string[] args)
        {
            // Custom factor count.
            int[] factors = { 3, 5 };

            const int limit = 1000;
            int sum = 0;

            for (int i = 0; i < limit; i++)
            {
                foreach (int j in factors)
                {
                    if (i % j == 0)
                    {
                        sum += i;

                        // Counts multiple factors if
                        // you don't break out here.
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
            Console.Write(sum);
        }
    }
}
