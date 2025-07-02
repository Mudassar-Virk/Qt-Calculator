
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_plus_clicked();

    void on_minus_clicked();

    void on_mult_clicked();

    void on_div_clicked();

    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_shall_linkActivated(const QString &link);

    void on_he_textChanged(const QString &arg1);

    void on_eq_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_sin_clicked();

    void on_cos_clicked();

    void on_clear_clicked();

private:
    Ui::MainWindow *ui;
};

