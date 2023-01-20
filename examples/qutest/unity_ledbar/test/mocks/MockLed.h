// AUTOGENERATED FILE. DO NOT EDIT.
#ifndef _MOCKLED_H
#define _MOCKLED_H

#include "unity.h"
#include "Led.h"

// Ignore the following warnings, since we are copying code
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

#ifdef __cplusplus
extern "C" {
#endif

void MockLed_Init(void);
void MockLed_Destroy(void);
void MockLed_Verify(void);




#define Led_on_ExpectAndReturn(index, cmock_retval) Led_on_CMockExpectAndReturn(__LINE__, index, cmock_retval)
void Led_on_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint8_t index, uint32_t cmock_to_return);
#define Led_off_Expect(index) Led_off_CMockExpect(__LINE__, index)
void Led_off_CMockExpect(UNITY_LINE_TYPE cmock_line, uint8_t index);

#ifdef __cplusplus
}
#endif

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif