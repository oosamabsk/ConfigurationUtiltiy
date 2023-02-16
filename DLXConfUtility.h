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
    virtual void fConfigure(const std::string &ssh_cmd,std::string ip,std::string passowrd,std::string username) = 0;
    virtual void fReset() = 0;
protected:
    KernelAPI * pKernelAPI;
};
