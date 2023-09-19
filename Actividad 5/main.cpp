#include <QApplication>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "neurona.h"
#include "administradorneuronas.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Crear una instancia del administrador de neuronas
    administrador = new AdministradorNeuronas;

    // Conectar los botones a las ranuras (slots) correspondientes
    connect(ui->agregarInicioButton, &QPushButton::clicked, this, &MainWindow::agregarNeuronaAlInicio);
    connect(ui->agregarFinalButton, &QPushButton::clicked, this, &MainWindow::agregarNeuronaAlFinal);
    connect(ui->mostrarButton, &QPushButton::clicked, this, &MainWindow::mostrarNeuronas);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete administrador;
}

void MainWindow::agregarNeuronaAlInicio()
{
    // Obtener datos de la interfaz gráfica y crear una neurona
    int id = ui->idLineEdit->text().toInt();
    double voltaje = ui->voltajeLineEdit->text().toDouble();
    int posX = ui->posXLineEdit->text().toInt();
    int posY = ui->posYLineEdit->text().toInt();
    int red = ui->redLineEdit->text().toInt();
    int green = ui->greenLineEdit->text().toInt();
    int blue = ui->blueLineEdit->text().toInt();

    Neurona neurona(id, voltaje, posX, posY, red, green, blue);

    // Agregar la neurona al inicio del administrador de neuronas
    administrador->agregarInicio(neurona);
}

void MainWindow::agregarNeuronaAlFinal()
{
    // Obtener datos de la interfaz gráfica y crear una neurona
    int id = ui->idLineEdit->text().toInt();
    double voltaje = ui->voltajeLineEdit->text().toDouble();
    int posX = ui->posXLineEdit->text().toInt();
    int posY = ui->posYLineEdit->text().toInt();
    int red = ui->redLineEdit->text().toInt();
    int green = ui->greenLineEdit->text().toInt();
    int blue = ui->blueLineEdit->text().toInt();

    Neurona neurona(id, voltaje, posX, posY, red, green, blue);

    // Agregar la neurona al final del administrador de neuronas
    administrador->agregarFinal(neurona);
}

void MainWindow::mostrarNeuronas()
{
    // Limpiar el QPlainTextEdit antes de mostrar las neuronas
    ui->plainTextEdit->clear();

    // Obtener y mostrar la información de las neuronas en el QPlainTextEdit
    administrador->mostrar();
}
