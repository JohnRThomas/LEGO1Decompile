class LegoInputManager {
public:
    LegoInputManager();

    void Register(MxCore*);
    void UnRegister(MxCore*);

    void QueueEvent(NoticationId, unsigned char, long, long, unsigned char);
};

LegoInputManager* InputManager();
