#include <stdio.h>
int main()
{
    float mass_mol = 3.0e-23;
    float mass_qt = 950;
    float quarts;
    float molecules;
    printf("please input the number of quarts of water\n");
    scanf("%f", &quarts);
    molecules = quarts * mass_qt / mass_mol;
    printf("%f quarts of water contain %e molecules\n", quarts, molecules);
    return 0;
}