#include "Analyzer.h"

void Analyzer::setString(std::string text) {
	m_text = text;
}

bool Analyzer::ifError() {
	return m_ifError;
}

void Analyzer::analyzer() {
	for (int i = 0; i < m_text.length(); i++) {
		if (m_text[i] <= '9' && m_text[i] >= '0') {
			
		}
	}
}

double Analyzer::getResult() {
	return m_result;
}
