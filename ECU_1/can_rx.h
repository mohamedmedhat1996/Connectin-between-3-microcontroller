void
CANIntHandler(void);
void
CAN_Int(void);
 extern tCANMsgObject sCANMessage;
extern  uint8_t pui8MsgData[8];
extern volatile bool g_bRXFlag;
extern volatile bool g_bErrFlag;
extern volatile uint32_t g_ui32MsgCount;
extern tCANMsgObject sCANMessage_TX;
extern uint32_t ui32MsgData_TX;
extern uint8_t *pui8MsgData_TX;
