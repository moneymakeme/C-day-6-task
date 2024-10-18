/*1.Write a c program to accept the array from the user and print the array from left to right

Input Format

Number of elements followed by array as input elements

Constraints

NIL

Output Format

Print the array elements

Sample Input 0

10
1 2 3 4 5 6 7 8 9 10
Sample Output 0

1 2 3 4 5 6 7 8 9 10 

sollution :*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; // Declaring the array of size n

    // Accepting the array elements
    //printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array elements from left to right
    //printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Newline for better output formatting

    return 0;
}

/*2.Write a program to accept the array and count the number of odd and even numbers in the given array

Input Format

Number of elements followed by array as an input

Constraints

NIL

Output Format

Display the number of Odd and Even numbers in the given array

Sample Input 0

10
77 67 55 44 25 14 87 95 45 92
Sample Output 0

Odd = 7
Even = 3

sollution :*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; // Declaring the array of size n

    // Accepting the array elements
    //printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int oddCount = 0; // To count odd numbers
    int evenCount = 0; // To count even numbers

    // Counting odd and even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Displaying the results
    printf("Odd = %d\n", oddCount);
    printf("Even = %d\n", evenCount);

    return 0;
}

/*3.Write a program to accept the elements into an array and display the array from right to left

Input Format

Number of elements followed by array as an input

Constraints

NIL

Output Format

Print the array elements after modification

Sample Input 0

10
1 2 3 4 5 6 7 8 9 10
Sample Output 0

10 9 8 7 6 5 4 3 2 1 

sollution :*/
#include <stdio.h>

int main() {
    int n;

    // Accepting the number of elements
    //printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declaring the array of size n

    // Accepting the array elements
    //printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array elements from right to left
    //printf("Array elements in reverse order: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Newline for better output formatting

    return 0;
}

/*4.Write a program to accept the elements into an array and display the sum of the array.

Input Format

Number of elements followed by array as input elements

Constraints

NIL

Output Format

Print the sum of the array elements

Sample Input 0

10
1 2 3 4 5 6 7 8 9 10
Sample Output 0

55 

sollution :*/
#include <stdio.h>

int main() {
    int n;

    // Accepting the number of elements
    //printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declaring the array of size n
    int sum = 0; // Variable to hold the sum of elements

    // Accepting the array elements
    //printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Adding each element to sum
    }

    // Displaying the sum of the array elements
    printf("%d", sum);

    return 0;
}

/*5.Write a program to accept the elements into an array and replace every element in the array with the sum of left side element

Input Format

Number of elements followed by array as an input

Constraints

NIL

Output Format

Print array elements after modification

Sample Input 0

10
1 2 3 4 5 6 7 8 9 10
Sample Output 0

0 1 3 6 10 15 21 28 36 45

sollution :*/
#include <stdio.h>

void replace_with_left_sum(int arr[], int n) {
    int left_sum = 0;
    int modified_array[n];

    for (int i = 0; i < n; i++) {
        modified_array[i] = left_sum; // Store the left sum
        left_sum += arr[i];           // Update left_sum to include the current element
    }

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", modified_array[i]);
    }
    printf("\n");
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    replace_with_left_sum(arr, n);

    return 0;
}

/*6.Write a program in C to find if a given integer x appears more than n/2 times in a sorted array of n integers.

Input Format

Accept the sorted array as input

Constraints

NIL

Output Format

Print the majority element

Sample Input 0

5
1 2 2 2 3
Sample Output 0

The majority element is : 2
Sample Input 1

10
1 2 2 2 2 3 4 5 6
Sample Output 1

No majority element found in the array

sollution :*/
#include <stdio.h>

int main() {
    int n;

    // Accepting the number of elements in the sorted array
    //printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declaring the array of size n

    // Accepting the sorted array elements
    //printf("Enter the sorted elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // The potential majority element is the element at the middle of the array
    int candidate = arr[n / 2];
    
    // Counting occurrences of the candidate
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    // Checking if the count of the candidate is greater than n/2
    if (count > n / 2) {
        printf("The majority element is : %d\n", candidate);
    } else {
        printf("No majority element found in the array\n");
    }

    return 0;
}

/*7.Write a program in C to update every array element with multiplication of previous and next numbers in array.

Input Format

Number of elements followed by array as an input

Constraints

NIL

Output Format

Display the array elements after modification

Sample Input 0

6
1 2 3 4 5 6
Sample Output 0

2 3 8 15 24 30 

sollution :*/
#include <stdio.h>

void update_with_multiplication(int arr[], int n) {
    int modified_array[n];

    // Handle the first element
    modified_array[0] = arr[0] * arr[1]; // Product of first and second elements

    // Handle the elements in between
    for (int i = 1; i < n - 1; i++) {
        modified_array[i] = arr[i - 1] * arr[i + 1];
    }

    // Handle the last element
    modified_array[n - 1] = arr[n - 2] * arr[n - 1]; // Product of last two elements

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", modified_array[i]);
    }
    printf("\n");
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    update_with_multiplication(arr, n);

    return 0;
}

/*8.Write a program to accept the elements into an array and replace every element in the array with the sum of its right side elements

Input Format

Number of elements followed by array as an input

Constraints

NIL

Output Format

Display the array elements after modification

Sample Input 0

10
10 20 30 40 50 60 70 80 90 100
Sample Output 0

540 520 490 450 400 340 270 190 100 0

sollution :*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; // Declaring the array of size n

    // Accepting the array elements
//    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Variable to hold the sum of right side elements
    int rightSum = 0;

    // Updating the array elements
    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i]; // Store current value
        arr[i] = rightSum; // Replace current element with the sum of right side elements
        rightSum += current; // Update right sum with the current element
    }

    // Displaying the modified array elements
  //  printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Newline for better output formatting

    return 0;
}

/*9.Write a program to accept the element into an array and replace every element in the array with the sum of its every other element

Input Format

Number of elements followed by array as input elements

Constraints

NIL

Output Format

Print the Array elements after modification

Sample Input 0

10
10 20 30 40 50 60 70 80 90 100
Sample Output 0

540 530 520 510 500 490 480 470 460 450

sollution :*/
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n]; // Declaring the array of size n

    // Accepting the array elements
//    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int modifiedArr[n]; // Array to store modified elements

    // Calculate the sum of all elements in the array
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Replacing each element with the sum of every other element
    for (int i = 0; i < n; i++) {
        int sumOfOthers = totalSum - arr[i]; // Subtract the current element from the total sum
        modifiedArr[i] = sumOfOthers; // Store the result in the modified array
    }

    // Displaying the modified array elements
  //  printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", modifiedArr[i]);
    }
    printf("\n"); // Newline for better output formatting

    return 0;
}

/*10.Write a program to count the number of zeros and ones in an array

Input Format

Number of elements followed by array with 0/1 as input elements

Constraints

NIL

Output Format

Display the 0's and 1's count

Sample Input 0

10
0 0 0 0 0 1 1 1 1 1
Sample Output 0

zc = 5
oc = 5

sollution :*/
#include <stdio.h>

int main() {
    int n;

    // Accepting the number of elements
  //  printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declaring the array of size n

    // Accepting the array elements
//    printf("Enter the elements of the array (0 or 1): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int zeroCount = 0; // Count of zeros
    int oneCount = 0;  // Count of ones

    // Counting zeros and ones
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        } else if (arr[i] == 1) {
            oneCount++;
        }
    }

    // Displaying the counts
    printf("zc = %d\n", zeroCount);
    printf("oc = %d\n", oneCount);

    return 0;
}
