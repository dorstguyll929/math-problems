  int main() {
    float x = 3;
    float y = 5;
    float z = add(x, y);
    printf("The sum of %f and %f is %f\n", x, y, z);
    return 0;
}

float add(float x, float y) {
    return x + y;
}