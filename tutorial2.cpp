
#include <iostream>
using namespace std;

int main() {
    int total_students;
    int sports, music, both;
    
    //INPUT
    
    cout<<"Enter total no of students:";
    cin>>total_students;
    
    cout << "Enter number of students in Sports Club: ";
    cin >> sports;

    cout << "Enter number of students in Music Club: ";
    cin >> music;

    cout << "Enter number of students in both Clubs: ";
    cin >> both;

   // INCLUSION -EXCLUSION
    int at_least_one = sports + music - both;
    int only_sports = sports - both;
    int only_music = music - both;
    int neither = total_students - at_least_one;

    //OUTPUT
    cout << "\n Survey Results " << endl;
    cout << "1. Students in at least one club: " << at_least_one << endl;
    cout << "2. Students only in Sports Club: " << only_sports << endl;
    cout << "3. Students only in Music Club: " << only_music << endl;
    cout << "4. Students in neither club: " << neither << endl;

    return 0;
}
