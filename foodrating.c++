#include <iostream>
#include <string>
#include <unordered_map>
#include <set>
#include <vector>
using namespace std;

class FoodRatings {
private:
    // Maps food name to its cuisine
    unordered_map<string, string> foodToCuisine;

    // Maps food name to its rating
    unordered_map<string, int> foodToRating;

    // Maps cuisine to a set of foods sorted by rating (desc) and name (asc)
    unordered_map<string, set<pair<int, string>>> cuisineToFoods;

public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); ++i) {
            string food = foods[i];
            string cuisine = cuisines[i];
            int rating = ratings[i];

            foodToCuisine[food] = cuisine;
            foodToRating[food] = rating;
            cuisineToFoods[cuisine].insert({-rating, food}); // Use -rating for descending order
        }
    }

    void changeRating(string food, int newRating) {
        string cuisine = foodToCuisine[food];
        int oldRating = foodToRating[food];

        // Remove old entry
        cuisineToFoods[cuisine].erase({-oldRating, food});

        // Insert new entry
        cuisineToFoods[cuisine].insert({-newRating, food});
        foodToRating[food] = newRating;
    }

    string highestRated(string cuisine) {
        // The first element in the set is the highest-rated food
        return cuisineToFoods[cuisine].begin()->second;
    }
};

int main() {
    vector<string> foods = {"kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"};
    vector<string> cuisines = {"korean", "japanese", "japanese", "greek", "japanese", "korean"};
    vector<int> ratings = {9, 12, 8, 15, 14, 7};

    FoodRatings foodRatings(foods, cuisines, ratings);

    cout << foodRatings.highestRated("korean") << endl;   // kimchi
    cout << foodRatings.highestRated("japanese") << endl; // ramen

    foodRatings.changeRating("sushi", 16);
    cout << foodRatings.highestRated("japanese") << endl; // sushi

    foodRatings.changeRating("ramen", 16);
    cout << foodRatings.highestRated("japanese") << endl; // ramen

    return 0;
}