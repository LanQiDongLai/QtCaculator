#pragma once
#include <string>
#include <stack>
#include <vector>
class Analyzer {
public:
	Analyzer() = default;
	void setString(std::string text);
	bool ifError();
	void analyzer();
	double getResult();

private:
	enum class OPERATOR {
		LBRAC, RBRAC, POW, ADD, SUB, DIV, MUL, PI, E, SIN, COS, TAN, SINH, COSH, TANH, LN, LOG
	};
	double m_result;
	bool m_ifError;
	std::string m_text;

	std::stack<int> m_opt;
	std::vector<std::tuple<bool, OPERATOR, double>> m_res;
};

