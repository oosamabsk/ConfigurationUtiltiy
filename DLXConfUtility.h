#include <WriterBase.h>
#include <KernelAPI.h>

#include <QtCore/QStringList>
#include <QtDBus/QtDBus>
#include <QDebug>
#include <QThread>

class DLXConfUtility : public WriterBase {
public:
    DLXConfUtility(KernelAPI * pKernelAPI);
    virtual ~DLXConfUtility();
    virtual std::vector<std::wstring> fScan() = 0;
    virtual bool fConnect(std::wstring ssid=L"") = 0;
    virtual bool fConnectUSB() = 0;
    virtual void fConfigureSSH(std::string ip,std::string passowrd,std::string username) = 0;
    virtual void fConfigureUSB() = 0;
    virtual void fReset() = 0;
    virtual std::vector<std::vector<std::string>> fParseCSV() = 0;
protected:
    KernelAPI * pKernelAPI;
};
