#include "main.h"
using namespace std;

int main() {
    try {
    load_csv("test_data.csv");
    remove_stopwords("Comments");
    stem_text("Feedback");
    capitalize_words("Name");
    count_words("Reviews");
    rolling_mean("Sales", 3);
    resample_data("monthly");
    detect_trends("Sales");
    seasonal_decompose("Sales");
    detect_anomalies("Sales");
    get_shape();
    data_quality_report();
    get_column_profile("Age");
    categorize_column("Income");
    describe();
        return 0;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}
