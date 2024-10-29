
#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

char compare (char sign, char letter1, char letter2) {
    if (sign == '>') {
        return letter1;
    } else {
        return letter2;
    };
}

int main() {

    char s1,s2,s3;
    map<char, int> hashmap;
    cin >> s1 >> s2 >> s3;

    hashmap['a'] = 0;
    hashmap['b'] = 0;
    hashmap['c'] = 0;

    char k;

    k = compare(s1, 'a', 'b');
    hashmap[k] ++;
    
    k = compare(s2, 'a', 'c');
    hashmap[k] ++;
    
    k = compare(s3, 'b', 'c');
    hashmap[k] ++;

    if (hashmap['a'] == 1) {
        cout << "A" << endl;
        return 0;
    } else if (hashmap['b'] == 1) {
        cout << "B" << endl;
        return 0;
    } else {
        cout << "C" << endl;
        return 0;
    }

    return 0;
}
