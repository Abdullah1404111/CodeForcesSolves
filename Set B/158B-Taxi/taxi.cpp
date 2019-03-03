#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,c = 0,found=1;
    vector <int> vec;
    vector <int>::iterator it, it1, it2, it3, it4;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int k;
        cin >> k;
        vec.push_back(k);
    }

    for(it3=vec.begin(); it3 != vec.end(); it3++) {
        if(*it3<4 && *it3 > 0) {
            if(*it3 == 1) {
                it = find (it3+1, vec.end(), 3);
                if(it == vec.end()){
                    it = find (it3+1, vec.end(), 2);
                    if(it == vec.end()){
                        it = find(it3+1, vec.end(), 1);
                        if(it != vec.end()) {
                            *it =  2;
                            *it3 = 0;
                        }
                    } else {
                        *it = 3;
                        *it3 = 0;
                    }
                } else {
                    *it = 4;
                    *it3 = 0;
                }
            } else if(*it3 == 2) {
                it = find(it3+1, vec.end(), 2);

                if(it != vec.end()) {
                    *it =  4;
                    *it3 = 0;
                } else {
                    it = find(it3+1, vec.end(), 1);
                    if(it != vec.end()) {
                        *it = 3;
                        *it3 = 0;
                    }
                }

            } if (*it3 == 3) {
                it = find(it3+1, vec.end(), 1);
                if(it != vec.end()) {
                    *it3 = 0;
                    *it = 4;
                }

            }
        }

        if(*it3>0) {
            c++;
        }
    }

    cout << c <<endl;

    return 0;
}
