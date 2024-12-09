#pragma once

#include "PID.h"
#include <vector>
#include <iostream>
#include <cmath>

// Funkcje pomocnicze do raportowania b��d�w
void raportBledu(const std::vector<double>& spodziewany, const std::vector<double>& faktyczny);
bool porownajSekwencje(const std::vector<double>& spodziewany, const std::vector<double>& faktyczny, double tolerancja = 0.1);

class TestPID {
public:
    static void test_PID_skokJednostkowy();  // Test skoku jednostkowego
};
