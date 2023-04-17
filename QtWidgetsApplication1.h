#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessageBox>
#include "ui_QtWidgetsApplication1.h"
#include "Caculator.h"

class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();

private:
    Ui::QtWidgetsApplication1Class ui;

    Caculator m_caculator;

public:
    void LBRAC_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::LBRAC);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void RBRAC_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::RBRAC);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void REC_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::REC);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void SQR_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::SQR);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void CUBE_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::CUBE);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void Y_POW_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::Y_POW);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void FACT_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::FACT);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void SQRT_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::SQRT);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void Y_SQRT_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::Y_SQRT);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void E_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::E);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void LN_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::LN);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void LOG_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::LOG);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void SIN_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::SIN);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void COS_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::COS);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void TAN_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::TAN);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void LNV_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::LNV);
        if (m_caculator.m_lnv == Caculator::LNV::TRUE) {
            ui.pushButton_40->setText("sinh");
            ui.pushButton_34->setText("cosh");
            ui.pushButton_28->setText("tanh");
        }
        if (m_caculator.m_lnv == Caculator::LNV::FALSE) {
            ui.pushButton_40->setText("sin");
            ui.pushButton_34->setText("cos");
            ui.pushButton_28->setText("tan");
        }
    }
    void RAD_DEG_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::RAD_DEG);
        if (m_caculator.m_degree == Caculator::DEGREE::DEG) {
            ui.pushButton_35->setText("Rad");
            ui.label_3->setText("Deg");
        }
        if (m_caculator.m_degree == Caculator::DEGREE::RAD) {
            ui.pushButton_35->setText("Deg");
            ui.label_3->setText("Rad");
        }
    }
    void PI_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::PI);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void MC_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::MC);
        ui.label_4->setText("");
    }
    void M_ADD_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::M_ADD);
        if (m_caculator.m_memory == 0) {
            ui.label_4->setText("");
        }
        else {
            ui.label_4->setText("M");
        }
    }
    void M_SUB_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::M_SUB);
        if (m_caculator.m_memory == 0) {
            ui.label_4->setText("");
        }
        else {
            ui.label_4->setText("M");
        }
    }
    void MR_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::MR);
    }
    void C_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::C);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void BK_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::BK);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void PERCENT_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::PERCENT);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void DOT_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::DOT);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void RES_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::RES);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_0_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_0);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_1_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_1);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_2_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_2);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_3_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_3);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_4_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_4);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_5_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_5);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_6_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_6);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_7_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_7);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_8_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_8);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUM_9_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUM_9);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void NUL_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::NUL);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void DIV_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::DIV);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void MUL_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::MUL);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void SUB_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::SUB);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
    void ADD_FUNC(bool flag) {
        m_caculator.on_pushbutton(Caculator::BUTTON::ADD);
        ui.label_2->setText(QString(m_caculator.m_label_text.c_str()));
    }
};
