#include <iostream>
#include <cmath>
#include <limits>

int main() {
    int x0 = 100; // Initial x-coordinate
    int y0 = 400; // Initial y-coordinate

    float u1, u2; // Initial velocities for the two projectiles
    int angle1, angle2; // Angles of projection in degrees for the two projectiles
    const float g = 9.8; // Acceleration due to gravity

    float pi = 3.14159;

    // Get user input for the initial velocity of the first projectile
    while (true) {
        std::cout << "Enter the initial velocity for the first projectile (m/s): ";
        if (std::cin >> u1 && u1 > 0) {
            break;
        } else {
            std::cout << "\033[1;31mInvalid input. Please enter a positive numeric value.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Get user input for the angle of projection for the first projectile
    while (true) {
        std::cout << "Enter the angle of projection for the first projectile (degrees): ";
        if (std::cin >> angle1 && angle1 > 0 && angle1 < 90) {
            break;
        } else {
            std::cout << "\033[1;31mInvalid input. Please enter a positive numeric value between 0 and 90.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Get user input for the initial velocity of the second projectile
    while (true) {
        std::cout << "Enter the initial velocity for the second projectile (m/s): ";
        if (std::cin >> u2 && u2 > 0) {
            break;
        } else {
            std::cout << "\033[1;31mInvalid input. Please enter a positive numeric value.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Get user input for the angle of projection for the second projectile
    while (true) {
        std::cout << "Enter the angle of projection for the second projectile (degrees): ";
        if (std::cin >> angle2 && angle2 > 0 && angle2 < 90) {
            break;
        } else {
            std::cout << "\033[1;31mInvalid input. Please enter a positive numeric value between 0 and 90.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Calculate time of flight for the first projectile
    float t_flight1 = (2 * u1 * sin(angle1 * pi / 180)) / g;

    // Calculate time of flight for the second projectile
    float t_flight2 = (2 * u2 * sin(angle2 * pi / 180)) / g;

    // Calculate maximum height for the first projectile
    float h_max1 = (u1 * u1 * sin(angle1 * pi / 180) * sin(angle1 * pi / 180)) / (2 * g);

    // Calculate maximum height for the second projectile
    float h_max2 = (u2 * u2 * sin(angle2 * pi / 180) * sin(angle2 * pi / 180)) / (2 * g);

    // Calculate horizontal range for the first projectile
    float range1 = (u1 * u1 * sin(2 * angle1 * pi / 180)) / g;

    // Calculate horizontal range for the second projectile
    float range2 = (u2 * u2 * sin(2 * angle2 * pi / 180)) / g;

    // Display the results
    std::cout << "\nProjectile 1:\n";
    std::cout << "Time of Flight: " << t_flight1 << " s\n";
    std::cout << "Maximum Height: " << h_max1 << " m\n";
    std::cout << "Horizontal Range: " << range1 << " m\n\n";

    std::cout << "Projectile 2:\n";
    std::cout << "Time of Flight: " << t_flight2 << " s\n";
    std::cout << "Maximum Height: " << h_max2 << " m\n";
    std::cout << "Horizontal Range: " << range2 << " m\n";

    return 0;
}
