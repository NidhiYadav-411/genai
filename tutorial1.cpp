#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare arrays for storing names
	string student[8];              // All 8 students
	string dramaclub[4];            // Members of drama club
	string scienceclub[4];          // Members of science club
	string unionstudents[8];        // Union of drama and science club
	string intersection[8];         // Intersection of both clubs
	string diffA[4], diffB[4], diffC[8]; // Differences and students not in any club

	int k = 0, l = 0;               // Counters for union and intersection
	int diffACount = 0, diffBCount = 0, diffCCount = 0; // Counters for differences

	cout << "B24CE1072-NIDHI YADAV \n";
        
	// Input: 8 student names
	cout << "Enter names of 8 students:\n";
	for (int i = 0; i < 8; i++) {
    	cin >> student[i];
	}

	// Input: 4 drama club members
	cout << "Enter 4 drama club members:\n";
	for (int i = 0; i < 4; i++) {
    	cin >> dramaclub[i];
	}

	// Input: 4 science club members
	cout << "Enter 4 science club members:\n";
	for (int i = 0; i < 4; i++) {
    	cin >> scienceclub[i];
	}

	// Display all inputs
	cout << "\nAll students: ";
	for (int i = 0; i < 8; i++) {
    	cout << student[i] << " ";
	}
	cout << "\nDrama club: ";
	for (int i = 0; i < 4; i++) {
    	cout << dramaclub[i] << " ";
	}
	cout << "\nScience club: ";
	for (int i = 0; i < 4; i++) {
    	cout << scienceclub[i] << " ";
	}
	cout << "\n";

	// Union of drama and science clubs
	for (int i = 0; i < 4; i++) {
    	unionstudents[k++] = dramaclub[i]; // Add all drama club members
	}
	for (int i = 0; i < 4; i++) {
    	bool isDuplicate = false;
    	for (int j = 0; j < k; j++) {
        	if (scienceclub[i] == unionstudents[j]) {
            	isDuplicate = true;
            	break;
        	}
    	}
    	if (!isDuplicate) {
        	unionstudents[k++] = scienceclub[i]; // Add science member only if not duplicate
    	}
	}

	// Intersection: Students in both drama and science club
	for (int i = 0; i < 4; i++) {
    	for (int j = 0; j < 4; j++) {
        	if (dramaclub[i] == scienceclub[j]) {
            	intersection[l++] = dramaclub[i];
            	break;
        	}
    	}
	}

	// Difference: Drama club but not science club
	for (int i = 0; i < 4; i++) {
    	bool isAbsent = true;
    	for (int j = 0; j < 4; j++) {
        	if (dramaclub[i] == scienceclub[j]) {
            	isAbsent = false;
            	break;
        	}
    	}
    	if (isAbsent) {
        	diffA[diffACount++] = dramaclub[i];
    	}
	}

	// Difference: Science club but not drama club
	for (int i = 0; i < 4; i++) {
    	bool isAbsent = true;
    	for (int j = 0; j < 4; j++) {
        	if (scienceclub[i] == dramaclub[j]) {
            	isAbsent = false;
            	break;
        	}
    	}
    	if (isAbsent) {
        	diffB[diffBCount++] = scienceclub[i];
    	}
	}

	// Students not in any club
	for (int i = 0; i < 8; i++) {
    	bool isAbsent = true;
    	for (int j = 0; j < 4; j++) {
        	if (student[i] == dramaclub[j] || student[i] == scienceclub[j]) {
            	isAbsent = false;
            	break;
        	}
    	}
    	if (isAbsent) {
        	diffC[diffCCount++] = student[i];
    	}
	}

	// Display all computed sets
	cout << "students in atleast 1 group: ";
	for (int i = 0; i < k; i++) {
    	cout << unionstudents[i] << " ";
	}
	cout << endl;

	cout << "students in both group: ";
	for (int i = 0; i < l; i++) {
    	cout << intersection[i] << " ";
	}
	cout << endl;

	cout << "\nStudents in the Drama Club but not in the Science Club: ";
	for (int i = 0; i < diffACount; i++) {
    	cout << diffA[i] << " ";
	}

	cout << "\nStudents in the Science Club but not in the Drama Club: ";
	for (int i = 0; i < diffBCount; i++) {
    	cout << diffB[i] << " ";
	}

	cout << "\nStudents not in any club: ";
	for (int i = 0; i < diffCCount; i++) {
    	cout << diffC[i] << " ";
	}

	return 0;
}
