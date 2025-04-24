/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>
#include <libinit_bt.h>

#include "vendor_init.h"

static const variant_info_t global_info = {
    .prjname_value = "21876",

    .model = "IV2201",
    .name = "IV2201EEA",
    .build_fingerprint = "OnePlus/IV2201EEA/OP555BL1:12/SP1A.210812.016/R.GDPR.202209011617:user/release-keys",
    .hw = "21876",
};

static const variant_info_t india_info = {
    .prjname_value = "21851",

    .model = "IV2201",
    .name = "IV2201_IND",
    .build_fingerprint = "OnePlus/IV2201_IND/OP555BL1:12/SP1A.210812.016/R.c59ba1_22f75:user/release-keys",
    .hw = "21851",
};

static const std::vector<variant_info_t> variants = {
    global_info,
    india_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
    set_bt_props();
}
