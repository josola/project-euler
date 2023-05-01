"""Multiples of 3 and 5

Project Euler: Problem 1
https://projecteuler.net/problem=1

If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9.The sum of these multiples is 23. Find the sum of all
the multiples of 3 or 5 below 1000.
"""

def compute(limit: int) -> int:
    """Returns the sum of all the multiples of 3 or 5 below the limit.

    Only considers natural numbers (positive integers). The limit is not
    included in the sum. For example, if the limit is 10, the sum returned
    will be 23, not 33. If the limit is 3, the sum returned will be 0.
    
    Args:
        limit (int):
            The upper limit of the range to be checked.
                  
    Returns:
        int:
            The sum of all the multiples of 3 or 5 below the limit.
            
    Raises:
        ValueError:
            If the limit is not a positive integer.
    """
    
    if not isinstance(limit, int) or limit <= 0:
        raise ValueError("Limit must be a positive integer.")
    
    total = 0
    for num in range(3, limit):
        if num % 3 == 0 or num % 5 == 0:
            total += num
    return total
    
def main() -> None:
    limit = 1000
    print(compute(limit))
        
if __name__ == '__main__':
    main()
