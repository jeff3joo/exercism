#include <array>
#include <string>
#include <vector>

std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> newSc{};
    for(int i=0; i<student_scores.size();i++){
        newSc.emplace_back(static_cast<int>(student_scores[i]));
    }
        
    return newSc;
}

int count_failed_students(std::vector<int> student_scores) {
    int fail = 0;
    for(int i=0;i<student_scores.size();i++){
        if(student_scores[i]<=40) fail++;
    }
    return fail;
}

std::array<int, 4> letter_grades(int highest_score) {
    int step = (highest_score-40)/4;
    std::array<int, 4> grades;
    grades[0]=41;
    for (int i =0; i<3; i++){
        grades[i+1]=(grades[i]+step);
    }
    return grades;
}

std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> res;
    for (int i =0; i<student_scores.size();i++){
        int rank = i+1;
        res.emplace_back(std::to_string(rank)+". "+student_names[i]+": "+std::to_string(student_scores[i]));
    }
    return res;
}

std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    for(int i=0; i<student_scores.size();i++){
        if(student_scores[i]==100) return student_names[i];
    }
    return "";
}
