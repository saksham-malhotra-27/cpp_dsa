#include <vector>
#include <random>

class Solution {
public:
    double radius;
    double x_center;
    double y_center;

    // Constructor to initialize the circle's properties
    Solution(double radius, double x_center, double y_center) {
        this->radius = radius;
        this->x_center = x_center;
        this->y_center = y_center;
    }

    // Function to generate a random double within a specified range
    double getRandomDouble(double min, double max) {
        std::random_device rd;  // Obtain a random number from hardware
        std::mt19937 eng(rd());  // Seed the generator
        std::uniform_real_distribution<double> distr(min, max); // Define the range
        return distr(eng); // Generate a random double
    }

    // Function to generate a random point within the circle
    std::vector<double> randPoint() {
        double randx, randy;
        while (true) {
            randx = getRandomDouble(x_center - radius, x_center + radius);
            randy = getRandomDouble(y_center - radius, y_center + radius);
            if ((randx - x_center) * (randx - x_center) + (randy - y_center) * (randy - y_center) <= radius * radius) {
                return {randx, randy};
            }
        }
        return {-1, -1}; // This line will never be reached
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
