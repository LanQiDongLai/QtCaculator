#pragma once
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>
#include <QDebug>
#include <vector>
#include <cmath>

class QtWidgetsApplication1;

class Caculator : public QObject {
public:
	Caculator(QObject*);
	enum class STATUS {
		INPUT, RESULT, ERROR
	}m_status;
	enum class DEGREE {
		DEG, RAD
	}m_degree;
	enum class LNV {
		TRUE, FALSE
	}m_lnv;
	enum class BUTTON {
		LBRAC, RBRAC, REC, SQR, CUBE, Y_POW, FACT, SQRT, Y_SQRT, E, LN, LOG, SIN, COS, TAN, LNV, RAD_DEG, PI,
		MC, M_ADD, M_SUB, MR, C, BK, PERCENT, DOT, RES,
		DIV, MUL, SUB, ADD,
		NUM_0, NUM_1, NUM_2, NUM_3, NUM_4, NUM_5, NUM_6, NUM_7, NUM_8, NUM_9, NUL
	};
	bool m_toGetResult;
	double m_memory;
	double m_num;
	std::string m_label_res;
	std::string m_label_text;
public:
	void on_pushbutton(BUTTON button);
};

