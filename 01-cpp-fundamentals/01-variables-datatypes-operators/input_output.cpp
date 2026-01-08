/*
 * ============================================
 * INPUT/OUTPUT IN C++ FOR COMPETITIVE PROGRAMMING
 * ============================================
 * Fast I/O can be the difference between TLE and AC
 */

#include <iostream>
#include <iomanip>  // For setprecision
using namespace std;

int main() {
    
    // ==========================================
    // 1. FAST I/O (USE THIS IN EVERY DSA PROBLEM)
    // ==========================================
    
    /*
     * These two lines speed up cin/cout significantly
     * ALWAYS add them at the start of main() in competitive programming
     */
    ios_base::sync_with_stdio(false);  // Unsyncs C and C++ I/O
    cin.tie(NULL);                      // Unties cin from cout
    
    // ==========================================
    // 2. BASIC INPUT
    // ==========================================
    
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "You entered: " << n << endl;
    
    // Multiple inputs in one line
    int a, b, c;
    cout << "Enter 3 integers (space separated): ";
    cin >> a >> b >> c;
    cout << "Sum: " << a + b + c << endl;
    
    // ==========================================
    // 3. STRING INPUT
    // ==========================================
    
    /*
     * cin >> stops at whitespace
     * getline() reads entire line including spaces
     */
    
    cin.ignore();  // Clear the newline left by previous cin
    
    string word;
    cout << "Enter a word: ";
    cin >> word;
    cout << "Word: " << word << endl;
    
    cin.ignore();  // Clear buffer again
    
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Sentence: " << sentence << endl;
    
    // ==========================================
    // 4. OUTPUT FORMATTING
    // ==========================================
    
    double pi = 3.14159265358979;
    
    // Fixed decimal places
    cout << "\n=== Output Formatting ===" << endl;
    cout << "Default: " << pi << endl;
    cout << fixed << setprecision(2) << "2 decimals: " << pi << endl;
    cout << fixed << setprecision(6) << "6 decimals: " << pi << endl;
    
    // Reset to default
    cout.unsetf(ios::fixed);
    
    // ==========================================
    // 5. COMMON INPUT PATTERNS IN DSA
    // ==========================================
    
    cout << "\n=== Common DSA Input Patterns ===" << endl;
    
    // Pattern 1: Read n, then n elements
    /*
    int n;
    cin >> n;
    int arr[n];  // or vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    */
    
    // Pattern 2: Read until EOF (end of file)
    /*
    int x;
    while(cin >> x) {
        // process x
    }
    */
    
    // Pattern 3: Read number of test cases
    /*
    int t;
    cin >> t;
    while(t--) {
        // solve each test case
    }
    */
    
    // Pattern 4: Read 2D matrix
    /*
    int rows, cols;
    cin >> rows >> cols;
    int matrix[rows][cols];
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    */
    
    // ==========================================
    // 6. NEWLINE OPTIONS
    // ==========================================
    
    /*
     * endl vs '\n'
     * - endl flushes the buffer (slower)
     * - '\n' just adds newline (faster)
     * Use '\n' in competitive programming for speed
     */
    
    cout << "Line 1" << '\n';
    cout << "Line 2" << '\n';
    
    return 0;
}
