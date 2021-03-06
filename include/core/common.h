/**
 * @file include/core/common.h
 * @author Francois Berder, Michal Tusnio
 * @date 2016
 * @copyright 3-clause BSD
 */


#ifndef H_CORE_COMMON
#define H_CORE_COMMON

#include <stdint.h>

#define MAX_STR_LENGTH          (255)

/** Index of Mikrobus interfaces */
enum MIKROBUS_INDEX {
    MIKROBUS_1,
    MIKROBUS_2,
    MIKROBUS_COUNT
};

/**
 * @brief Checks if mikrobus exists
 *
 * @param[in] mikrobus_index Mikrobus to check
 * @return 0 if successful, -1 otherwise
 */
int check_valid_mikrobus(uint8_t mikrobus_index);

#endif
