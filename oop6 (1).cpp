#include <bits/stdc++.h>
using namespace std;

struct Record {
    string name;
    string dob;
    string telephoneNumber;
};
bool compareRecords(const Record& a, const Record& b) {
    return a.name < b.name;
}
int main() {
    vector<Record> Records;
    int n;
    cout << "Enter the number of personal records: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        Record record;
        cout << "Enter name: ";
        cin >> record.name;
        cout << "Enter DOB (dd-mm-yyyy): ";
        cin >> record.dob;
        cout << "Enter telephone number: ";
        cin >> record.telephoneNumber;
        Records.push_back(record);
    }
    sort(Records.begin(), Records.end(), compareRecords);

    cout << "Sorted personal records:" << endl;
    for (const Record& record : Records) {
        cout << "Name: " << record.name << ", DOB: " << record.dob << ", Telephone Number: " << record.telephoneNumber << endl;
    }
    string searchName;
    cout << "Enter name to search: ";
    cin >> searchName;

    auto it = find_if(Records.begin(), Records.end(), [&searchName](const Record& record) {
        return record.name == searchName;
    });
    if (it != Records.end()) {
        int position = distance(Records.begin(), it); 
        cout << "Record found at position: " << position << endl;
        cout << "Record details: Name: " << it->name << ", DOB: " << it->dob << ", Telephone Number: " << it->telephoneNumber << endl;
    } else {
        cout << "Record not found" << endl;
    }

    return 0;
}

      

