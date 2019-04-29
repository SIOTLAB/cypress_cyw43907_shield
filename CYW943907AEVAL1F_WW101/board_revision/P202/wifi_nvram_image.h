/*
 * $ Copyright Broadcom Corporation $
 */

#ifndef INCLUDED_NVRAM_IMAGE_H_
#define INCLUDED_NVRAM_IMAGE_H_

#include <string.h>
#include <stdint.h>
#include "../generated_mac_address.txt"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Character array of NVRAM image
 * Generated from bcm943907wcd2_p213_dvt.txt
 */

static const char wifi_nvram_image[] =
        "sromrev=11"                                                         "\x00"
        "vendid=0x14e4"                                                      "\x00"
        "devid=0x43d0"                                                       "\x00"
        NVRAM_GENERATED_MAC_ADDRESS                                          "\x00"
        "nocrc=1"                                                            "\x00"
        "boardtype=0x07bb"                                                   "\x00"
        "boardrev=0x1213"                                                    "\x00"
        "xtalfreq=37400"                                                     "\x00"
        "boardflags=0xa00"                                                   "\x00"
        "boardflags2=0x40002000"                                             "\x00"
        "boardflags3=0x08100100"                                             "\x00"
        "rxgains2gelnagaina0=0"                                              "\x00"
        "rxgains2gtrisoa0=0"                                                 "\x00"
        "rxgains2gtrelnabypa0=0"                                             "\x00"
        "rxgains5gelnagaina0=0"                                              "\x00"
        "rxgains5gtrisoa0=0"                                                 "\x00"
        "rxgains5gtrelnabypa0=0"                                             "\x00"
        "pdgain5g=5"                                                         "\x00"
        "pdgain2g=5"                                                         "\x00"
        "rxchain=1"                                                          "\x00"
        "txchain=1"                                                          "\x00"
        "aa2g=3"                                                             "\x00"
        "aa5g=3"                                                             "\x00"
        "swdiv_en=1"                                                         "\x00"
        "swdiv_gpio=0"                                                       "\x00"
        "swdiv_swctrl_en=2"                                                  "\x00"
        "swdiv_swctrl_ant0=0"                                                "\x00"
        "swdiv_swctrl_ant1=1"                                                "\x00"
        "tssipos5g=1"                                                        "\x00"
        "tssipos2g=1"                                                        "\x00"
        "femctrl=0"                                                          "\x00"
        "pa2ga0=-179,5709,-665"                                              "\x00"
        "pa2ga1=-155,4023,-541"                                              "\x00"
        "pa5ga0=-152,5562,-639,-160,5561,-645,-146,5324,-628,-149,5373,-628" "\x00"
        "pa5ga1=-159,3360,-481,-166,3361,-475,-117,3690,-526,-136,3387,-494" "\x00"
        "pdoffset2g40ma0=0x9"                                                "\x00"
        "pdoffsetcckma0=0xf"                                                 "\x00"
        "pdoffset40ma0=0xbaaa"                                               "\x00"
        "pdoffset80ma0=0x9899"                                               "\x00"
        "pdoffset5gsubbanda0=0x88a8"                                         "\x00"
        "extpagain5g=2"                                                      "\x00"
        "extpagain2g=2"                                                      "\x00"
        "maxp2ga0=0x4a"                                                      "\x00"
        "maxp5ga0=0x46,0x46,0x42,0x42"                                       "\x00"
        "cckbw202gpo=0"                                                      "\x00"
        "cckbw20ul2gpo=0"                                                    "\x00"
        "mcsbw202gpo=0xb8544433"                                             "\x00"
        "mcsbw402gpo=0xc9666433"                                             "\x00"
        "mcsbw205glpo=0xa8754100"                                            "\x00"
        "mcsbw405glpo=0xdb975511"                                            "\x00"
        "mcsbw805glpo=0xec975522"                                            "\x00"
        "mcsbw205gmpo=0xb9865200"                                            "\x00"
        "mcsbw405gmpo=0xdb875511"                                            "\x00"
        "mcsbw805gmpo=0xeb975522"                                            "\x00"
        "mcsbw205ghpo=0xba865200"                                            "\x00"
        "mcsbw405ghpo=0xca754422"                                            "\x00"
        "mcsbw805ghpo=0xeba54422"                                            "\x00"
        "dot11agofdmhrbw202gpo=0x4443"                                       "\x00"
        "ofdmlrbw202gpo=0x0033"                                              "\x00"
        "swctrlmap_2g=0x00002111,0x00002212,0x00002212,0x000000,0x0ff"       "\x00"
        "swctrlmap_5g=0x00002414,0x00002818,0x00002818,0x000000,0x0ff"       "\x00"
        "swctrlmapext_5g=0x00000000,0x00000000,0x00000000,0x000000,0x000"    "\x00"
        "swctrlmapext_2g=0x00000000,0x00000000,0x00000000,0x000000,0x000"    "\x00"
        "itrsw=1"                                                            "\x00"
        "rssi_delta_5gh=2,2,2,2,-6,-6,-6,-6,2,2,2,2"                         "\x00"
        "rssi_delta_5gmu=2,2,2,2,-6,-6,-6,-6,2,2,2,2"                        "\x00"
        "rssi_delta_5gml=2,2,2,2,-6,-6,-6,-6,2,2,2,2"                        "\x00"
        "rssi_delta_5gl=2,2,2,2,-6,-6,-6,-6,2,2,2,2"                         "\x00"
        "rssi_delta_2gb0=-8,0,0,0,-12,0,0,0"                                 "\x00"
        "rssi_delta_2gb1=0,0,0,0,0,0,0,0"                                    "\x00"
        "rssi_delta_2gb2=0,0,0,0,0,0,0,0"                                    "\x00"
        "rssi_delta_2gb3=0,0,0,0,0,0,0,0"                                    "\x00"
        "rssi_delta_2gb4=0,0,0,0,0,0,0,0"                                    "\x00"
        "rssi_cal_freq_grp_2g=0x0,0x00,0x00,0x08,0x00,0x00,0x00"             "\x00"
        "rssi_cal_rev=1"                                                     "\x00"
        "rxgaincal_rssical=1"                                                "\x00"
        "rssi_qdB_en=1"                                                      "\x00"
        "fdss_level_2g=2,-1"                                                 "\x00"
        "fdss_level_5g=2,-1"                                                 "\x00"
        "tworangetssi2g=1"                                                   "\x00"
        "tworangetssi5g=1"                                                   "\x00"
        "phycal_tempdelta=20"                                                "\x00"
        "cal_period=0"                                                       "\x00"
        "temp_based_dutycy_en=1"                                             "\x00"
        "tx_duty_cycle_ofdm=100"                                             "\x00"
        "tx_duty_cycle_cck=100"                                              "\x00"
        "tx_ofdm_temp_0=115"                                                 "\x00"
        "tx_cck_temp_0=115"                                                  "\x00"
        "tx_ofdm_dutycy_0=40"                                                "\x00"
        "tx_cck_dutycy_0=40"                                                 "\x00"
        "tx_ofdm_temp_1=255"                                                 "\x00"
        "tx_cck_temp_1=255"                                                  "\x00"
        "tx_ofdm_dutycy_1=40"                                                "\x00"
        "tx_cck_dutycy_1=40"                                                 "\x00"
        "\x00\x00";
#ifdef __cplusplus
} /*extern "C" */
#endif

#else /* ifndef INCLUDED_NVRAM_IMAGE_H_ */

#error Wi-Fi NVRAM image included twice

#endif /* ifndef INCLUDED_NVRAM_IMAGE_H_ */