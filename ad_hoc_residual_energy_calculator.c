#include <stdio.h>

// Function to calculate the residual energy
double calculate_residual_energy(double initial_energy, double total_consumed_energy) {
    return initial_energy - total_consumed_energy;
}

int main() {
    double initial_energy, total_consumed_energy, residual_energy;
    printf("============================Ad Hoc Network Energ Calculator============================\n\n ")

    // Prompt user for the initial energy and total consumed energy
    printf("Enter the initial energy of the node (in Joules):");
    scanf("%lf", &initial_energy);

    printf("Enter the total consumed energy (in Joules):");
    scanf("%lf", &total_consumed_energy);

    // Ensure that initial energy is greater than total consumed energy
    if (total_consumed_energy > initial_energy) {
        printf("Error: Total consumed energy cannot exceed initial energy!\n");
        return 1;  // Exit with error code
    }

    // Calculate the residual energy
    residual_energy = calculate_residual_energy(initial_energy, total_consumed_energy);

    // Display the results
    printf("\nResidual Energy: %.2f Joules\n", residual_energy);

    return 0;
}
