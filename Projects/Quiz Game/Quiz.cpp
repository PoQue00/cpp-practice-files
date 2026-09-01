#include <iostream>
#include <limits>

int main(){
    
    std::string questions[] = {"1. What year was C++ created?: ",
                                "2. Who created C++?: ",
                                "3. What language is C++ baced on?: ",
                                "4. What level language is C++?: "};
    
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido van Rosum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                               {"A. C", "B. C+", "C. C-", "D. B++"},
                               {"A. Low Level", "B. High Level", "C. Middle Level"}};

    char answerKey[] = {'C', 'B', 'A', 'C'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "######################################\n";
        std::cout << questions[i] << '\n';
        std::cout << "######################################\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct!\n";
            score += 1;
        }
        else{
            std::cout << "Wrong!\n";
            std::cout << "Correct answer was: " << answerKey[i] << '\n';
        }
    }

    std::cout << "######################################\n";
    std::cout << "##            Results               ##\n";
    std::cout << "######################################\n";
    std::cout << "Correct Guesses: " << score << '\n';
    std::cout << "# Of questions: " << size << '\n';
    std::cout << "Score: " << (score/(double)size)*100 << "%" << '\n';


    std::cout << "Press Enter to exit..." << '\n';
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}