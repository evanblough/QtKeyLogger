#include <QObject>

class Transmitter : public QObject
{
    Q_OBJECT

public:
    Transmitter() { m_value = 0; }

    int value() const { return m_value; }

public slots:
    void setValue(bool value);

signals:
    void valueChanged(int newValue);

private:
    int m_value;
};
