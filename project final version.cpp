#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

char userInput;

short steps = 0;
short playerY = 0, playerX = 0;

short keyPressCount = 0;

short digitCount = 0;

int randN(int a, int b) {
    return a + rand() % (b - a + 1);
}

short countDigit(char** map, int size, int* arrSize) {
    short counter = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < arrSize[i]; j++) {
            if (map[i][j] >= '0' && map[i][j] <= '9') {
                counter++;
            }
        }
    }

    return counter;
}

char** genMap(int size, int*& arrSize, char space = '#') {
    char** map = new char* [size];
    arrSize = new int[size];

    for (int i = 0; i < size; i++) {
        arrSize[i] = 10;
        map[i] = new char[arrSize[i]];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < arrSize[i]; j++) {
            map[i][j] = space;
        }
    }

    int indexI = 0, indexJ = 0;
    for (int i = 0; i < (int)(size * size / 1.5); i++) {
        indexI = randN(0, size - 1);
        indexJ = randN(0, arrSize[indexI] - 1);

        switch (rand() % 3) {
        case 0:
            map[indexI][indexJ] = randN('0', '9');
            break;
        case 1:
            map[indexI][indexJ] = '*';
            break;
        case 2:
            map[indexI][indexJ] = '#';
            break;
        }
    }

    return map;
}

void showMap(char** map, int size, int* arrSize) {
    cout << "==== Steps:" << steps << " ==== Score:" << digitCount << " =====\n\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < arrSize[i]; j++)
            cout << map[i][j] << ' ';
        cout << endl;
    }
    cout << "\n=================================\n\n\n";
}

int main()
{
    srand(time(nullptr));

    short size = randN(4, 8);
    int* arrSize;

    char** map = genMap(size, arrSize, ' ');
    playerY = randN(0, size - 1), playerX = randN(0, arrSize[playerY] - 1);

    map[playerY][playerX] = 'Z';

    digitCount = countDigit(map, size, arrSize);

    short stepsStart = 0;
    steps = size + rand() % (size * size);
    stepsStart = steps;
    showMap(map, size, arrSize);

    char futStep;
    while (true) {
        if (digitCount <= 0) {
            break;
        }
        userInput = _getch();
        keyPressCount++;
        //cout << "userInput: " << userInput << endl;
       // cout << "playerY: " << playerY << " playerX: " << playerX << endl;

        switch (userInput) {
        case 'w':
        case 'W': {
            if (playerY > 0) {

                futStep = map[playerY - 1][playerX];
                if (futStep >= '0' && futStep <= '9') {
                    steps += futStep - '0';
                    digitCount--;
                }
                else if (futStep == '#') {
                    steps += -size + rand() % (2 * size);
                }

                if (futStep >= '0' && futStep <= '9' || futStep == '#' || futStep == ' ') {
                    map[playerY - 1][playerX] = 'Z';
                    map[playerY][playerX] = ' ';
                    playerY--;
                }
                else if (futStep == '*') {
                    map[playerY][playerX] = ' ';
                    playerY = randN(0, size - 1), playerX = randN(0, arrSize[playerY] - 1);

                    futStep = map[playerY][playerX];
                    if (futStep >= '0' && futStep <= '9') {
                        steps += futStep - '0';
                        digitCount--;
                    }


                    map[playerY][playerX] = 'Z';
                }
}
        }break;
        case 'a':
        case 'A': {
            if (playerX > 0) {

                futStep = map[playerY][playerX - 1];
                if (futStep >= '0' && futStep <= '9') {
                    steps += futStep - '0';
                    digitCount--;
                }
                else if (futStep == '#') {
                    steps += -size + rand() % (2 * size);
                }

                if (futStep >= '0' && futStep <= '9' || futStep == '#' || futStep == ' ') {
                    map[playerY][playerX - 1] = 'Z';
                    map[playerY][playerX] = ' ';
                    playerX--;
                }
                else if (futStep == '*') {
                    map[playerY][playerX] = ' ';
                    playerY = randN(0, size - 1), playerX = randN(0, arrSize[playerY] - 1);

                    futStep = map[playerY][playerX];
                    if (futStep >= '0' && futStep <= '9') {
                        steps += futStep - '0';
                        digitCount--;
                    }

                    map[playerY][playerX] = 'Z';
                }

            }
        }break;
        case 's':
        case 'S': {
            if (playerY < size - 1) {

                futStep = map[playerY + 1][playerX];
                if (futStep >= '0' && futStep <= '9'){
                    steps += futStep - '0';
                    digitCount--;
                }
                else if (futStep == '#') {
                    steps += -size + rand() % (2 * size);
                }

                if (futStep >= '0' && futStep <= '9' || futStep == '#' || futStep == ' ') {
                    map[playerY + 1][playerX] = 'Z';
                    map[playerY][playerX] = ' ';
                    playerY++;
                }
                else if (futStep == '*') {
                    map[playerY][playerX] = ' ';
                    playerY = randN(0, size - 1), playerX = randN(0, arrSize[playerY] - 1);

                    futStep = map[playerY][playerX];
                    if (futStep >= '0' && futStep <= '9') {
                        steps += futStep - '0';
                        digitCount--;
                    }

                    map[playerY][playerX] = 'Z';
                }
            }
        }break;
        case 'd':
        case 'D': {
            if (playerX < arrSize[playerY] - 1) {

                futStep = map[playerY][playerX + 1];
                if (futStep >= '0' && futStep <= '9') {
                    steps += futStep - '0';
                    digitCount--;
                }
                else if (futStep == '#') {
                    steps += -size + rand() % (2 * size);
                }

                if (futStep >= '0' && futStep <= '9' || futStep == '#' || futStep == ' ') {
                    map[playerY][playerX + 1] = 'Z';
                    map[playerY][playerX] = ' ';
                    playerX++;
                }
                else if (futStep == '*') {
                    map[playerY][playerX] = ' ';
                    playerY = randN(0, size - 1), playerX = randN(0, arrSize[playerY] - 1);

                    futStep = map[playerY][playerX];
                    if (futStep >= '0' && futStep <= '9') {
                        steps += futStep - '0';
                        digitCount--;
                    }

                    map[playerY][playerX] = 'Z';
                }
            }
        }break;

        default:
            cout << "error\n";
        }

        steps--;
        if(steps<=0){
                cout << "\n\n===========Game over=============\n";
            break;
        }

        showMap(map, size, arrSize);
    }
    short stepsFinish = steps;

    cout << "======== Congratulations ========\n" <<  "============ Stat: ==============\n" << "Steps at the start: " << stepsStart << endl << "Steps at the finish: " << stepsFinish << endl;
    cout << "Score: " << stepsFinish*100/stepsStart << "%" << endl;

    return 0;
}

