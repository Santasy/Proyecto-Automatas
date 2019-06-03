#ifndef VENTANAPALABRAS_H
#define VENTANAPALABRAS_H

#include <QDialog>
#include <QListWidgetItem>
#include "Core.h"

namespace Ui {
class ventanapalabras;
}

class ventanapalabras : public QDialog
{
    Q_OBJECT

public:
    explicit ventanapalabras(QWidget *parent = 0, Core *_core = nullptr);
    ~ventanapalabras();

    Core *c_data;
    int currPalabra = 0; // Índice de palabra actual procesándose

private slots:
    void on_bCheckPalabra_clicked();
    void addLog(QListWidgetItem *nItem);
    void addResult(char *texto, bool aceptada);

    void on_boxPalabra_textChanged(const QString &arg1);

private:
    Ui::ventanapalabras *ui;
};

#endif // VENTANAPALABRAS_H
