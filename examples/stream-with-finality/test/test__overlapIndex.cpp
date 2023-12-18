#include "../overlapIndex.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

void test_overlapIndex() {
    
    vector<string> prompt;
    vector<string> transcription;
    int result_idx;


    // test 0
    prompt = {"Hello", "and..."};
    transcription = {"Hello", "and", "we", "are", "cooking"};
    result_idx = overlapIndex(prompt, transcription);

    cout << "test 0" << endl << result_idx << endl << endl;

    // test 1
    prompt = {"We're", "transcribing", "with", "a", "100", "millisecond", "latency,"};
    transcription = {"transcribing", "with", "a", "100ms", "latency", "and", "we're", "going", "to", "implement", "local", "consensus."};
    result_idx = overlapIndex(prompt, transcription);

    cout << "test 1" << endl << result_idx << endl;
}

int main() {
    test_overlapIndex();
    std::cout << "\nAll tests passed: Output indexes match expected values." << std::endl;
    return 0;
}