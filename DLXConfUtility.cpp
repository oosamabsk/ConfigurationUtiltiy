#include <DLXConfUtility.h>
#include <Utilities.h>

DLXConfUtility::DLXConfUtility(KernelAPI * pKernelAPI): WriterBase(pKernelAPI),pKernelAPI(pKernelAPI){

}

DLXConfUtility::~DLXConfUtility(){

}

bool DLXConfUtility::fConfigure()
{
    // Parse ini file
    // Passs args to fParseCSV
    // loop over the data inside the csv
    // cehck whether the information found or not
    //   -  rerun the configurattion with the current settings
    // else
    // search for the first unused row and uses the data defined in that row
    // to configure tester settings
    // Change column used to yes and update computer name and MAC Adderess
    return true;
}

