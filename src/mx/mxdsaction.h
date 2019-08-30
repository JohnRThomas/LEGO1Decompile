class MxDSAction {
public:
    __declspec(dllexport) MxDSAction();
    __declspec(dllexport) virtual ~MxDSAction();
};

__declspec(dllexport) long Start(class MxDSAction*);
