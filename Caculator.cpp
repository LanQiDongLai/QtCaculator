#include "Caculator.h"

Caculator::Caculator(QObject* parent)
	:QObject(parent),m_degree(Caculator::DEGREE::DEG), m_lnv(Caculator::LNV::FALSE), 
	m_memory(0), m_status(Caculator::STATUS::RESULT), m_toGetResult(false), m_num(0)
	{
	
}

void Caculator::on_pushbutton(BUTTON button) {
	switch (button) {
	case Caculator::BUTTON::LBRAC:
		m_label_text.append("(");
		break;
	case Caculator::BUTTON::RBRAC:
		m_label_text.append(")");
		break;
	case Caculator::BUTTON::REC:
		m_label_text.append("^(-1)");
		break;
	case Caculator::BUTTON::SQR:
		m_label_text.append("^(2)");
		break;
	case Caculator::BUTTON::CUBE:
		m_label_text.append("^(3)");
		break;
	case Caculator::BUTTON::Y_POW:
		m_label_text.append("^(");
		break;
	case Caculator::BUTTON::FACT:
		m_label_text.append("!");
		break;
	case Caculator::BUTTON::SQRT:
		m_label_text.append("^(1/2)");
		break;
	case Caculator::BUTTON::Y_SQRT:
		m_label_text.append("^(1/");
		break;
	case Caculator::BUTTON::E:
		m_label_text.append("e");
		break;
	case Caculator::BUTTON::LN:
		m_label_text.append("ln(");
		break;
	case Caculator::BUTTON::LOG:
		m_label_text.append("log(");
		break;
	case Caculator::BUTTON::SIN:
		if (m_lnv == LNV::FALSE)
			m_label_text.append("sin(");
		else if(m_lnv == LNV::TRUE)
			m_label_text.append("sinh(");
		break;
	case Caculator::BUTTON::COS:
		if (m_lnv == LNV::FALSE)
			m_label_text.append("cos(");
		else if (m_lnv == LNV::TRUE)
			m_label_text.append("cosh(");
		break;
	case Caculator::BUTTON::TAN:
		if (m_lnv == LNV::FALSE)
			m_label_text.append("tan(");
		else if (m_lnv == LNV::TRUE)
			m_label_text.append("tanh(");
		break;
	case Caculator::BUTTON::LNV:
		if (m_lnv == LNV::FALSE)
			m_lnv = LNV::TRUE;
		else if (m_lnv == LNV::TRUE)
			m_lnv = LNV::FALSE;
		break;
	case Caculator::BUTTON::RAD_DEG:
		if (m_degree == DEGREE::DEG)
			m_degree = DEGREE::RAD;
		else if (m_degree == DEGREE::RAD)
			m_degree = DEGREE::DEG;
		break;
	case Caculator::BUTTON::PI:
		m_label_text.append("pi");
		break;
	case Caculator::BUTTON::MC:
		m_memory = 0;
		break;
	case Caculator::BUTTON::M_ADD:
		m_memory += m_num;
		break;
	case Caculator::BUTTON::M_SUB:
		m_memory -= m_num;
		break;
	case Caculator::BUTTON::MR:
		m_num = m_memory;
		break;
	case Caculator::BUTTON::C:
		m_num = 0;
		m_label_text = "";
		break;
	case Caculator::BUTTON::BK:
		if(m_label_text.length() >= 1)
			m_label_text.pop_back();
		break;
	case Caculator::BUTTON::PERCENT:
		m_label_text.append("%");
		break;
	case Caculator::BUTTON::DOT:
		m_label_text.append(".");
		break;
	case Caculator::BUTTON::RES:
		break;
	case Caculator::BUTTON::NUM_0:
		m_label_text.append("0");
		break;
	case Caculator::BUTTON::NUM_1:
		m_label_text.append("1");
		break;
	case Caculator::BUTTON::NUM_2:
		m_label_text.append("2");
		break;
	case Caculator::BUTTON::NUM_3:
		m_label_text.append("3");
		break;
	case Caculator::BUTTON::NUM_4:
		m_label_text.append("4");
		break;
	case Caculator::BUTTON::NUM_5:
		m_label_text.append("5");
		break;
	case Caculator::BUTTON::NUM_6:
		m_label_text.append("6");
		break;
	case Caculator::BUTTON::NUM_7:
		m_label_text.append("7");
		break;
	case Caculator::BUTTON::NUM_8:
		m_label_text.append("8");
		break;
	case Caculator::BUTTON::NUM_9:
		m_label_text.append("9");
		break;
	case Caculator::BUTTON::ADD:
		m_label_text.append("+");
		break;
	case Caculator::BUTTON::SUB:
		m_label_text.append("-");
		break;
	case Caculator::BUTTON::MUL:
		m_label_text.append("*");
		break;
	case Caculator::BUTTON::DIV:
		m_label_text.append("/");
		break;
	case Caculator::BUTTON::NUL:
		break;
	default:
		break;
	}
	qDebug() << m_label_text.c_str();
}
