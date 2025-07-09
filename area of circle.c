 #include<stdio.h>
 int main()
 {
 double R, A,PI=3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &R);

    A =PI * R * R;
    printf("A= %.4lf\n", A);
    return 0;
 }
