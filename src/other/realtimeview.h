#ifndef REALTIMEVIEW_H
#define REALTIMEVIEW_H

class RealtimeView {
public:
    RealtimeView();

    static void SetUserMaxLOD(float);
    static void SetPartsThreshold(float);

    static float GetUseMaxLOD();
    static float GetPartsThreshold();
}

#endif // REALTIMEVIEW_H
