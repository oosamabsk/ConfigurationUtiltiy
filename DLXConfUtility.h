#include <WriterBase.h>
#include <KernelAPI.h>


class DLXConfUtility : WriterBase {
public:
    DLXConfUtility(KernelAPI * pKernelAPI);
    virtual ~DLXConfUtility();

    virtual bool fConfigure() = 0;
    virtual std::vector<std::wstring> fScan() = 0;
    virtual std::vector<std::wstring> fScanLinux() = 0;
    virtual std::vector<std::wstring> fScanWindows() = 0;
    virtual bool fConnect(const std::wstring& ssid) = 0;
    virtual void fSendSSH(const std::wstring& cmd) = 0;
    virtual void fReset() = 0;
};
