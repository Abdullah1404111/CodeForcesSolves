#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, t;
    vector <char> vec;
    vector <char>::iterator it, it1, it2, it3;
    cin >> n >> t;

    for(int i = 0; i < n; i++){
        char ch;
        cin >> ch;
        vec.push_back(ch);
    }

    for(int i = 0; i < t; i++)
        for(it = vec.begin(); it != vec.end(); it++){
            if(*it == 'B' && *(it+1) == 'G') {
                char t = *it;
                *it = *(it + 1);
                *(it + 1) = t;
                it++;
            }
        }

    for(it = vec.begin(); it != vec.end(); it++){
        cout << *it;
    }

    return 0;
}
