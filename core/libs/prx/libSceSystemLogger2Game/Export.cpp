#include "prx/libSceSystemLogger2Game/include/InventoryExports.hpp"
#include <cstddef>
#include <cstdint>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI sceSystemLogger2GameGetTimestamp() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

int APS5_VABI sceSystemLogger2GameSetEvent() {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}


APS5_DUMMY_FUN

}
