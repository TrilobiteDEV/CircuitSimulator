#pragma once

#include "Circuit.h"

#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <unordered_map>
#include <stdexcept>

#include "Resistor.h"
#include "VoltageSource_DC.h"

class Simulation
{
public:
    Simulation(const Circuit& circuit);

    void Run(); // Run the simulation
    void LogResults() const; // Log terminal voltages

private:
    const Circuit& m_Circuit;
    std::unordered_map<std::string, float> m_TerminalVoltages; // Map terminal names to their voltages
};