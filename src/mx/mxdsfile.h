#ifndef MXDSFILE_H
#define MXDSFILE_H

class MxDSFile {
public:
    MxDSFile(const char*, unsigned long);
    virtual ~MxDSFile();

    virtual long Open(unsigned long);
    virtual long Close();
    virtual long Read(unsigned char*, unsigned long);
    virtual long Seek(long, int);

    virtual unsigned long GetBufferSize();
    virtual unsigned long GetStreamBuffersNum();
}

MxDSObject* CreateStreamObject(MxDSFile*, short);

#endif // MXDSFILE_H
