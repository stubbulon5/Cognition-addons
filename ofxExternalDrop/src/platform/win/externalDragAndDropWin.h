#include <Shlobj.h>


// #include <afxdllx.h>

#include <winbase.h>
#include <tchar.h>
#include <windows.h>
/*
Install the Windows 10 SDK
https://developer.microsoft.com/en-us/windows/downloads/windows-10-sdk
*/
class externalDragAndDrop {

public:
    externalDragAndDrop() {
    }

    bool getIsDragging() {
        return false;
    }

    std::wstring s2ws(const std::string& s) {
        int len;
        int slength = (int)s.length() + 1;
        len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0); 
        wchar_t* buf = new wchar_t[len];
        MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
        std::wstring r(buf);
        delete[] buf;
        return r;
    }



    bool externalDragAndDropFileInit(vector<string> files) {
        /*
        if (files.size() == 0 || getIsDragging())
            return false;
        dragging = true;

        UINT           uBuffSize = 0;

        for(int i=0; i<files.size(); i++) {
            cout << "FILE:->" << files[i] << "\n";
  
            std::wstring stemp = s2ws(files[i]);
            LPCWSTR result = stemp.c_str();

            uBuffSize += lstrlen(result) + 1;
        }

        uBuffSize = sizeof(DROPFILES) + sizeof(TCHAR) * (uBuffSize + 1);

        hgDrop = GlobalAlloc ( GHND | GMEM_SHARE, uBuffSize );

        if (NULL == hgDrop) return false;

        pDrop = (DROPFILES*) GlobalLock (hgDrop);

        if (NULL == pDrop) {
            GlobalFree (hgDrop);
            return false;
        }

        // Fill in the DROPFILES struct.
        pDrop->pFiles = sizeof(DROPFILES);            

        #ifdef _UNICODE
            // If we're compiling for Unicode, set the Unicode flag in the struct to
            // indicate it contains Unicode strings.
            pDrop->fWide = TRUE;
        #endif               


        TCHAR* pszBuff;

        // Copy all the filenames into memory after
        // the end of the DROPFILES struct.
        //pos = lsDraggedFiles.GetHeadPosition();
        pszBuff = (TCHAR*) (LPBYTE(pDrop) + sizeof(DROPFILES));

        for(int i=0; i<files.size(); i++) { 
            std::wstring stemp = s2ws(files[i]);
            LPCWSTR result = stemp.c_str();

            lstrcpy (pszBuff, result);
            pszBuff = 1 + _tcschr(pszBuff, '\0');

        }


        GlobalUnlock (hgDrop);

        //The next step is to construct a COleDataSource object and put our data into it. 
        // We also need a FORMATETC struct that describes the clipboard format (CF_HDROP) and how the data is stored (an HGLOBAL).
        COleDataSource datasrc;

        HWND datasrc = ofGetWin32Window()

        FORMATETC etc = { CF_HDROP, NULL, DVASPECT_CONTENT, -1, TYMED_HGLOBAL };

        // Put the data in the data source.
        datasrc.CacheGlobalData ( CF_HDROP, hgDrop, &etc );


        // Now that we've put together the data, we can start the drag and drop operation!
        DROPEFFECT dwEffect;
        dwEffect = datasrc.DoDragDrop ( DROPEFFECT_COPY | DROPEFFECT_MOVE );


        switch (dwEffect) {
            case DROPEFFECT_COPY:
            case DROPEFFECT_MOVE: {
                // The files were copied or moved.
                // Note: Don't call GlobalFree() because
                // the data will be freed by the drop target.
                return true;
                }
            break;

            case DROPEFFECT_NONE: {
                // ** Omitted code for NT/2000 that checks
                // if the operation actually succeeded. **

                // The drag operation wasn't accepted, or was canceled, so we 
                // should call GlobalFree() to clean up.

                GlobalFree (hgDrop);
                GlobalFree (hgBool);
                }
            break;
        }
        */
        return false;
    }
    void handleExternalDragAndDropMotionNotify() {
    }

    void handleExternalDragAndDropButtonReleaseEvent() {
        cout << "DRAGGING FINISHED";
        dragging = false;
    }

private:

    HGLOBAL    hgDrop;
    DROPFILES* pDrop;

    bool dragging = false;
};
