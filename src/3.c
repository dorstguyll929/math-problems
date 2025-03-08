int getRandomNumber() {
    int number;
    do {
        number = rand() % 10 + 1;
    } while (number == 0);
    return number;
}