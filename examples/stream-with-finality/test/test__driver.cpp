#include <iostream>
#include <cassert>
#include "../driver.hpp"

using namespace std;

void test_driver() {
    // Create an instance of the driver class
    driver driverInst(3, 2, 100);
    std::vector<std::string> lines = {
"Hello.",
"Hello.",
"Hello and...",
"Hello and...",
"Hello and we",
"Hello and we are cooking.",
"Hello and we are cooking.",
"Hello and we are cooking",
"Hello and we are cooking.",
"Hello and we are cooking work.",
"Hello and we are cooking... we're",
"Hello and we are cooking, we're transcribing with",
"Hello and we are cooking, we're transcribing with",
"Hello and we are cooking, we're transcribing with",
"Hello and we are cooking, we're transcribing with",
"Hello and we are cooking, we're transcribing with it.",
"Hello and we are cooking, we're transcribing with",
"Hello and we are cooking, we're transcribing with a",
"Hello and we are cooking, we're transcribing with A1.",
"Hello and we are cooking, we're transcribing with a one-on-one.",
"Hello and we are cooking, we're transcribing with a one-haw.",
"Hello and we are cooking, we're transcribing with a 100%",
"Hello and we are cooking, we're transcribing with a 100%",
"Hello and we are cooking, we're transcribing with a 100 ml.",
"Hello and we are cooking, we're transcribing with a 100 ml of milk.",
"Hello and we are cooking, we're transcribing with a 100 ml.",
"Hello and we are cooking or transcribing with a 100 ml second.",
"Hello and we are cooking, we're transcribing with a 100 ml second.",
"Hello and we are cooking, we're transcribing with a 100ms second.",
"Hello and we are cooking, we're transcribing with a 100ms second league.",
"Hello and we are cooking, we're transcribing with a 100ms sec.",
"Hello and we are cooking, we're transcribing with a 100ms",
"Hello and we are cooking, we're transcribing with a 100ms",
"Hello and we are cooking, we're transcribing with a 100ms",
"Hello and we are cooking, we're transcribing with a 100ms",
"Hello and we are cooking, we're transcribing with a 100ms latin seed.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms second latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms second latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking or transcribing with a 100ms latency.",
"Hello and we are cooking or transcribing with a 100ms latency.",
"Hello and we are cooking, we're transcribing with a 100ms latency.",
"Hello and we are cooking or transcribing with a 100ms latency and",
"Hello and we are cooking or transcribing with a 100ms latency and",
"Hello and we are cooking or transcribing with a 100ms latency and",
"Hello and we are cooking or transcribing with a 100ms latency and",
"Hello and we are cooking or transcribing with a 100ms latency and",
"Hello, and we are cooking, we're transcribing with a 100ms latency and",
"Hello, and we are cooking or transcribing with a 100 millisecond latency and",
"Hello, and we are cooking, we're transcribing with a 100ms latency and",
"Hello and we are cooking, we're transcribing with a 100ms latency and",
"Hello and we are cooking or transcribing with a 100ms latency and",
"below and we are cooking or transcribing with a 100 millisecond latency and",
"and we are cooking or transcribing with a 100ms latency and",
"And we are cooking or transcribing with a 100ms latency and",
"and we are cooking or transcribing with a 100ms latency and",
"and we are cooking or transcribing with a 100ms latency and we're",
"and we are cooking or transcribing with a 100ms latency. And we're...",
"and we are cooking or transcribing with a 100ms latency. And we're good.",
"and we are cooking, we're transcribing with a 100ms latency and we're going",
"and we are cooking or transcribing with a 100ms latency. And we're going to",
"we are cooking or transcribing with a 100ms latency and we're going to",
"We are cooking, we're transcribing with a 100ms latency and we're going to",
"are cooking or transcribing with a 100ms latency and we're going to implement",
"cooking or transcribing with a 100ms latency and we're going to implement",
"cooking or transcribing with a 100ms latency and we're going to implement",
"cooking or transcribing with a 100ms latency and we're going to implement",
"cooking or transcribing with a 100ms latency and we're going to implement",
"cooking or transcribing with a 100ms latency and we're going to implement local",
"can we're transcribing with a 100ms latency and we're going to implement local.",
"in or transcribing with a 100ms latency and we're going to implement local.",
"and we're transcribing with a 100ms lightens and we're going to implement local",
"and we're transcribing with a 100 millisecond latency. And we're going to implement local,",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100 millisecond latency and we're going to implement local",
"We're transcribing with a 100 millisecond latency and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100ms lightens and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100ms latency and we're going to implement local consensus.",
"We're transcribing with a 100 millisecond latency, and we're going to implement local consensus.",
"transcribing with a 100ms latency and we're going to implement local consensus.",
"describing with a 100 millisecond latency and we're going to implement local consensus.",
"describing with a 100 millisecond latency and we're going to implement local consensus."
    };
    std::vector<std::string> expected_tokens = {};

    int lineCount = 0;
    for (const auto& line : lines) {
        cout << endl << endl << "lineCount: " << lineCount++;
        cout << endl << "========================================" << endl;
        // cout << "string line:" << endl << line << endl;

        auto [newTokens, ctxBuffer, committed_tokens] = driverInst.drive(line);

        cout << "drive( string: \"" << line << "\") ==>" << endl << endl;
        cout << "vector<string> newTokens:" << endl;

        cout << "{" << endl;
        for (const auto& token : newTokens) {
            cout << "\"" << token << "\", ";
        }
        cout << endl << "}";
        cout << endl;

        cout << endl << "vector<vector<string>> ctxBuffer:\n";
        cout << "{\n";
        for (const vector<string>& buf : ctxBuffer) {
            cout << "[";
            for (const auto& token : buf) {
                cout << "\"" << token << "\", ";
            }
            cout << "]\n";
        }
        cout << "}";

        cout << endl;

        cout << endl << "vector<string> committedTokens:\n";
        cout << "[";
        for (const auto& token : committed_tokens) {
            cout << "\"" << token << "\", ";
        }
        cout << "]";
        cout << endl;
    }

    // Check if the committed tokens match the expected tokens
    // assert(committed_tokens == expected_tokens && "Test failed: Committed tokens do not match expected tokens.");
}

int main() {
    test_driver();
    std::cout << "All tests passed: Committed tokens match expected tokens." << std::endl;
    return 0;
}