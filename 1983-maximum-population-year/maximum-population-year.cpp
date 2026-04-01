class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
         std::vector<int> populationChange(102, 0); // 102 to handle years 1950 to 2050

        // Populate the populationChange array
        for (const auto& log : logs) {
            int birth = log[0];
            int death = log[1];
            populationChange[birth - 1950]++; // Increment for birth year
            populationChange[death - 1950]--; // Decrement for death year
        }

        int maxPopulation = 0;
        int currentPopulation = 0;
        int yearWithMaxPopulation = 1950;

        // Calculate the population for each year and find the maximum
        for (int year = 0; year < 102; ++year) {
            currentPopulation += populationChange[year];

            // Check if current population is greater than maxPopulation
            if (currentPopulation > maxPopulation) {
                maxPopulation = currentPopulation;
                yearWithMaxPopulation = year + 1950; // Convert back to actual year
            }
        }

        return yearWithMaxPopulation;
        
    }
};