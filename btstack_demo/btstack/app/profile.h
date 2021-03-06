
// E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\profile.h generated from E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\profile.gatt for BTstack
// it needs to be regenerated when the .gatt file is updated. 

// To generate E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\profile.h:
// ..\tool\compile_gatt.py E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\profile.gatt E:\work_layne\layne\GIT_HUB_CODE\btstack_master\example\profile.h

// att db format version 1

// binary attribute representation:
// - size in bytes (16), flags(16), handle (16), uuid (16/128), value(...)

#include <stdint.h>

const uint8_t profile_data[] =
{
    // ATT DB Version
    1,

    // 0x0001 PRIMARY_SERVICE-GAP_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x28, 0x00, 0x18, 
    // 0x0002 CHARACTERISTIC-GAP_DEVICE_NAME-READ
    0x0d, 0x00, 0x02, 0x00, 0x02, 0x00, 0x03, 0x28, 0x02, 0x03, 0x00, 0x00, 0x2a, 
    // 0x0003 VALUE-GAP_DEVICE_NAME-READ-'BTstack'
    // READ_ANYBODY
    0x0f, 0x00, 0x02, 0x00, 0x03, 0x00, 0x00, 0x2a, 0x42, 0x54, 0x73, 0x74, 0x61, 0x63, 0x6b, 
    // 0x0004 CHARACTERISTIC-GAP_APPEARANCE-READ
    0x0d, 0x00, 0x02, 0x00, 0x04, 0x00, 0x03, 0x28, 0x02, 0x05, 0x00, 0x01, 0x2a, 
    // 0x0005 VALUE-GAP_APPEARANCE-READ-'00 00'
    // READ_ANYBODY
    0x0a, 0x00, 0x02, 0x00, 0x05, 0x00, 0x01, 0x2a, 0x00, 0x00, 

    // 0x0006 PRIMARY_SERVICE-GATT_SERVICE
    0x0a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x28, 0x01, 0x18, 
    // 0x0007 CHARACTERISTIC-GATT_SERVICE_CHANGED-READ
    0x0d, 0x00, 0x02, 0x00, 0x07, 0x00, 0x03, 0x28, 0x02, 0x08, 0x00, 0x05, 0x2a, 
    // 0x0008 VALUE-GATT_SERVICE_CHANGED-READ-''
    // READ_ANYBODY
    0x08, 0x00, 0x02, 0x00, 0x08, 0x00, 0x05, 0x2a, 

    // 0x0009 PRIMARY_SERVICE-FFF0
    0x0a, 0x00, 0x02, 0x00, 0x09, 0x00, 0x00, 0x28, 0xf0, 0xff, 
    // 0x000a CHARACTERISTIC-FFF1-READ | WRITE | DYNAMIC
    0x0d, 0x00, 0x02, 0x00, 0x0a, 0x00, 0x03, 0x28, 0x0a, 0x0b, 0x00, 0xf1, 0xff, 
    // 0x000b VALUE-FFF1-READ | WRITE | DYNAMIC-''
    // READ_ANYBODY, WRITE_ANYBODY
    0x08, 0x00, 0x0a, 0x01, 0x0b, 0x00, 0xf1, 0xff, 
    // 0x000c CHARACTERISTIC-FFF2-READ | WRITE | DYNAMIC
    0x0d, 0x00, 0x02, 0x00, 0x0c, 0x00, 0x03, 0x28, 0x0a, 0x0d, 0x00, 0xf2, 0xff, 
    // 0x000d VALUE-FFF2-READ | WRITE | DYNAMIC-''
    // READ_ANYBODY, WRITE_ANYBODY
    0x08, 0x00, 0x0a, 0x01, 0x0d, 0x00, 0xf2, 0xff, 
    // 0x000e CHARACTERISTIC-00001234-0000-1000-8000-00805F9B34FB-READ | WRITE | DYNAMIC
    0x1b, 0x00, 0x02, 0x00, 0x0e, 0x00, 0x03, 0x28, 0x0a, 0x0f, 0x00, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x34, 0x12, 0x00, 0x00, 
    // 0x000f VALUE-00001234-0000-1000-8000-00805F9B34FB-READ | WRITE | DYNAMIC-''
    // READ_ANYBODY, WRITE_ANYBODY
    0x16, 0x00, 0x0a, 0x03, 0x0f, 0x00, 0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0x34, 0x12, 0x00, 0x00, 

    // END
    0x00, 0x00, 
}; // total size 124 bytes 


//
// list service handle ranges
//
#define ATT_SERVICE_GAP_SERVICE_START_HANDLE 0x0001
#define ATT_SERVICE_GAP_SERVICE_END_HANDLE 0x0005
#define ATT_SERVICE_GATT_SERVICE_START_HANDLE 0x0006
#define ATT_SERVICE_GATT_SERVICE_END_HANDLE 0x0008
#define ATT_SERVICE_FFF0_START_HANDLE 0x0009
#define ATT_SERVICE_FFF0_END_HANDLE 0x000f

//
// list mapping between characteristics and handles
//
#define ATT_CHARACTERISTIC_GAP_DEVICE_NAME_01_VALUE_HANDLE 0x0003
#define ATT_CHARACTERISTIC_GAP_APPEARANCE_01_VALUE_HANDLE 0x0005
#define ATT_CHARACTERISTIC_GATT_SERVICE_CHANGED_01_VALUE_HANDLE 0x0008
#define ATT_CHARACTERISTIC_FFF1_01_VALUE_HANDLE 0x000b
#define ATT_CHARACTERISTIC_FFF2_01_VALUE_HANDLE 0x000d
#define ATT_CHARACTERISTIC_00001234_0000_1000_8000_00805F9B34FB_01_VALUE_HANDLE 0x000f
