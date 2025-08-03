#include <iostream>
#include <graphics.h>
#include <cmath>
#include <chrono>
#include <thread>

void drawLine(int x1, int y1, int x2, int y2, int color) {
    setcolor(color);
    line(x1, y1, x2, y2);
}

int main() 
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x0 = 100; // initial x-coordinate
    int y0 = 400; // initial y-coordinate
    float u1, u2; // initial velocities for the two projections
    int angle1, angle2; // angles of projection in degrees for the two projections
    float g = 9.8; // acceleration due to gravity

    float t, x1, y1, x2, y2;
    float pi = 3.14159;

    // Get user input for initial velocity of the first projection
    while (true) {
        std::cout << "Enter the initial velocity for the first projection (m/s): ";
        if (std::cin >> u1 && u1 > 0) {
            break;
        } else {
            std::cout << "\033[1;31mInvalid input. Please enter a positive numeric value.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Get user input for angle of projection for the first projection
    while (true) {
        std::cout << "Enter the angle of projection for the first projection (degrees): ";
        if (std::cin >> angle1 && angle1 > 0 && angle1 < 90) {
            break;
        } else {
            std::cout << "\033[1;31mInvalid input. Please enter a positive numeric value between 0 and 90.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Get user input for initial velocity of the second projection
    while (true) {
        std::cout << "Enter the initial velocity for the second projection (m/s): ";
        if (std::cin >> u2 && u2 > 0) {
            break;
        } else {
            std::cout << "\033[1;31mInvalid input. Please enter a positive numeric value.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // Get user input for angle of projection for the second projection
    while (true) {
        std::cout << "Enter the angle of projection for the second projection (degrees): ";
        if (std::cin >> angle2 && angle2 > 0 && angle2 < 90) {
            break;
        } else {
            std::cout << "\033[1;31mInvalid input. Please enter a positive numeric value between 0 and 90.\033[0m\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    // calculate time of flight for the first projection
    float t_flight1 = (2 * u1 * sin(angle1 * pi / 180)) / g;

    // calculate time of flight for the second projection
    float t_flight2 = (2 * u2 * sin(angle2 * pi / 180)) / g;

    // calculate maximum height for the first projection
    float h_max1 = (u1 * u1 * sin(angle1 * pi / 180) * sin(angle1 * pi / 180)) / (2 * g);

    // calculate maximum height for the second projection
    float h_max2 = (u2 * u2 * sin(angle2 * pi / 180) * sin(angle2 * pi / 180)) / (2 * g);

    // calculate horizontal range for the first projection
    float range1 = (u1 * u1 * sin(2 * angle1 * pi / 180)) / g;

    // calculate horizontal range for the second projection
    float range2 = (u2 * u2 * sin(2 * angle2 * pi / 180)) / g;

    // Set the background color to black
    setbkcolor(BLACK);
    cleardevice();

    // Draw the green grid
    setcolor(GREEN);
    for (int i = 0; i <= getmaxx(); i += 20) {
        line(i, 0, i, getmaxy());
    }
    for (int j = 0; j <= getmaxy(); j += 20) {
        line(0, j, getmaxx(), j);
    }

    // Draw the white x-axis
    drawLine(0, y0, getmaxx(), y0, WHITE); // x-axis

    // Draw the white y-axis
    drawLine(x0, 0, x0, getmaxy(), WHITE); // y-axis

    // Draw "VELOCITY" text vertically
    settextstyle(BOLD_FONT, VERT_DIR, 2);
    outtextxy(x0 - 40, 10, "VELOCITY");

    // Draw "TIME" text below the horizontal axis
    settextstyle(BOLD_FONT, HORIZ_DIR, 2);
    outtextxy(getmaxx() - 70, y0 + 40, "TIME");

    // Draw a dot at the origin
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x0, y0, 2, 2);

    // Delay for 5 seconds before starting to draw the graph
    std::this_thread::sleep_for(std::chrono::seconds(5));


    // Draw projectile motion graph for the first projection (white)
    for (t = 0; t <= t_flight1; t += 0.01) {
        x1 = x0 + u1 * cos(angle1 * pi / 180) * t;
        y1 = y0 - (u1 * sin(angle1 * pi / 180) * t - (0.5 * g * t * t));

        putpixel(x1, y1, WHITE);

        // Add a small delay to create an animated effect
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    // Draw projectile motion graph for the second projection (cyan)
    for (t = 0; t <= t_flight2; t += 0.01) {
        x2 = x0 + u2 * cos(angle2 * pi / 180) * t;
        y2 = y0 - (u2 * sin(angle2 * pi / 180) * t - (0.5 * g * t * t));

        putpixel(x2, y2, CYAN);

        // Add a small delay to create an animated effect
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    // Print the information extracted from the given input in different colors
    std::cout << "\nFirst Projection Information:\n";
    std::cout << "Initial Velocity: " << u1 << " m/s\n";
    std::cout << "Angle of Projection: " << angle1 << " degrees\n";
    std::cout << "Time of Flight: " << t_flight1 << " seconds\n";
    std::cout << "Maximum Height: " << h_max1 << " meters\n";
    std::cout << "Horizontal Range: " << range1 << " meters\n\n";

    std::cout << "Second Projection Information: \n";
    std::cout << "Initial Velocity: " << u2 << " m/s\n";
    std::cout << "Angle of Projection: " << angle2 << " degrees\n";
    std::cout << "Time of Flight: " << t_flight2 << " seconds\n";
    std::cout << "Maximum Height: " << h_max2 << " meters\n";
    std::cout << "Horizontal Range: " << range2 << " meters\n";

    getch();
    closegraph();

    return 0;
}
