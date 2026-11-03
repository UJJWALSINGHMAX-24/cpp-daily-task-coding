#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    cout << "--- PASSWORD STRENGTH CHECKER ---\n";
    cout << "Apna password enter karein: ";
    cin >> password;

    // पासवर्ड के हर एक अक्षर (Character) को चेक करने के लिए लूप
    for (int i = 0; i < password.length(); i++) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z') hasUpper = true;
        else if (ch >= 'a' && ch <= 'z') hasLower = true;
        else if (ch >= '0' && ch <= '9') hasDigit = true;
        else hasSpecial = true; // स्पेशल कैरेक्टर जैसे @, #, $
    }

    // स्ट्रेंथ तय करना
    cout << "\nAnalysis Result:\n";
    if (password.length() >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Password Status: STRONG! (Ekdam surakshit hai)\n";
    } else if (password.length() >= 6 && (hasUpper || hasLower) && hasDigit) {
        cout << "Password Status: MEDIUM (Thoda aur behtar bana sakte hain)\n";
    } else {
        cout << "Password Status: WEAK! (Bahut kamjor password hai, ise badlein)\n";
    }

    return 0;
}