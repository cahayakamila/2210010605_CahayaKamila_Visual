#include "admin.h"

admin::admin() {}

void admin::setIdAdmin(QString IdAdmin)
{
    this->IdAdmin = IdAdmin;
}

int admin::getId()
{
    int getIdValue = 0;

    if (this->IdAdmin == "1") {
        getIdValue = 1;
    } else if (this->IdAdmin == "2") {
        getIdValue = 2;
    } else if (this->IdAdmin == "3") {
        getIdValue = 3;
    } else if (this->IdAdmin == "4") {
        getIdValue = 4;
    }

    return getIdValue;
}

void admin::setUsername(QString username)
{
    this->username = username;
}

QString admin::getUsername()
{
    if (this->username == "PTL") {
        return "Joko";
    } else {
        return "Purnomo";
    }
}

void admin::setPassword(int password)
{
    this->password = password;
}

int admin::getPassword()
{
    int getPasswordValue = 0;

    if (this->password == 3) {
        getPasswordValue = 123;
    } else if (this->password >= 3 && this->password <= 123456) {
        getPasswordValue = this->password;
    }

    return getPasswordValue;
}

void admin::setAlamat(QString alamat)
{
    this->alamat = alamat;
}

QString admin::getAlamat()
{
    QString getAlamatValue;

    if (this->alamat == "landasan ulin") {
        getAlamatValue = "banjarbaru";
    } else if (this->alamat == "gadang") {
        getAlamatValue = "banjarmasin";
    } else if (this->alamat == "bincau") {
        getAlamatValue = "martapura";
    }

    return getAlamatValue;
}
