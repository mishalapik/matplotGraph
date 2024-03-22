#include <iostream>
#include <vector>

using namespace std;

class coordinates {
public:
    coordinates() {};
    coordinates(int size) {
        Size = size;
        Zero = Size / 2;
    }

    // METHODS
    void draw() {
        for (int i = 0; i < Size; i++) {
            for (int j = 0; j < Size; j++) {
                if (i == Zero and j == Zero) cout << "┼";
                else if (i == 0 and j == Zero) cout << "▲";
                else if (i == Zero and j == Size - 1) cout << "▶";
                else if (i == Zero) cout << "⎯";
                else if (j == Zero) cout << "│";
                else cout << " ";
            }
            cout << endl;
        }
    }

    // COORDINATE SYSTEM INFO
    int size() { return Size; }
    int zero() { return Zero; }

private:
    int Size = 20;
    int Zero = Size / 2;
    vector<vector<char>> content;
};


int main() {
    cout << "Your engine!!!" << endl;
    coordinates system = coordinates(100);
    system.draw();
    return 0;
}