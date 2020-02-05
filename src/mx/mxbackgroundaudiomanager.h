#ifndef MXBACKGROUNDAUDIOMANAGER_H
#define MXBACKGROUNDAUDIOMANAGER_H

/**
 * @brief The MxBackgroundAudioManager class
 *
 * 0x150 bytes in size.
 */
class MxBackgroundAudioManager {
public:
  MxBackgroundAudioManager();

  void Enable(unsigned char);

private:
  int unk0[0x54];

};

#endif // MXBACKGROUNDAUDIOMANAGER_H
