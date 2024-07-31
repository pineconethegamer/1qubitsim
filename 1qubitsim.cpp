#include "QuEST.h"
#include <iostream>

int main() {
    QuESTEnv env = createQuESTEnv();
    Qureg qubits = createQureg(1, env);  // Create a quantum register with 1 qubit
    initZeroState(qubits);              // Initialize the qubit to the zero state

    hadamard(qubits, 0);                // Apply a Hadamard gate to the qubit

    reportState(qubits);                // Output the state of the qubit

    destroyQureg(qubits, env);          // Clean up
    destroyQuESTEnv(env);

    return 0;
}
