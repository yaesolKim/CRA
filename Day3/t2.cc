#include <string>

using std::string;

class SumChecker {
public:
    string getResult(string str) {
        if (isError(str)) return "ERROR";
        if (isPass(str)) return "PASS";
        return "FAIL";
    }

private:
    bool isError(string str) {
        if (!includeValidChar(str)) return true;
        if (!isValidOperatorCount(str)) return true;
        if (!isValidOperatorPosition(str)) return true;
        return false;
    }

    bool includeValidChar(const std::string& str) {
        for (char ch : str) {
            if (ch == '+') continue;
            if (ch == '=') continue;
            if (ch >= '0' && ch <= '9') continue;
            return false;
        }
        return true;
    }

    bool isValidOperatorCount(const std::string& str) {
        int plusCount = std::count(str.begin(), str.end(), '+');
        int equalCount = std::count(str.begin(), str.end(), '=');

        if (plusCount == 1 && equalCount == 1) return true;
        return false;
    }

    bool isValidOperatorPosition(std::string& str) {
        int plusPosition = str.find('+');
        int euqalPosition = str.find('=');

        if (plusPosition == 0) return false;
        if (euqalPosition < 3) return false;
        if (euqalPosition == str.length() - 1) return false;
        if (plusPosition + 1 >= euqalPosition) return false;
        
        return true;
    }

    bool isPass(string str) {
        int plusPosition = str.find('+');
        int euqalPosition = str.find('=');

        string num1 = str.substr(0, plusPosition);
        string num2 = str.substr(plusPosition + 1, euqalPosition - plusPosition - 1);
        string num3 = str.substr(euqalPosition + 1);

        int n1 = stoi(num1);
        int n2 = stoi(num2);
        int n3 = stoi(num3);

        if (n1 + n2 == n3) {
            return true;
        }
        return false;
    }
};
