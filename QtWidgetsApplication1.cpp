#include "QtWidgetsApplication1.h"

QtWidgetsApplication1::QtWidgetsApplication1(QWidget* parent)
    : QMainWindow(parent), m_caculator(this) {
    ui.setupUi(this);
    connect(ui.pushButton, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_4_FUNC);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_1_FUNC);
    connect(ui.pushButton_3, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_7_FUNC);
    connect(ui.pushButton_4, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_5_FUNC);
    connect(ui.pushButton_5, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_6_FUNC);
    connect(ui.pushButton_6, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_2_FUNC);
    connect(ui.pushButton_7, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_8_FUNC);
    connect(ui.pushButton_8, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_9_FUNC);
    connect(ui.pushButton_9, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_3_FUNC);
    connect(ui.pushButton_10, &QPushButton::clicked, this, &QtWidgetsApplication1::PERCENT_FUNC);
    connect(ui.pushButton_11, &QPushButton::clicked, this, &QtWidgetsApplication1::NUM_0_FUNC);
    connect(ui.pushButton_12, &QPushButton::clicked, this, &QtWidgetsApplication1::DOT_FUNC);
    connect(ui.pushButton_13, &QPushButton::clicked, this, &QtWidgetsApplication1::C_FUNC);
    connect(ui.pushButton_14, &QPushButton::clicked, this, &QtWidgetsApplication1::DIV_FUNC);
    connect(ui.pushButton_15, &QPushButton::clicked, this, &QtWidgetsApplication1::MUL_FUNC);
    connect(ui.pushButton_16, &QPushButton::clicked, this, &QtWidgetsApplication1::BK_FUNC);
    connect(ui.pushButton_17, &QPushButton::clicked, this, &QtWidgetsApplication1::SUB_FUNC);
    connect(ui.pushButton_18, &QPushButton::clicked, this, &QtWidgetsApplication1::ADD_FUNC);
    connect(ui.pushButton_19, &QPushButton::clicked, this, &QtWidgetsApplication1::REC_FUNC);
    connect(ui.pushButton_20, &QPushButton::clicked, this, &QtWidgetsApplication1::RES_FUNC);
    connect(ui.pushButton_21, &QPushButton::clicked, this, &QtWidgetsApplication1::MC_FUNC);
    connect(ui.pushButton_22, &QPushButton::clicked, this, &QtWidgetsApplication1::M_ADD_FUNC);
    connect(ui.pushButton_23, &QPushButton::clicked, this, &QtWidgetsApplication1::M_SUB_FUNC);
    connect(ui.pushButton_24, &QPushButton::clicked, this, &QtWidgetsApplication1::MR_FUNC);
    connect(ui.pushButton_25, &QPushButton::clicked, this, &QtWidgetsApplication1::Y_POW_FUNC);
    connect(ui.pushButton_26, &QPushButton::clicked, this, &QtWidgetsApplication1::Y_SQRT_FUNC);
    connect(ui.pushButton_27, &QPushButton::clicked, this, &QtWidgetsApplication1::LOG_FUNC);
    connect(ui.pushButton_28, &QPushButton::clicked, this, &QtWidgetsApplication1::TAN_FUNC);
    connect(ui.pushButton_29, &QPushButton::clicked, this, &QtWidgetsApplication1::PI_FUNC);
    connect(ui.pushButton_30, &QPushButton::clicked, this, &QtWidgetsApplication1::RBRAC_FUNC);
    connect(ui.pushButton_31, &QPushButton::clicked, this, &QtWidgetsApplication1::CUBE_FUNC);
    connect(ui.pushButton_32, &QPushButton::clicked, this, &QtWidgetsApplication1::SQRT_FUNC);
    connect(ui.pushButton_33, &QPushButton::clicked, this, &QtWidgetsApplication1::LN_FUNC);
    connect(ui.pushButton_34, &QPushButton::clicked, this, &QtWidgetsApplication1::COS_FUNC);
    connect(ui.pushButton_35, &QPushButton::clicked, this, &QtWidgetsApplication1::RAD_DEG_FUNC);
    connect(ui.pushButton_36, &QPushButton::clicked, this, &QtWidgetsApplication1::LBRAC_FUNC);
    connect(ui.pushButton_37, &QPushButton::clicked, this, &QtWidgetsApplication1::SQR_FUNC);
    connect(ui.pushButton_38, &QPushButton::clicked, this, &QtWidgetsApplication1::FACT_FUNC);
    connect(ui.pushButton_39, &QPushButton::clicked, this, &QtWidgetsApplication1::E_FUNC);
    connect(ui.pushButton_40, &QPushButton::clicked, this, &QtWidgetsApplication1::SIN_FUNC);
    connect(ui.pushButton_41, &QPushButton::clicked, this, &QtWidgetsApplication1::LNV_FUNC);
}
QtWidgetsApplication1::~QtWidgetsApplication1()
{
}
