#include "addshader.h"

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef _MSC_VER
    __declspec(align(8))
#elif defined(__GNUC__)
__attribute__((aligned(8)))
#endif
    uint32_t shader[64] = {
        0x15827d80, 0x10020027,
        0x15827d80, 0x10020067,
        0x15827d80, 0x100200a7,
        0x15827d80, 0x100200e7,
        0x90000040, 0xe0020c67,
        0x80042000, 0xe0020c67,
        0x15067d80, 0x10020ca7,
        0x15ca7d80, 0x100009e7,
        0x90000040, 0xe0020c67,
        0x80042010, 0xe0020c67,
        0x150a7d80, 0x10020ca7,
        0x15ca7d80, 0x100009e7,
        0x00801a00, 0xe0020c67,
        0x00401a08, 0xe0021c67,
        0x009e7000, 0x100009e7,
        0x009e7000, 0x100009e7,
        0x009e7000, 0x100009e7,
        0x15c27d80, 0x10020867,
        0x159f2fc0, 0x100009e7,
        0x15c27d80, 0x100208a7,
        0x159f2fc0, 0x100009e7,
        0x0c9e7280, 0x10020867,
        0x159e7240, 0x10020c27,
        0x159f2fc0, 0x100009e7,
        0x0d001dc0, 0xd0022027,
        0xffffffa0, 0xf03809e7,
        0x82101080, 0xe0021c67,
        0x150e7d80, 0x10021ca7,
        0x159f2fc0, 0x100009e7,
        0x009e7000, 0x300009e7,
        0x00000001, 0xe00209a7,
        0x009e7000, 0x100009e7};
#ifdef __HIGHC__
#pragma Align_to(8, shader)
#ifdef __cplusplus
}
#endif
#endif
