#ifndef MXUNKNOWNMANAGER1_H
#define MXUNKNOWNMANAGER1_H

/**
 * @brief One of many unknown managers
 *
 * 0x38 bytes in size
 * Stored in MxOmni+1C
 */
class MxObjectFactory {
public:
    // sub_100B0D80
    MxObjectFactory();

private:
    char unk_[0x38];
};

#endif // MXUNKNOWNMANAGER1_H
