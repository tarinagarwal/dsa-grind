/*
 * ============================================
 * VARIABLES, DATA TYPES & OPERATORS IN C++
 * ============================================
 * This is the foundation of everything in DSA.
 * You MUST know these by heart.
 */

#include <iostream>
#include <climits>  // For INT_MAX, INT_MIN etc.
using namespace std;

int main() {
    
    // ==========================================
    // 1. BASIC DATA TYPES & THEIR SIZES
    // ==========================================
    
    /*
     * Why sizes matter in DSA?
     * - Knowing limits prevents overflow bugs
     * - Helps choose right type for constraints
     * - Interview questions often have constraints like 10^9
     */
    
    // INTEGER TYPES
    int a = 10;              // 4 bytes, range: -2^31 to 2^31-1 (~2.1 billion)
    long long b = 1e18;      // 8 bytes, range: -2^63 to 2^63-1 (use for large numbers)
    unsigned int c = 4e9;    // 4 bytes, only positive: 0 to 2^32-1
    
    // FLOATING POINT
    float f = 3.14f;         // 4 bytes, ~7 decimal digits precision
    double d = 3.14159265;   // 8 bytes, ~15 decimal digits precision (prefer this)
    
    // CHARACTER & BOOLEAN
    char ch = 'A';           // 1 byte, stores ASCII value (A = 65)
    bool flag = true;        // 1 byte, true(1) or false(0)
    
    // Print sizes
    cout << "=== Data Type Sizes ===" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "char: " << sizeof(char) << " byte" << endl;
    cout << "bool: " << sizeof(bool) << " byte" << endl;
    
    // ==========================================
    // 2. INTEGER LIMITS (VERY IMPORTANT FOR DSA)
    // ==========================================
    
    /*
     * MEMORIZE THESE:
     * - INT_MAX  = 2,147,483,647  (~2.1 * 10^9)
     * - INT_MIN  = -2,147,483,648
     * - LLONG_MAX = 9,223,372,036,854,775,807 (~9.2 * 10^18)
     * 
     * Rule of thumb:
     * - If n <= 10^9, use int
     * - If n > 10^9 or n*n might overflow, use long long
     */
    
    cout << "\n=== Integer Limits ===" << endl;
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "LLONG_MAX: " << LLONG_MAX << endl;
    
    // ==========================================
    // 3. ARITHMETIC OPERATORS
    // ==========================================
    
    int x = 17, y = 5;
    
    cout << "\n=== Arithmetic Operators ===" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "x + y = " << x + y << endl;   // Addition: 22
    cout << "x - y = " << x - y << endl;   // Subtraction: 12
    cout << "x * y = " << x * y << endl;   // Multiplication: 85
    cout << "x / y = " << x / y << endl;   // Integer Division: 3 (truncates decimal)
    cout << "x % y = " << x % y << endl;   // Modulo (remainder): 2
    
    /*
     * MODULO (%) - SUPER IMPORTANT IN DSA
     * - Used in: hashing, cyclic arrays, number theory
     * - Common: ans % (10^9 + 7) to prevent overflow
     * - Note: Works only with integers
     */
    
    // ==========================================
    // 4. INCREMENT & DECREMENT
    // ==========================================
    
    int i = 5;
    cout << "\n=== Increment/Decrement ===" << endl;
    cout << "i = " << i << endl;
    cout << "++i = " << ++i << endl;  // Pre-increment: increment first, then use (i=6)
    cout << "i++ = " << i++ << endl;  // Post-increment: use first, then increment (prints 6, i becomes 7)
    cout << "i now = " << i << endl;  // i = 7
    
    // ==========================================
    // 5. COMPARISON OPERATORS
    // ==========================================
    
    /*
     * These return boolean (true/false)
     * Used everywhere: if conditions, while loops, sorting comparators
     */
    
    cout << "\n=== Comparison Operators ===" << endl;
    cout << "(5 == 5): " << (5 == 5) << endl;  // Equal to: true(1)
    cout << "(5 != 3): " << (5 != 3) << endl;  // Not equal: true(1)
    cout << "(5 > 3): " << (5 > 3) << endl;    // Greater than: true(1)
    cout << "(5 < 3): " << (5 < 3) << endl;    // Less than: false(0)
    cout << "(5 >= 5): " << (5 >= 5) << endl;  // Greater or equal: true(1)
    cout << "(5 <= 3): " << (5 <= 3) << endl;  // Less or equal: false(0)
    
    // ==========================================
    // 6. LOGICAL OPERATORS
    // ==========================================
    
    /*
     * Used to combine conditions
     * && (AND): both must be true
     * || (OR): at least one must be true
     * !  (NOT): inverts the boolean
     */
    
    cout << "\n=== Logical Operators ===" << endl;
    cout << "(true && false): " << (true && false) << endl;  // AND: 0
    cout << "(true || false): " << (true || false) << endl;  // OR: 1
    cout << "(!true): " << (!true) << endl;                  // NOT: 0
    
    // Practical example
    int age = 25;
    bool hasLicense = true;
    if (age >= 18 && hasLicense) {
        cout << "Can drive!" << endl;
    }
    
    // ==========================================
    // 7. ASSIGNMENT OPERATORS
    // ==========================================
    
    int n = 10;
    cout << "\n=== Assignment Operators ===" << endl;
    
    n += 5;   // n = n + 5 = 15
    cout << "n += 5: " << n << endl;
    
    n -= 3;   // n = n - 3 = 12
    cout << "n -= 3: " << n << endl;
    
    n *= 2;   // n = n * 2 = 24
    cout << "n *= 2: " << n << endl;
    
    n /= 4;   // n = n / 4 = 6
    cout << "n /= 4: " << n << endl;
    
    n %= 4;   // n = n % 4 = 2
    cout << "n %= 4: " << n << endl;
    
    // ==========================================
    // 8. TYPE CASTING
    // ==========================================
    
    /*
     * Converting one type to another
     * CRUCIAL for avoiding bugs in DSA
     */
    
    cout << "\n=== Type Casting ===" << endl;
    
    // Implicit casting (automatic)
    int intVal = 10;
    double doubleVal = intVal;  // int -> double (safe, no data loss)
    cout << "int to double: " << doubleVal << endl;
    
    // Explicit casting (manual)
    double pi = 3.14159;
    int truncated = (int)pi;    // double -> int (loses decimal part)
    cout << "double to int: " << truncated << endl;
    
    // IMPORTANT: Integer division gotcha
    int p = 5, q = 2;
    cout << "5/2 (int): " << p/q << endl;           // Output: 2 (wrong if you want 2.5)
    cout << "5/2 (double): " << (double)p/q << endl; // Output: 2.5 (correct)
    
    // Overflow prevention with casting
    int big1 = 100000;
    int big2 = 100000;
    // int product = big1 * big2;  // OVERFLOW! Result > INT_MAX
    long long product = (long long)big1 * big2;  // Cast BEFORE multiplication
    cout << "100000 * 100000 = " << product << endl;
    
    return 0;
}
